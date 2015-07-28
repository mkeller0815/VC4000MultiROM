EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:MultiRomCard
LIBS:MultiRomCard-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Interton VC4000 MultiRom Cartridge"
Date "Tuesday, July 28, 2015"
Rev "0.1"
Comp "Mario Keller and Johannes Maibaum"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L 74HC595 U2
U 1 1 54871FDF
P 4150 2300
F 0 "U2" H 3800 2900 70  0000 C CNN
F 1 "74HC595" H 4300 1700 70  0000 C CNN
F 2 "Housings_DIP:DIP-16__300_ELL" H 4150 2300 60  0001 C CNN
F 3 "" H 4150 2300 60  0000 C CNN
	1    4150 2300
	1    0    0    -1  
$EndComp
$Comp
L 74HC595 U3
U 1 1 54872016
P 4150 3700
F 0 "U3" H 3800 4300 70  0000 C CNN
F 1 "74HC595" H 4300 3100 70  0000 C CNN
F 2 "Housings_DIP:DIP-16__300_ELL" H 4150 3700 60  0001 C CNN
F 3 "" H 4150 3700 60  0000 C CNN
	1    4150 3700
	1    0    0    -1  
$EndComp
$Comp
L 74HC595 U4
U 1 1 5487203D
P 4150 5100
F 0 "U4" H 3800 5700 70  0000 C CNN
F 1 "74HC595" H 4300 4500 70  0000 C CNN
F 2 "Housings_DIP:DIP-16__300_ELL" H 4150 5100 60  0001 C CNN
F 3 "" H 4150 5100 60  0000 C CNN
	1    4150 5100
	1    0    0    -1  
$EndComp
$Comp
L 74HC245 U7
U 1 1 54D63519
P 8750 3450
F 0 "U7" H 9050 2800 60  0000 L BNN
F 1 "74HC245" H 8350 4100 60  0000 L TNN
F 2 "Housings_DIP:DIP-20__300_ELL" H 8750 3450 60  0001 C CNN
F 3 "" H 8750 3450 60  0000 C CNN
	1    8750 3450
	-1   0    0    1   
$EndComp
$Comp
L 74HC245 U8
U 1 1 54D63544
P 8750 4850
F 0 "U8" H 9050 4200 60  0000 L BNN
F 1 "74HC245" H 8350 5500 60  0000 L TNN
F 2 "Housings_DIP:DIP-20__300_ELL" H 8750 4850 60  0001 C CNN
F 3 "" H 8750 4850 60  0000 C CNN
	1    8750 4850
	-1   0    0    1   
$EndComp
$Comp
L 6264 U5
U 1 1 54D63FC2
P 6150 2550
F 0 "U5" H 5800 3250 60  0000 C CNN
F 1 "6264" H 6450 1850 60  0000 C CNN
F 2 "Housings_DIP:DIP-28__600_ELL" H 6150 2650 60  0001 C CNN
F 3 "" H 6150 2650 60  0000 C CNN
	1    6150 2550
	1    0    0    -1  
$EndComp
Entry Wire Line
	5250 2050 5350 2150
Entry Wire Line
	5250 2150 5350 2250
Entry Wire Line
	5250 2250 5350 2350
Entry Wire Line
	5250 2350 5350 2450
Entry Wire Line
	5250 2450 5350 2550
Entry Wire Line
	5250 2550 5350 2650
Entry Wire Line
	5250 2650 5350 2750
Entry Wire Line
	5250 2750 5350 2850
Entry Wire Line
	5250 2850 5350 2950
Entry Wire Line
	5250 2950 5350 3050
Entry Wire Line
	5250 3050 5350 3150
Entry Wire Line
	5250 1950 5350 2050
Entry Wire Line
	5250 1850 5350 1950
Text Label 5350 1950 0    60   ~ 0
A0
Text Label 5350 2050 0    60   ~ 0
A1
Text Label 5350 2150 0    60   ~ 0
A2
Text Label 5350 2250 0    60   ~ 0
A3
Text Label 5350 2350 0    60   ~ 0
A4
Text Label 5350 2450 0    60   ~ 0
A5
Text Label 5350 2550 0    60   ~ 0
A6
Text Label 5350 2650 0    60   ~ 0
A7
Text Label 5350 2750 0    60   ~ 0
A8
Text Label 5350 2850 0    60   ~ 0
A9
Text Label 5350 2950 0    60   ~ 0
A10
Text Label 5350 3050 0    60   ~ 0
A11
Text Label 5350 3150 0    60   ~ 0
A12
Entry Wire Line
	7200 1950 7300 2050
Entry Wire Line
	7200 2050 7300 2150
Entry Wire Line
	7200 2250 7300 2350
Entry Wire Line
	7200 2350 7300 2450
Entry Wire Line
	7200 2450 7300 2550
Entry Wire Line
	7200 2550 7300 2650
Entry Wire Line
	7200 2650 7300 2750
Entry Wire Line
	7200 2150 7300 2250
Text Label 6900 1950 0    60   ~ 0
D0
Text Label 6900 2050 0    60   ~ 0
D1
Text Label 6900 2150 0    60   ~ 0
D2
Text Label 6900 2250 0    60   ~ 0
D3
Text Label 6900 2350 0    60   ~ 0
D4
Text Label 6900 2450 0    60   ~ 0
D5
Text Label 6900 2550 0    60   ~ 0
D6
Text Label 6900 2650 0    60   ~ 0
D7
Entry Wire Line
	5050 1850 5150 1750
Entry Wire Line
	5050 1950 5150 1850
Entry Wire Line
	5050 2050 5150 1950
Entry Wire Line
	5050 2150 5150 2050
Entry Wire Line
	5050 2250 5150 2150
Entry Wire Line
	5050 2350 5150 2250
Entry Wire Line
	5050 2450 5150 2350
