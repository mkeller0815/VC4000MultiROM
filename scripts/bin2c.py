#!/usr/bin/env python
# -*- coding: utf-8
#
# This helper script converts a binary rom file into a corresponding C source
# header file for inclusion into the Arduino firmware.
#
# (c) 2015 Johannes Maibaum <jmaibaum@gmail.com>
#
# The source code in this file is covered by the MIT License, see LICENSE file
# in the toplevel folder.

from datetime import date
from os.path import basename
import sys

usage = '''
{0}: Convert binary rom file into C source file.

  Usage: ./{0} <binary>.bin

  The output file name will be 'rom_<binary>.h'.
  CAUTION: An equally named file will be overwritten silently!
'''.format(basename(__file__))

# Helper function to read rom file in chunks of 16 bytes:
def read16bytes(infile):
    chunk = infile.read(16)
    while chunk:
        yield chunk
        chunk = infile.read(16)

try:
    bin_name = sys.argv[1]
    rom_name = basename(bin_name).split('.')[0]

    source_header ='''/**
 * This file was generated automatically from the binary file
 * '{0}' by {1} on {2}.
**/

#ifndef ROM_{3}_H
#define ROM_{3}_H

static unsigned char rom[] = {{
'''.format(bin_name, basename(__file__), date.today(), rom_name.upper())

    source_footer = '''}};

#endif  /* ROM_{0}_H */
'''.format(rom_name.upper())

    rom_lines = []  # Will hold the pre-formatted C source lines.

    # Read binary ROM file:
    with open(sys.argv[1], 'rb') as rom:
        for chunk in read16bytes(rom):
            bytes = bytearray(chunk)
            current_line = []

            for byte in bytes:
                current_line.append(format(byte, '#04x'))

            rom_lines.append(', '.join(current_line))

    # Write C header file:
    if rom_lines:
        with open('rom_{0}.h'.format(rom_name), 'w') as outfile:

            outfile.write(source_header)

            for nr, line in enumerate(rom_lines):
                outfile.write('    ')  # Indentation.
                outfile.write(line)

                # All lines except the last need continuation with 'c':
                if nr < len(rom_lines) - 1:
                    outfile.write(',')

                outfile.write('\n')

            outfile.write(source_footer)

except IndexError:
    print(usage)
except IOError as err:
    print(err)
    print(usage)