Entry Wire Line
	5050 2550 5150 2450
Entry Wire Line
	5050 3250 5150 3150
Entry Wire Line
	5050 3350 5150 3250
Entry Wire Line
	5050 3450 5150 3350
Entry Wire Line
	5050 3650 5150 3550
Entry Wire Line
	5050 3550 5150 3450
Text Label 4850 1850 0    60   ~ 0
A0
Text Label 4850 1950 0    60   ~ 0
A1
Text Label 4850 2050 0    60   ~ 0
A2
Text Label 4850 2150 0    60   ~ 0
A3
Text Label 4850 2250 0    60   ~ 0
A4
Text Label 4850 2350 0    60   ~ 0
A5
Text Label 4850 2450 0    60   ~ 0
A6
Text Label 4850 2550 0    60   ~ 0
A7
Text Label 4850 3250 0    60   ~ 0
A8
Text Label 4850 3350 0    60   ~ 0
A9
Text Label 4850 3450 0    60   ~ 0
A10
Text Label 4850 3550 0    60   ~ 0
A11
Text Label 4850 3650 0    60   ~ 0
A12
NoConn ~ 4850 3750
NoConn ~ 4850 3850
NoConn ~ 4850 3950
Entry Wire Line
	7400 1600 7500 1700
Entry Wire Line
	7400 1700 7500 1800
Entry Wire Line
	7400 1800 7500 1900
Entry Wire Line
	7400 1900 7500 2000
Entry Wire Line
	7400 2000 7500 2100
Entry Wire Line
	7400 2200 7500 2300
Entry Wire Line
	7400 2300 7500 2400
Entry Wire Line
	7400 3150 7500 3250
Entry Wire Line
	7400 3250 7500 3350
Entry Wire Line
	7400 3450 7500 3550
Entry Wire Line
	7400 3550 7500 3650
Entry Wire Line
	7400 3650 7500 3750
Text Label 7750 2400 0    60   ~ 0
A0
Text Label 7750 2300 0    60   ~ 0
A1
Text Label 7750 2200 0    60   ~ 0
A2
Text Label 7750 2100 0    60   ~ 0
A3
Text Label 7750 2000 0    60   ~ 0
A4
Text Label 7750 1900 0    60   ~ 0
A5
Text Label 7750 1800 0    60   ~ 0
A6
Text Label 7750 1700 0    60   ~ 0
A7
Text Label 7700 3250 0    60   ~ 0
A8
Text Label 7700 3350 0    60   ~ 0
A9
Text Label 7700 3550 0    60   ~ 0
A10
Text Label 7700 3650 0    60   ~ 0
A11
Text Label 7700 3750 0    60   ~ 0
A12
NoConn ~ 8050 3950
Entry Wire Line
	4950 4650 5050 4750
Entry Wire Line
	4950 4750 5050 4850
Entry Wire Line
	4950 4850 5050 4950
Entry Wire Line
	4950 4950 5050 5050
Entry Wire Line
	4950 5050 5050 5150
Entry Wire Line
	4950 5150 5050 5250
Entry Wire Line
	4950 5250 5050 5350
Entry Wire Line
	4950 5350 5050 5450
Entry Wire Line
	7800 4750 7900 4650
Entry Wire Line
	7800 4850 7900 4750
Entry Wire Line
	7800 4950 7900 4850
Entry Wire Line
	7800 5050 7900 4950
Entry Wire Line
	7800 5150 7900 5050
Entry Wire Line
	7800 5250 7900 5150
Entry Wire Line
	7800 5350 7900 5250
Entry Wire Line
	7800 5450 7900 5350
Text Label 4850 4650 0    60   ~ 0
D0
Text Label 4850 4750 0    60   ~ 0
D1
Text Label 4850 4850 0    60   ~ 0
D2
Text Label 4850 4950 0    60   ~ 0
D3
Text Label 4850 5050 0    60   ~ 0
D4
Text Label 4850 5150 0    60   ~ 0
D5
Text Label 4850 5250 0    60   ~ 0
D6
Text Label 4850 5350 0    60   ~ 0
D7
Text Label 7900 5350 0    60   ~ 0
D0
Text Label 7900 5250 0    60   ~ 0
D1
Text Label 7900 5150 0    60   ~ 0
D2
Text Label 7900 5050 0    60   ~ 0
D3
Text Label 7900 4950 0    60   ~ 0
D4
Text Label 7900 4850 0    60   ~ 0
D5
Text Label 7900 4750 0    60   ~ 0
D6
Text Label 7900 4650 0    60   ~ 0
D7
NoConn ~ 4850 5550
Entry Wire Line
	9700 2400 9800 2300
Entry Wire Line
	9700 2300 9800 2200
Entry Wire Line
	9700 2200 9800 2100
Entry Wire Line
	9700 2100 9800 2000
Entry Wire Line
	9700 2000 9800 1900
Entry Wire Line
	9700 1900 9800 1800
Entry Wire Line
	9700 1800 9800 1700
Entry Wire Line
	9700 1700 9800 1600
Entry Wire Line
	9700 3250 9800 3150
Entry Wire Line
	9700 3350 9800 3250
Entry Wire Line
	9700 3550 9800 3450
Entry Wire Line
	9700 3650 9800 3550
Entry Wire Line
	10100 2450 10200 2550
Entry Wire Line
	10100 2350 10200 2450
Entry Wire Line
	10100 2550 10200 2650
Entry Wire Line
	10100 2650 10200 2750
Entry Wire Line
	10100 2750 10200 2850
Entry Wire Line
	10100 2850 10200 2950
Entry Wire Line
	10100 2950 10200 3050
Entry Wire Line
	10100 3050 10200 3150
Entry Wire Line
	10100 3250 10200 3350
Entry Wire Line
	10100 3350 10200 3450
Entry Wire Line
	10100 3750 10200 3850
Entry Wire Line
	10100 3850 10200 3950
Text Label 9550 2400 0    60   ~ 0
EA0
Text Label 9550 2300 0    60   ~ 0
EA1
Text Label 9550 2200 0    60   ~ 0
EA2
Text Label 9550 2100 0    60   ~ 0
EA3
Text Label 9550 2000 0    60   ~ 0
EA4
Text Label 9550 1900 0    60   ~ 0
EA5
Text Label 9550 1800 0    60   ~ 0
EA6
Text Label 9550 1700 0    60   ~ 0
EA7
Text Label 9450 3250 0    60   ~ 0
EA8
Text Label 9450 3350 0    60   ~ 0
EA9
Text Label 9450 3550 0    60   ~ 0
EA10
Text Label 9450 3650 0    60   ~ 0
EA11
Entry Wire Line
	9650 4650 9750 4750
Entry Wire Line
	9650 4750 9750 4850
Entry Wire Line
	9650 4850 9750 4950
Entry Wire Line
	9650 4950 9750 5050
Entry Wire Line
	9650 5050 9750 5150
Entry Wire Line
	9650 5150 9750 5250
Entry Wire Line
	9650 5250 9750 5350
Entry Wire Line
	9650 5350 9750 5450
Entry Wire Line
	10100 4250 10200 4150
Entry Wire Line
	10100 4150 10200 4050
Entry Wire Line
	10100 4350 10200 4250
Entry Wire Line
	10100 4450 10200 4350
Entry Wire Line
	10100 4550 10200 4450
Entry Wire Line
	10100 4850 10200 4750
Entry Wire Line
	10100 4950 10200 4850
Text Label 10200 4050 0    60   ~ 0
ED7
Text Label 10200 4150 0    60   ~ 0
ED6
Text Label 10200 4250 0    60   ~ 0
ED5
Text Label 10200 4350 0    60   ~ 0
ED4
Text Label 10200 4450 0    60   ~ 0
ED3
Text Label 10200 4650 0    60   ~ 0
ED2
Text Label 10200 4750 0    60   ~ 0
ED1
Text Label 10200 4850 0    60   ~ 0
ED0
Text Label 9450 5350 0    60   ~ 0
ED0
Text Label 9450 5250 0    60   ~ 0
ED1
Text Label 9450 5150 0    60   ~ 0
ED2
Text Label 9450 5050 0    60   ~ 0
ED3
Text Label 9450 4950 0    60   ~ 0
ED4
Text Label 9450 4850 0    60   ~ 0
ED5
Text Label 9450 4750 0    60   ~ 0
ED6
Text Label 9450 4650 0    60   ~ 0
ED7
Text Label 10200 2450 0    60   ~ 0
EA7
Text Label 10200 2550 0    60   ~ 0
EA6
Text Label 10200 2650 0    60   ~ 0
EA5
Text Label 10200 2750 0    60   ~ 0
EA4
Text Label 10200 2850 0    60   ~ 0
EA3
Text Label 10200 2950 0    60   ~ 0
EA2
Text Label 10200 3050 0    60   ~ 0
EA1
Text Label 10200 3150 0    60   ~ 0
EA0
Text Label 10200 3350 0    60   ~ 0
EA8
Text Label 10200 3450 0    60   ~ 0
EA9
Text Label 10200 3850 0    60   ~ 0
EA10
Text Label 10200 3950 0    60   ~ 0
EA11
$Comp
L VCC #PWR01
U 1 1 54D6D558
P 10400 1600
F 0 "#PWR01" H 10400 1700 30  0001 C CNN
F 1 "VCC" H 10400 1750 30  0000 C CNN
F 2 "" H 10400 1600 60  0000 C CNN
F 3 "" H 10400 1600 60  0000 C CNN
	1    10400 1600
	1    0    0    -1  
$EndComp
NoConn ~ 1400 2800
NoConn ~ 1550 2800
NoConn ~ 900  3000
NoConn ~ 900  3100
NoConn ~ 900  3200
$Comp
L VCC #PWR02
U 1 1 54D739B7
P 1700 2800
F 0 "#PWR02" H 1700 2900 30  0001 C CNN
F 1 "VCC" H 1700 2950 30  0000 C CNN
F 2 "" H 1700 2800 60  0000 C CNN
F 3 "" H 1700 2800 60  0000 C CNN
	1    1700 2800
	1    0    0    -1  
$EndComp
Text GLabel 6750 3650 0    48   Input ~ 0
WESRAM
Text GLabel 2300 4100 2    48   Output ~ 0
WESRAM
Text GLabel 2300 3600 2    48   Output ~ 0
CE1SRAM
Text GLabel 2300 3500 2    48   Output ~ 0
CE2SRAM
Text GLabel 6750 3750 0    48   Input ~ 0
CE2SRAM
Text GLabel 6750 3850 0    48   Input ~ 0
CE1SRAM
NoConn ~ 2200 4300
NoConn ~ 2200 4200
$Comp
L VCC #PWR03
U 1 1 54DB48BB
P 3250 1650
F 0 "#PWR03" H 3250 1750 30  0001 C CNN
F 1 "VCC" H 3250 1800 30  0000 C CNN
F 2 "" H 3250 1650 60  0000 C CNN
F 3 "" H 3250 1650 60  0000 C CNN
	1    3250 1650
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 54DB55F6
P 9500 4450
F 0 "#PWR04" H 9500 4450 30  0001 C CNN
F 1 "GND" H 9500 4380 30  0001 C CNN
F 2 "" H 9500 4450 60  0000 C CNN
F 3 "" H 9500 4450 60  0000 C CNN
	1    9500 4450
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR05
U 1 1 54DB5800
P 9500 2900
F 0 "#PWR05" H 9500 3000 30  0001 C CNN
F 1 "VCC" H 9500 3050 30  0000 C CNN
F 2 "" H 9500 2900 60  0000 C CNN
F 3 "" H 9500 2900 60  0000 C CNN
	1    9500 2900
	1    0    0    -1  
$EndComp
Text GLabel 2300 3700 2    48   Output ~ 0
OEVCBUS
Text GLabel 9650 2900 1    48   Input ~ 0
OEVCBUS
Text GLabel 9550 4350 2    48   Input ~ 0
OEVCBUS
Text GLabel 9650 1400 2    48   Input ~ 0
OEVCBUS
NoConn ~ 9450 3950
$Comp
L GND #PWR06
U 1 1 54DB7B7A
P 10450 4900
F 0 "#PWR06" H 10450 4900 30  0001 C CNN
F 1 "GND" H 10450 4830 30  0001 C CNN
F 2 "" H 10450 4900 60  0000 C CNN
F 3 "" H 10450 4900 60  0000 C CNN
	1    10450 4900
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR07
U 1 1 54DB8BDD
P 9750 3900
F 0 "#PWR07" H 9750 3900 30  0001 C CNN
F 1 "GND" H 9750 3830 30  0001 C CNN
F 2 "" H 9750 3900 60  0000 C CNN
F 3 "" H 9750 3900 60  0000 C CNN
	1    9750 3900
	1    0    0    -1  
$EndComp
NoConn ~ 900  4000
NoConn ~ 900  4100
NoConn ~ 900  4200
NoConn ~ 900  4300
Entry Wire Line
	10100 4750 10200 4650
Entry Wire Line
	7400 2100 7500 2200
$Comp
L C C1
U 1 1 55855363
P 4600 7100
F 0 "C1" H 4625 7200 50  0000 L CNN
F 1 ".1uF" H 4625 7000 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Disc_D6_P5" H 4638 6950 30  0001 C CNN
F 3 "" H 4600 7100 60  0000 C CNN
	1    4600 7100
	1    0    0    -1  
$EndComp
$Comp
L C C2
U 1 1 558556DE
P 4900 7100
F 0 "C2" H 4925 7200 50  0000 L CNN
F 1 ".1uF" H 4925 7000 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Disc_D6_P5" H 4938 6950 30  0001 C CNN
F 3 "" H 4900 7100 60  0000 C CNN
	1    4900 7100
	1    0    0    -1  
$EndComp
$Comp
L C C3
U 1 1 55855710
P 5200 7100
F 0 "C3" H 5225 7200 50  0000 L CNN
F 1 ".1uF" H 5225 7000 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Disc_D6_P5" H 5238 6950 30  0001 C CNN
F 3 "" H 5200 7100 60  0000 C CNN
	1    5200 7100
	1    0    0    -1  
$EndComp
$Comp
L C C4
U 1 1 55855748
P 5500 7100
F 0 "C4" H 5525 7200 50  0000 L CNN
F 1 ".1uF" H 5525 7000 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Disc_D6_P5" H 5538 6950 30  0001 C CNN
F 3 "" H 5500 7100 60  0000 C CNN
	1    5500 7100
	1    0    0    -1  
$EndComp
$Comp
L C C5
U 1 1 55855787
P 5800 7100
F 0 "C5" H 5825 7200 50  0000 L CNN
F 1 ".1uF" H 5825 7000 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Disc_D6_P5" H 5838 6950 30  0001 C CNN
F 3 "" H 5800 7100 60  0000 C CNN
	1    5800 7100
	1    0    0    -1  
$EndComp
$Comp
L C C6
U 1 1 558557C4
P 6100 7100
F 0 "C6" H 6125 7200 50  0000 L CNN
F 1 ".1uF" H 6125 7000 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Disc_D6_P5" H 6138 6950 30  0001 C CNN
F 3 "" H 6100 7100 60  0000 C CNN
	1    6100 7100
	1    0    0    -1  
$EndComp
$Comp
L C C7
U 1 1 55855806
P 6400 7100
F 0 "C7" H 6425 7200 50  0000 L CNN
F 1 ".1uF" H 6425 7000 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Disc_D6_P5" H 6438 6950 30  0001 C CNN
F 3 "" H 6400 7100 60  0000 C CNN
	1    6400 7100
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR08
U 1 1 558564D3
P 4400 7250
F 0 "#PWR08" H 4400 7250 30  0001 C CNN
F 1 "GND" H 4400 7180 30  0001 C CNN
F 2 "" H 4400 7250 60  0000 C CNN
F 3 "" H 4400 7250 60  0000 C CNN
	1    4400 7250
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR09
U 1 1 5585650E
P 4400 6950
F 0 "#PWR09" H 4400 7050 30  0001 C CNN
F 1 "VCC" H 4400 7100 30  0000 C CNN
F 2 "" H 4400 6950 60  0000 C CNN
F 3 "" H 4400 6950 60  0000 C CNN
	1    4400 6950
	1    0    0    -1  
$EndComp
Text Notes 4850 6850 0    60   ~ 0
IC Power Decoupling Caps
$Comp
L GND #PWR010
U 1 1 5587E24F
P 10500 2050
F 0 "#PWR010" H 10500 2050 30  0001 C CNN
F 1 "GND" H 10500 1980 30  0001 C CNN
F 2 "" H 10500 2050 60  0000 C CNN
F 3 "" H 10500 2050 60  0000 C CNN
	1    10500 2050
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR011
U 1 1 5587EA58
P 1600 2450
F 0 "#PWR011" H 1600 2450 30  0001 C CNN
F 1 "GND" H 1600 2380 30  0001 C CNN
F 2 "" H 1600 2450 60  0000 C CNN
F 3 "" H 1600 2450 60  0000 C CNN
	1    1600 2450
	1    0    0    -1  
$EndComp
NoConn ~ 2200 3400
Wire Wire Line
	4950 3000 3350 3000
Wire Wire Line
	4950 4400 3350 4400
Wire Wire Line
	5350 1950 5550 1950
Wire Wire Line
	5550 2150 5350 2150
Wire Wire Line
	5550 2250 5350 2250
Wire Wire Line
	5550 2350 5350 2350
Wire Wire Line
	5550 2450 5350 2450
Wire Wire Line
	5550 2550 5350 2550
Wire Wire Line
	5550 2650 5350 2650
Wire Wire Line
	5550 2750 5350 2750
Wire Wire Line
	5550 2850 5350 2850
Wire Wire Line
	5550 2950 5350 2950
Wire Wire Line
	5550 3050 5350 3050
Wire Wire Line
	5550 3150 5350 3150
Wire Wire Line
	5550 2050 5350 2050
Wire Wire Line
	6750 1950 7200 1950
Wire Wire Line
	6750 2050 7200 2050
Wire Wire Line
	6750 2150 7200 2150
Wire Wire Line
	6750 2250 7200 2250
Wire Wire Line
	6750 2350 7200 2350
Wire Wire Line
	6750 2450 7200 2450
Wire Wire Line
	6750 2550 7200 2550
Wire Wire Line
	6750 2650 7200 2650
Wire Wire Line
	4850 1850 5050 1850
Wire Wire Line
	4850 1950 5050 1950
Wire Wire Line
	4850 2050 5050 2050
Wire Wire Line
	4850 2150 5050 2150
Wire Wire Line
	4850 2250 5050 2250
Wire Wire Line
	4850 2350 5050 2350
Wire Wire Line
	4850 2450 5050 2450
Wire Wire Line
	4850 2550 5050 2550
Wire Wire Line
	4850 3250 5050 3250
Wire Wire Line
	4850 3350 5050 3350
Wire Wire Line
	4850 3450 5050 3450
Wire Wire Line
	4850 3550 5050 3550
Wire Wire Line
	4850 3650 5050 3650
Wire Bus Line
	5150 1500 5150 3550
Wire Bus Line
	5250 1500 5250 3050
Wire Wire Line
	7500 3250 8050 3250
Wire Wire Line
	7500 3350 8050 3350
Wire Wire Line
	7500 2400 8050 2400
Wire Wire Line
	7500 2300 8050 2300
Wire Wire Line
	7500 2200 8050 2200
Wire Wire Line
	7500 2100 8050 2100
Wire Wire Line
	7500 2000 8050 2000
Wire Wire Line
	7500 1900 8050 1900
Wire Wire Line
	7500 1800 8050 1800
Wire Wire Line
	7500 1700 8050 1700
Wire Bus Line
	7400 1500 7400 3650
Wire Wire Line
	6750 3150 6850 3150
Wire Wire Line
	6750 3050 6950 3050
Wire Wire Line
	6950 2850 6950 3850
Wire Bus Line
	7300 2050 7300 5550
Wire Wire Line
	7900 4750 8050 4750
Wire Wire Line
	7900 4650 8050 4650
Wire Wire Line
	7900 4850 8050 4850
Wire Wire Line
	7900 4950 8050 4950
Wire Wire Line
	7900 5050 8050 5050
Wire Wire Line
	7900 5150 8050 5150
Wire Wire Line
	7900 5250 8050 5250
Wire Wire Line
	7900 5350 8050 5350
Wire Wire Line
	4850 4650 4950 4650
Wire Wire Line
	4850 4750 4950 4750
Wire Wire Line
	4850 4850 4950 4850
Wire Wire Line
	4850 4950 4950 4950
Wire Wire Line
	4850 5050 4950 5050
Wire Wire Line
	4850 5150 4950 5150
Wire Wire Line
	4850 5250 4950 5250
Wire Wire Line
	4850 5350 4950 5350
Wire Bus Line
	7800 4750 7800 5550
Wire Bus Line
	5050 4750 5050 5550
Wire Wire Line
	4850 4150 4950 4150
Wire Wire Line
	4950 4150 4950 4400
Wire Wire Line
	3350 4400 3350 4650
Wire Wire Line
	3350 4650 3450 4650
Wire Wire Line
	3350 3000 3350 3250
Wire Wire Line
	3350 3250 3450 3250
Wire Wire Line
	4950 3000 4950 2750
Wire Wire Line
	4950 2750 4850 2750
Wire Wire Line
	9450 1700 9700 1700
Wire Wire Line
	9450 1800 9700 1800
Wire Wire Line
	9450 1900 9700 1900
Wire Wire Line
	9450 2000 9700 2000
Wire Wire Line
	9450 2100 9700 2100
Wire Wire Line
	9450 2200 9700 2200
Wire Wire Line
	9450 2300 9700 2300
Wire Wire Line
	9450 2400 9700 2400
Wire Wire Line
	9450 3250 9700 3250
Wire Wire Line
	9450 3350 9700 3350
Wire Bus Line
	5150 1500 7400 1500
Wire Wire Line
	10200 2450 10550 2450
Wire Wire Line
	10200 2550 10550 2550
Wire Wire Line
	10200 2650 10550 2650
Wire Wire Line
	10200 2750 10550 2750
Wire Wire Line
	10200 2850 10550 2850
Wire Wire Line
	10200 2950 10550 2950
Wire Wire Line
	10200 3050 10550 3050
Wire Wire Line
	10200 3150 10550 3150
Wire Wire Line
	10200 3450 10550 3450
Wire Wire Line
	10200 3850 10550 3850
Wire Wire Line
	10200 3950 10550 3950
Wire Bus Line
	10100 1500 10100 3850
Wire Bus Line
	10100 1500 9800 1500
Wire Bus Line
	9800 1500 9800 3750
Wire Wire Line
	9450 4650 9650 4650
Wire Wire Line
	9450 4750 9650 4750
Wire Wire Line
	9450 4850 9650 4850
Wire Wire Line
	9450 4950 9650 4950
Wire Wire Line
	9450 5050 9650 5050
Wire Wire Line
	9450 5150 9650 5150
Wire Wire Line
	9450 5250 9650 5250
Wire Wire Line
	9450 5350 9650 5350
Wire Wire Line
	10200 4850 10550 4850
Wire Wire Line
	10200 4750 10550 4750
Wire Wire Line
	10200 4450 10550 4450
Wire Wire Line
	10200 4350 10550 4350
Wire Wire Line
	10200 4050 10550 4050
Wire Bus Line
	9750 4750 9750 5550
Wire Wire Line
	10400 1600 10400 3250
Wire Wire Line
	10400 3250 10550 3250
Wire Bus Line
	9750 5550 10100 5550
Wire Wire Line
	2200 3800 2850 3800
Wire Wire Line
	2850 3800 2850 1850
Wire Wire Line
	2850 1850 3450 1850
Wire Wire Line
	700  3700 700  5250
Wire Wire Line
	700  5250 3450 5250
Wire Wire Line
	3150 4750 800  4750
Wire Wire Line
	3150 2450 3150 4750
Wire Wire Line
	3150 3850 3450 3850
Wire Wire Line
	3150 2450 3450 2450
Connection ~ 3150 3850
Wire Wire Line
	800  4750 800  3600
Wire Wire Line
	2950 3900 2200 3900
Wire Wire Line
	2950 2050 2950 4850
Wire Wire Line
	2950 2050 3450 2050
Wire Wire Line
	2950 3450 3450 3450
Connection ~ 2950 3450
Wire Wire Line
	2950 4850 3450 4850
Connection ~ 2950 3900
Wire Wire Line
	3050 2350 3050 5150
Wire Wire Line
	3050 3750 3450 3750
Wire Wire Line
	3050 2350 3450 2350
Connection ~ 3050 3750
Wire Wire Line
	3050 4000 2200 4000
Wire Wire Line
	3050 5150 3450 5150
Connection ~ 3050 4000
Wire Wire Line
	2200 4100 2300 4100
Wire Wire Line
	2200 3500 2300 3500
Wire Wire Line
	3250 1650 3250 4950
Wire Wire Line
	3250 2150 3450 2150
Wire Wire Line
	3250 3550 3450 3550
Connection ~ 3250 2150
Wire Wire Line
	3250 4950 3450 4950
Connection ~ 3250 3550
Wire Wire Line
	2200 3600 2300 3600
Wire Wire Line
	2300 3700 2200 3700
Wire Wire Line
	6950 2850 6750 2850
Connection ~ 6950 3050
Wire Wire Line
	6850 3150 6850 3650
Wire Wire Line
	10200 3350 10550 3350
Wire Wire Line
	10200 4150 10550 4150
Wire Wire Line
	10200 4250 10550 4250
Wire Wire Line
	10200 4650 10550 4650
Wire Wire Line
	10450 4900 10450 4550
Wire Wire Line
	10450 4550 10550 4550
Wire Wire Line
	6850 3650 6750 3650
Wire Wire Line
	6750 3850 8050 3850
Wire Wire Line
	9450 3850 9700 3850
Wire Wire Line
	10200 3550 10550 3550
Wire Wire Line
	10200 3650 10550 3650
Wire Bus Line
	5050 5550 7800 5550
Connection ~ 6950 3850
Wire Wire Line
	6750 2950 7050 2950
Wire Wire Line
	7050 2950 7050 3750
Wire Wire Line
	10500 2050 10550 2050
Wire Wire Line
	10550 1950 10400 1950
Connection ~ 10400 1950
Wire Wire Line
	9650 1400 9450 1400
Wire Wire Line
	9550 4350 9450 4350
Wire Wire Line
	9500 4450 9450 4450
Wire Bus Line
	10100 5700 10100 4150
Wire Wire Line
	9650 2950 9450 2950
Wire Wire Line
	9650 2950 9650 2900
Wire Wire Line
	9450 3050 9500 3050
Wire Wire Line
	7050 3750 6750 3750
Wire Wire Line
	8050 3750 7500 3750
Wire Wire Line
	8050 3650 7500 3650
Wire Wire Line
	7500 3550 8050 3550
Wire Wire Line
	9450 3750 9750 3750
Wire Wire Line
	9450 3650 9700 3650
Wire Wire Line
	9450 3550 9700 3550
Wire Wire Line
	8050 3450 7500 3450
Wire Wire Line
	7500 3450 7500 3400
Wire Wire Line
	7500 3400 7050 3400
Connection ~ 7050 3400
Wire Wire Line
	4400 6950 6400 6950
Connection ~ 4900 6950
Connection ~ 5200 6950
Connection ~ 5500 6950
Connection ~ 5800 6950
Connection ~ 6100 6950
Wire Wire Line
	4400 7250 6400 7250
Connection ~ 4900 7250
Connection ~ 5200 7250
Connection ~ 5500 7250
Connection ~ 5800 7250
Connection ~ 6100 7250
Connection ~ 4600 6950
Connection ~ 4600 7250
Wire Wire Line
	1500 2350 1600 2350
Wire Wire Line
	1600 2350 1600 1650
Wire Wire Line
	2600 1950 2600 3300
Wire Wire Line
	2600 3300 2200 3300
Wire Wire Line
	2200 3000 2300 3000
Wire Wire Line
	1500 2050 2300 2050
Wire Wire Line
	2300 2050 2300 3000
Wire Wire Line
	1500 2150 2500 2150
Wire Wire Line
	2500 2150 2500 3200
Wire Wire Line
	2500 3200 2200 3200
Wire Wire Line
	1500 2450 1600 2450
$Comp
L VCC #PWR012
U 1 1 5587FD9D
P 1600 1650
F 0 "#PWR012" H 1600 1750 30  0001 C CNN
F 1 "VCC" H 1600 1800 30  0000 C CNN
F 2 "" H 1600 1650 60  0000 C CNN
F 3 "" H 1600 1650 60  0000 C CNN
	1    1600 1650
	1    0    0    -1  
$EndComp
NoConn ~ 900  3800
NoConn ~ 900  3900
$Comp
L GND #PWR013
U 1 1 54D739DD
P 1550 4600
F 0 "#PWR013" H 1550 4600 30  0001 C CNN
F 1 "GND" H 1550 4530 30  0001 C CNN
F 2 "" H 1550 4600 60  0000 C CNN
F 3 "" H 1550 4600 60  0000 C CNN
	1    1550 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 4500 1500 4550
Wire Wire Line
	1500 4550 1600 4550
Wire Wire Line
	1600 4550 1600 4500
Wire Wire Line
	1550 4550 1550 4600
Connection ~ 1550 4550
Entry Wire Line
	9700 3450 9800 3350
Wire Wire Line
	9700 3450 9450 3450
Wire Wire Line
	10550 3750 10200 3750
Entry Wire Line
	10100 3650 10200 3750
Text Label 9450 3450 0    60   ~ 0
CE2
Text Label 10200 3750 0    60   ~ 0
CE2
Entry Wire Line
	10100 3450 10200 3550
Entry Wire Line
	10100 3550 10200 3650
Text Label 10200 3550 0    60   ~ 0
PVISEL
Text Label 10200 3650 0    60   ~ 0
EA12
Wire Wire Line
	7300 6200 7300 5800
Wire Wire Line
	7400 6200 7400 5800
Wire Wire Line
	7500 6200 7500 5800
Wire Wire Line
	7700 6200 7700 5800
Wire Wire Line
	7800 6200 7800 5800
Wire Wire Line
	7900 6200 7900 5800
Wire Wire Line
	8000 6200 8000 5800
Wire Wire Line
	8100 6200 8100 5800
Wire Wire Line
	8200 6200 8200 5800
Wire Wire Line
	8300 6200 8300 5800
Wire Wire Line
	8400 6200 8400 5800
Wire Wire Line
	8500 6200 8500 5800
Wire Wire Line
	8600 6200 8600 5800
Wire Wire Line
	8700 6200 8700 5800
Wire Wire Line
	8800 6200 8800 5800
Wire Wire Line
	9000 6200 9000 5800
Wire Wire Line
	9100 6200 9100 5800
Wire Wire Line
	9200 6200 9200 5800
Wire Wire Line
	9300 6200 9300 5800
Wire Wire Line
	9400 6200 9400 5800
Wire Wire Line
	9500 6200 9500 5800
Wire Wire Line
	9600 6200 9600 5800
Wire Wire Line
	9700 6200 9700 5800
Entry Wire Line
	7300 5800 7400 5700
Entry Wire Line
	7400 5800 7500 5700
Entry Wire Line
	7500 5800 7600 5700
Entry Wire Line
	7700 5800 7800 5700
Entry Wire Line
	7800 5800 7900 5700
Entry Wire Line
	7900 5800 8000 5700
Entry Wire Line
	8000 5800 8100 5700
Entry Wire Line
	8100 5800 8200 5700
Entry Wire Line
	8200 5800 8300 5700
Entry Wire Line
	8300 5800 8400 5700
Entry Wire Line
	8400 5800 8500 5700
Entry Wire Line
	8500 5800 8600 5700
Entry Wire Line
	8600 5800 8700 5700
Entry Wire Line
	8700 5800 8800 5700
Entry Wire Line
	8800 5800 8900 5700
Entry Wire Line
	9000 5800 9100 5700
Entry Wire Line
	9100 5800 9200 5700
Entry Wire Line
	9200 5800 9300 5700
Entry Wire Line
	9300 5800 9400 5700
Entry Wire Line
	9400 5800 9500 5700
Entry Wire Line
	9500 5800 9600 5700
Entry Wire Line
	9600 5800 9700 5700
Entry Wire Line
	9700 5800 9800 5700
Wire Bus Line
	7400 5700 10100 5700
Text Label 7300 6050 1    60   ~ 0
ED0
Text Label 7400 6050 1    60   ~ 0
ED1
Text Label 7500 6050 1    60   ~ 0
ED2
Text Label 7700 6050 1    60   ~ 0
ED3
Text Label 7800 6050 1    60   ~ 0
ED4
Text Label 7900 6050 1    60   ~ 0
ED5
Text Label 8000 6050 1    60   ~ 0
ED6
Text Label 8100 6050 1    60   ~ 0
ED7
Text Label 8200 6050 1    60   ~ 0
EA11
Text Label 8300 6050 1    60   ~ 0
EA10
Text Label 8400 6050 1    60   ~ 0
CE2
Wire Wire Line
	10500 3650 10500 3550
Connection ~ 10500 3550
Connection ~ 10500 3650
Text Label 8500 6050 1    60   ~ 0
EA12
Text Label 8600 6050 1    60   ~ 0
PVISEL
Text Label 8700 6050 1    60   ~ 0
EA9
Text Label 8800 6050 1    60   ~ 0
EA8
Text Label 9000 6050 1    60   ~ 0
EA0
Text Label 9100 6050 1    60   ~ 0
EA1
Text Label 9200 6050 1    60   ~ 0
EA2
Text Label 9300 6050 1    60   ~ 0
EA3
Text Label 9400 6050 1    60   ~ 0
EA4
Text Label 9500 6050 1    60   ~ 0
EA5
Text Label 9600 6050 1    60   ~ 0
EA6
Text Label 9700 6050 1    60   ~ 0
EA7
Wire Wire Line
	7600 6200 7600 6150
Wire Wire Line
	7600 6150 7200 6150
$Comp
L GND #PWR014
U 1 1 558C6EB1
P 7200 6150
F 0 "#PWR014" H 7200 6150 30  0001 C CNN
F 1 "GND" H 7200 6080 30  0001 C CNN
F 2 "" H 7200 6150 60  0000 C CNN
F 3 "" H 7200 6150 60  0000 C CNN
	1    7200 6150
	1    0    0    -1  
$EndComp
Wire Wire Line
	8900 6200 8900 6100
Wire Wire Line
	8900 6100 10200 6100
Wire Wire Line
	10200 6050 10200 6200
Wire Wire Line
	10100 6200 10100 6150
$Comp
L GND #PWR015
U 1 1 558C7DE5
P 10300 6150
F 0 "#PWR015" H 10300 6150 30  0001 C CNN
F 1 "GND" H 10300 6080 30  0001 C CNN
F 2 "" H 10300 6150 60  0000 C CNN
F 3 "" H 10300 6150 60  0000 C CNN
	1    10300 6150
	1    0    0    -1  
$EndComp
Wire Wire Line
	10100 6150 10300 6150
$Comp
L VCC #PWR016
U 1 1 558C7FFB
P 10200 6050
F 0 "#PWR016" H 10200 6150 30  0001 C CNN
F 1 "VCC" H 10200 6200 30  0000 C CNN
F 2 "" H 10200 6050 60  0000 C CNN
F 3 "" H 10200 6050 60  0000 C CNN
	1    10200 6050
	1    0    0    -1  
$EndComp
Connection ~ 10200 6100
Wire Wire Line
	9800 6200 9800 5800
Wire Wire Line
	9900 6200 9900 5800
Wire Wire Line
	10000 6200 10000 5800
$Comp
L VC4000_Cartridge_Bus P1
U 1 1 54D6988D
P 10900 3350
F 0 "P1" H 10900 4950 60  0000 C CNN
F 1 "VC4000_Cartridge_Bus" V 10650 3350 60  0000 C CNN
F 2 "VC4000_MultiRom:VC4000_CartridgeBus" H 10950 3350 60  0001 C CNN
F 3 "" H 10950 3350 60  0000 C CNN
	1    10900 3350
	-1   0    0    1   
$EndComp
Wire Wire Line
	10550 2350 10200 2350
Wire Wire Line
	10550 2250 10200 2250
Wire Wire Line
	10550 2150 10200 2150
Entry Wire Line
	10100 2250 10200 2350
Entry Wire Line
	10100 2150 10200 2250
Entry Wire Line
	10100 2050 10200 2150
Text Label 10200 2150 0    60   ~ 0
P28
Text Label 10200 2250 0    60   ~ 0
P27
Text Label 10200 2350 0    60   ~ 0
P26
Entry Wire Line
	9800 5800 9900 5700
Entry Wire Line
	9900 5800 10000 5700
Entry Wire Line
	10000 5800 10100 5700
$Comp
L CONN_01X30 P3
U 1 1 558CA714
P 8750 6400
F 0 "P3" V 8750 8000 50  0000 C CNN
F 1 "Test Header" V 8750 4650 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x30" H 8750 6400 60  0001 C CNN
F 3 "" H 8750 6400 60  0000 C CNN
	1    8750 6400
	0    -1   1    0   
$EndComp
Text Label 9800 6050 1    60   ~ 0
P26
Text Label 9900 6050 1    60   ~ 0
P27
Text Label 10000 6050 1    60   ~ 0
P28
Wire Wire Line
	9500 3050 9500 2900
$Comp
L 74HC245 U6
U 1 1 54D634ED
P 8750 1900
F 0 "U6" H 9050 1250 60  0000 L BNN
F 1 "74HC245" H 8350 2550 60  0000 L TNN
F 2 "Housings_DIP:DIP-20__300_ELL" H 8750 1900 60  0001 C CNN
F 3 "" H 8750 1900 60  0000 C CNN
	1    8750 1900
	-1   0    0    1   
$EndComp
Wire Wire Line
	9450 1500 9500 1500
Wire Wire Line
	9500 1500 9500 1300
$Comp
L VCC #PWR017
U 1 1 559131AE
P 9500 1300
F 0 "#PWR017" H 9500 1400 30  0001 C CNN
F 1 "VCC" H 9500 1450 30  0000 C CNN
F 2 "" H 9500 1300 60  0000 C CNN
F 3 "" H 9500 1300 60  0000 C CNN
	1    9500 1300
	1    0    0    -1  
$EndComp
$Comp
L Arduino_Nano U1
U 1 1 55AE1829
P 1550 3650
F 0 "U1" H 1100 4400 60  0000 C CNN
F 1 "Arduino_Nano" H 1950 2900 60  0000 C CNN
F 2 "VC4000_MultiRom:Arduino_Nano" H 1550 3500 60  0001 C CNN
F 3 "" H 1550 3500 60  0000 C CNN
	1    1550 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	800  3600 900  3600
Wire Wire Line
	700  3700 900  3700
Entry Wire Line
	9700 3850 9800 3750
Text Label 9450 3850 0    60   ~ 0
EA12
Wire Wire Line
	9750 3750 9750 3900
$Comp
L MicroSD_Breakout P2
U 1 1 55B39402
P 1300 2200
F 0 "P2" H 1400 2550 60  0000 C CNN
F 1 "MicroSD_Breakout" V 1600 2200 60  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x06" H 1300 2200 60  0001 C CNN
F 3 "" H 1300 2200 60  0000 C CNN
	1    1300 2200
	-1   0    0    -1  
$EndComp
Wire Wire Line
	2600 1950 1500 1950
Wire Wire Line
	1500 2250 2400 2250
Wire Wire Line
	2400 2250 2400 3100
Wire Wire Line
	2400 3100 2200 3100
$EndSCHEMATC
