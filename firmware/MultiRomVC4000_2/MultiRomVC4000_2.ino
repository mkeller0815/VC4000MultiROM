#include <avr/pgmspace.h>

#define ROMSIZE 2048

const byte romImage[] PROGMEM = {
0x1f, 0x00, 0x20, 0x17, 0x06, 0x20, 0x0e, 0x47, 0xa3, 0xce, 0x7f, 0x80, 0x5a, 0x78, 0x17, 0x05,
0xf6, 0x0e, 0x26, 0xca, 0xcd, 0x7e, 0x0a, 0x0f, 0x26, 0xca, 0xcd, 0x7e, 0x1a, 0xd9, 0x72, 0x17,
0x20, 0xc3, 0xcf, 0x5f, 0x00, 0x5b, 0x7b, 0x92, 0xcc, 0x5e, 0xc9, 0xcc, 0x1f, 0x0f, 0x04, 0x02,
0x93, 0xbb, 0x04, 0x04, 0x17, 0xcc, 0x1f, 0x0c, 0xcc, 0x1f, 0x1c, 0x06, 0x01, 0x3f, 0x06, 0x89,
0x04, 0xfe, 0xcc, 0x1f, 0x2d, 0xcc, 0x1f, 0x4d, 0x04, 0x01, 0xcc, 0x1f, 0x5c, 0xcc, 0x1f, 0xc9,
0x04, 0x0f, 0xcc, 0x1f, 0x0e, 0x04, 0x28, 0xcc, 0x1f, 0x62, 0x20, 0xcc, 0x1f, 0x6c, 0xcc, 0x1f,
0x6d, 0xcc, 0x1f, 0x6a, 0xcc, 0x5e, 0x68, 0x04, 0x32, 0xcc, 0x1f, 0x1e, 0x05, 0x08, 0x0d, 0x47,
0xc3, 0xcd, 0x7f, 0xa0, 0x59, 0x78, 0x04, 0x14, 0xcc, 0x1f, 0x68, 0x0d, 0x1f, 0x5c, 0xf5, 0x01,
0x98, 0x01, 0x20, 0xcc, 0x1f, 0x69, 0x0d, 0x1f, 0x6a, 0x18, 0x0a, 0xa5, 0x01, 0xe5, 0x20, 0x98,
0x09, 0x04, 0x08, 0x1b, 0x02, 0x04, 0x04, 0xcc, 0x1e, 0x80, 0xcd, 0x1f, 0x6a, 0x3f, 0x04, 0xd0,
0x20, 0xcc, 0x1f, 0xc0, 0x04, 0x3b, 0x2c, 0x1f, 0x63, 0x64, 0x08, 0xcc, 0x1f, 0xab, 0xcc, 0x1f,
0xc6, 0x0c, 0x1f, 0x0f, 0x9c, 0x01, 0x0f, 0x0c, 0x1f, 0xaa, 0x18, 0x2d, 0x0d, 0x1f, 0x68, 0x69,
0xc3, 0x6d, 0x1f, 0x2a, 0x6d, 0x1f, 0x4a, 0x18, 0x20, 0x0c, 0x1f, 0x6b, 0xe4, 0x08, 0x1a, 0x0b,
0x24, 0x04, 0xf4, 0x06, 0x18, 0x05, 0x0d, 0x1f, 0x67, 0x18, 0x0e, 0x0c, 0x1f, 0x4f, 0xf8, 0x2d,
0xc8, 0xa6, 0xcc, 0x5e, 0xc9, 0xc8, 0x9c, 0x1b, 0x26, 0x06, 0x1c, 0xbb, 0x06, 0x0c, 0x1f, 0x5d,
0xcc, 0x1f, 0xc8, 0x04, 0xff, 0xcc, 0x1f, 0x0f, 0x0d, 0x1f, 0x5c, 0xf5, 0x01, 0x18, 0x03, 0x0c,
0x1f, 0x5e, 0xcc, 0x1f, 0xc9, 0x04, 0x01, 0xcc, 0x1f, 0xc3, 0x1f, 0x02, 0xeb, 0xc8, 0xcd, 0x04,
0x3f, 0xcc, 0x1f, 0xc2, 0x08, 0xb4, 0xf4, 0x06, 0x18, 0x04, 0x05, 0x03, 0x1b, 0x14, 0x0d, 0x1f,
0x2c, 0x06, 0x20, 0x3b, 0xb5, 0x08, 0xa0, 0xc8, 0x9b, 0x18, 0x07, 0x08, 0x83, 0x44, 0xeb, 0xcc,
0x1f, 0x58, 0x06, 0x2a, 0x3b, 0xb6, 0x0c, 0x1f, 0x64, 0x0d, 0x1f, 0x5a, 0x06, 0x2a, 0x07, 0x2c,
0x3f, 0x04, 0x38, 0x0c, 0x1f, 0xad, 0xcc, 0x1f, 0x6c, 0x0c, 0x1f, 0x6b, 0xf4, 0x06, 0x18, 0x04,
0x05, 0x03, 0x1b, 0x15, 0x0d, 0x1f, 0x4c, 0x06, 0x40, 0x3f, 0x06, 0x6e, 0x08, 0xa0, 0xc8, 0xe4,
0x18, 0x07, 0x08, 0x83, 0x44, 0xf5, 0xcc, 0x1f, 0x58, 0x06, 0x4a, 0x3f, 0x06, 0x7c, 0x0c, 0x1f,
0x65, 0x0d, 0x1f, 0x5b, 0x06, 0x4a, 0x07, 0x4c, 0x3f, 0x04, 0x38, 0x08, 0xc7, 0xcc, 0x1f, 0x6d,
0x0c, 0x1f, 0x5c, 0xe4, 0x49, 0x1a, 0x24, 0x0e, 0x1f, 0x5a, 0x0f, 0x1f, 0x5b, 0x8a, 0xf9, 0x8b,
0xfa, 0x86, 0x02, 0x87, 0x02, 0x0e, 0x67, 0x9a, 0xcc, 0x1f, 0x9c, 0x84, 0x0a, 0xcc, 0x1f, 0x9d,
0x0f, 0x67, 0x9a, 0xcc, 0x1f, 0x9e, 0x84, 0x0a, 0xcc, 0x1f, 0x9f, 0x04, 0x30, 0x05, 0x80, 0x07,
0x5a, 0x0a, 0xbd, 0xe6, 0x33, 0x1a, 0x38, 0xe6, 0x48, 0x19, 0x34, 0x0c, 0x1f, 0x50, 0x0d, 0x1f,
0x51, 0x88, 0xc5, 0x89, 0xc6, 0xe4, 0x14, 0x9a, 0x04, 0x04, 0x14, 0x1b, 0x12, 0xf6, 0x01, 0x98,
0x08, 0xe4, 0x98, 0x99, 0x18, 0x04, 0x98, 0x1b, 0x14, 0xe4, 0x50, 0x99, 0x02, 0x04, 0x50, 0xe5,
0x62, 0x9a, 0x04, 0x05, 0x62, 0x1b, 0x06, 0xe5, 0x98, 0x99, 0x02, 0x05, 0x98, 0x07, 0x00, 0x0e,
0x1f, 0x5c, 0xf6, 0x01, 0x98, 0x07, 0x05, 0xff, 0xe7, 0x00, 0x18, 0x01, 0x03, 0xcc, 0x1f, 0x50,
0xcd, 0x1f, 0x51, 0x0c, 0x1f, 0x58, 0x1c, 0x02, 0x97, 0x0e, 0x1f, 0x59, 0x9c, 0x02, 0x76, 0x05,
0xff, 0xcd, 0x1f, 0xa8, 0x05, 0x01, 0xcd, 0x1f, 0xa9, 0xf4, 0x10, 0x1c, 0x02, 0x62, 0xf4, 0x04,
0x18, 0x25, 0xf4, 0x08, 0x18, 0x19, 0x09, 0xa0, 0x85, 0x01, 0x06, 0x06, 0xca, 0xa1, 0x20, 0xcc,
0x1f, 0x4c, 0x0c, 0x1f, 0x5e, 0x84, 0x66, 0x8d, 0x67, 0xcb, 0x94, 0xc8, 0xf6, 0x1b, 0x2b, 0x09,
0x87, 0x06, 0x30, 0xca, 0x8a, 0x1b, 0x67, 0x0d, 0x1f, 0x52, 0x85, 0x01, 0x06, 0x06, 0xce, 0x1f,
0x60, 0x20, 0xcc, 0x1f, 0x2c, 0x08, 0x87, 0x84, 0x66, 0x8d, 0x67, 0xcb, 0x94, 0xcc, 0x1f, 0x5d,
0x1b, 0x08, 0x09, 0xe4, 0x06, 0x30, 0xca, 0xe7, 0x1b, 0x67, 0x06, 0x15, 0xce, 0x1f, 0x59, 0xc9,
0xd7, 0x06, 0x60, 0xce, 0x1f, 0x4f, 0x3f, 0x04, 0x91, 0x5a, 0x1c, 0x09, 0xcb, 0x04, 0x77, 0xcd,
0x7f, 0x80, 0xe5, 0x02, 0x1a, 0x11, 0xe5, 0x1a, 0x9a, 0x0d, 0xf5, 0x02, 0x18, 0x04, 0xa5, 0x02,
0x1b, 0x02, 0x85, 0x02, 0xcd, 0x7f, 0x80, 0x20, 0xcc, 0x1f, 0x54, 0x0d, 0x1f, 0x0f, 0x98, 0x33,
0x0c, 0x1f, 0x56, 0x84, 0x01, 0xc8, 0xfa, 0x0d, 0x1f, 0x5c, 0xe5, 0x17, 0x1a, 0x0b, 0xe4, 0x80,
0x98, 0x07, 0x0d, 0x1f, 0xac, 0x25, 0xff, 0xc9, 0xfa, 0xf4, 0x04, 0x98, 0x04, 0x05, 0x02, 0xc9,
0xd8, 0x0d, 0x1f, 0x57, 0x85, 0x02, 0xc9, 0xfa, 0x0d, 0x1f, 0x55, 0x44, 0x01, 0x18, 0x02, 0x85,
0x01, 0xc9, 0xf6, 0x0e, 0x1f, 0xa9, 0x18, 0x11, 0xfa, 0x0f, 0x0d, 0x1f, 0xa8, 0x0d, 0x27, 0xe7,
0xcc, 0x1f, 0xc7, 0x18, 0x04, 0xc9, 0xf4, 0x06, 0x01, 0xca, 0xe9, 0xb4, 0x80, 0x18, 0x7c, 0x04,
0x80, 0xcc, 0x1f, 0x4e, 0x04, 0x09, 0xcc, 0x1f, 0x0d, 0xcc, 0x1f, 0x1d, 0x04, 0x10, 0x8c, 0x1f,
0x56, 0xcc, 0x1f, 0x0a, 0x88, 0xec, 0xcc, 0x1f, 0x1a, 0x06, 0x00, 0x05, 0x02, 0x89, 0x98, 0x3b,
0x99, 0x04, 0x60, 0xac, 0x1f, 0x57, 0x06, 0x01, 0x05, 0x06, 0x89, 0x8b, 0x3b, 0x8c, 0x04, 0x40,
0x88, 0xf2, 0x06, 0x02, 0x05, 0x0a, 0x8d, 0x1f, 0x54, 0x3f, 0x03, 0xec, 0x04, 0x30, 0xac, 0x1f,
0x55, 0x06, 0x03, 0x05, 0x0e, 0x89, 0xf0, 0x3b, 0xf1, 0x04, 0x19, 0x28, 0xbc, 0x64, 0x08, 0xcc,
0x1f, 0xab, 0x04, 0x20, 0x88, 0xe9, 0x06, 0x04, 0x05, 0x00, 0x3b, 0xde, 0x06, 0x05, 0x04, 0x50,
0x0f, 0x1f, 0xac, 0x98, 0x06, 0x88, 0x8f, 0x05, 0x12, 0x1b, 0x07, 0xa8, 0x89, 0x05, 0x14, 0x1f,
0x03, 0x62, 0x3f, 0x03, 0xec, 0x0c, 0x1f, 0x56, 0x06, 0x06, 0x05, 0x14, 0xcd, 0x1f, 0x0d, 0xcd,
0x1f, 0x1d, 0x05, 0x1a, 0x3b, 0xed, 0x04, 0x6e, 0x2c, 0x1f, 0x63, 0x64, 0x08, 0xcc, 0x1f, 0xc6,
0xcc, 0x1f, 0xab, 0x04, 0x20, 0xa8, 0xdf, 0x06, 0x07, 0x05, 0x28, 0xc9, 0xad, 0xc9, 0xae, 0x05,
0x16, 0x0b, 0xd3, 0x47, 0x08, 0x98, 0x03, 0xc0, 0x05, 0x18, 0x3b, 0xc7, 0x04, 0x2a, 0x28, 0xd9,
0x64, 0x08, 0xc8, 0xda, 0x04, 0x3f, 0x28, 0xd1, 0xcc, 0x1f, 0xc1, 0x0c, 0x1f, 0x50, 0x0d, 0x1f,
0x51, 0xcc, 0x1f, 0x0b, 0xcd, 0x1f, 0x1b, 0x04, 0xff, 0xcc, 0x1f, 0x0d, 0xcc, 0x1f, 0x1d, 0x04,
0x05, 0xcc, 0x1f, 0xc0, 0x0e, 0x1f, 0x9c, 0x0f, 0x1f, 0x9e, 0xbb, 0x0f, 0x04, 0xda, 0xf8, 0x7e,
0x0e, 0x1f, 0x9d, 0x0f, 0x1f, 0x9f, 0xbb, 0x0f, 0x04, 0xfe, 0xc8, 0xde, 0xc8, 0xdf, 0x08, 0xaf,
0x08, 0xad, 0x44, 0x0c, 0x18, 0x7a, 0x0c, 0x1f, 0xcb, 0x1f, 0x00, 0x86, 0xcd, 0x1f, 0x1f, 0xce,
0x1f, 0x61, 0xcc, 0x1f, 0x0b, 0x8c, 0x1f, 0x4e, 0xcc, 0x1f, 0x1b, 0x0e, 0x7f, 0xa0, 0x2c, 0x1f,
0x63, 0xcc, 0x1f, 0xc1, 0x0d, 0x7f, 0x80, 0xc2, 0x0d, 0x7f, 0x81, 0xc3, 0xbb, 0x0f, 0x0c, 0x1f,
0xca, 0x44, 0x0c, 0x18, 0x79, 0x0c, 0x1f, 0xab, 0xcc, 0x1f, 0xc6, 0x09, 0xd0, 0x0a, 0xd1, 0x0c,
0x1f, 0xcb, 0x44, 0x1e, 0x1c, 0x04, 0x37, 0x0f, 0x1f, 0x58, 0x8f, 0x1f, 0x0f, 0x98, 0x08, 0xcd,
0x1f, 0x52, 0xc8, 0xf4, 0xce, 0x1f, 0x5f, 0x17, 0xcc, 0x1f, 0x66, 0x0c, 0x1f, 0x6b, 0xf4, 0x06,
0x98, 0x20, 0x0c, 0x1f, 0xad, 0x18, 0x0a, 0x0f, 0x7f, 0x00, 0x98, 0x1f, 0x20, 0xc8, 0xf4, 0x1b,
0x05, 0x0f, 0x7f, 0x00, 0x18, 0x11, 0x84, 0x02, 0xe4, 0xba, 0x98, 0x11, 0x20, 0xcf, 0x7f, 0x00,
0x1b, 0x05, 0x0f, 0x7f, 0x00, 0x98, 0x04, 0xce, 0x7f, 0x00, 0x17, 0xa4, 0x02, 0xcf, 0x7f, 0x00,
0x0e, 0x7f, 0x00, 0x0f, 0x1f, 0x5c, 0xe7, 0x17, 0x1a, 0x13, 0xe7, 0x33, 0x1a, 0x07, 0xe7, 0x49,
0x1a, 0x0b, 0x0d, 0x1f, 0x66, 0x0f, 0x1f, 0x56, 0x47, 0x01, 0x18, 0x01, 0x81, 0xce, 0x7f, 0x00,
0x17, 0x0e, 0x1f, 0x5d, 0xce, 0x1f, 0xc8, 0x0e, 0x1f, 0x5e, 0x0c, 0x1f, 0x5c, 0xf4, 0x01, 0x98,
0x02, 0x06, 0xff, 0xce, 0x1f, 0xc9, 0x06, 0x01, 0xce, 0x1f, 0xc3, 0x0e, 0x1f, 0x59, 0xf6, 0x07,
0x98, 0x0c, 0x0d, 0x1f, 0x5f, 0x0d, 0x7f, 0xa0, 0x2c, 0x1f, 0x60, 0xcd, 0x7f, 0xa0, 0xa6, 0x01,
0xca, 0xea, 0x98, 0x0b, 0x20, 0xcc, 0x1f, 0x58, 0x0c, 0x1f, 0xaa, 0xa4, 0x01, 0xc8, 0xfa, 0x17,
0x0c, 0x1e, 0x8b, 0xf4, 0x40, 0x98, 0x1d, 0x05, 0x01, 0xcd, 0x1f, 0x0f, 0x1b, 0x94, 0x20, 0xcc,
0x1f, 0x0f, 0xcc, 0x1f, 0x5d, 0xcc, 0x1f, 0x5e, 0xcc, 0x5e, 0x68, 0xcc, 0x1f, 0xc8, 0xcc, 0x1f,
0xc9, 0x1f, 0x05, 0x3b, 0xf4, 0x80, 0x9c, 0x05, 0x6a, 0x04, 0x28, 0xcc, 0x1f, 0x62, 0x0d, 0x1f,
0x0e, 0x9c, 0x05, 0x62, 0x05, 0x10, 0x08, 0x93, 0x0e, 0x1f, 0x6b, 0x86, 0x01, 0x46, 0x0f, 0x84,
0x67, 0x94, 0xe4, 0x64, 0x99, 0x04, 0x04, 0x01, 0x06, 0x00, 0xcc, 0x1f, 0x5c, 0xc8, 0xd0, 0x24,
0xff, 0xa4, 0x99, 0xcc, 0x1f, 0xc7, 0x04, 0x04, 0xcc, 0x1f, 0xa9, 0x04, 0x13, 0xcc, 0x1f, 0xa8,
0xca, 0xd7, 0x20, 0xcc, 0x1f, 0xc3, 0xcc, 0x5e, 0xc9, 0xc8, 0xb0, 0xbb, 0x04, 0x04, 0x10, 0xcc,
0x1f, 0xaa, 0x06, 0x00, 0x08, 0xc3, 0xe4, 0x02, 0x1a, 0x06, 0xe4, 0x04, 0x1a, 0x04, 0x1b, 0x05,
0x06, 0x01, 0x3f, 0x06, 0x89, 0x06, 0x05, 0x20, 0xce, 0x5f, 0x55, 0x5a, 0x7b, 0x08, 0x8c, 0x1c,
0x00, 0x50, 0xa5, 0x01, 0xcd, 0x1f, 0x0e, 0x1f, 0x06, 0x3f, 0x0c, 0x1f, 0x0f, 0x1a, 0xf9, 0x9c,
0x04, 0xde, 0x0c, 0x1f, 0x59, 0x98, 0xf1, 0x12, 0x24, 0x40, 0x92, 0x05, 0x02, 0x07, 0xff, 0x0d,
0x7f, 0xcb, 0xb4, 0x40, 0x98, 0x12, 0xe4, 0x30, 0x1a, 0x08, 0x07, 0x00, 0xe4, 0x96, 0x1a, 0x02,
0x87, 0x01, 0x03, 0xcd, 0x7f, 0x59, 0xf9, 0x65, 0x08, 0xd1, 0x9c, 0x06, 0x3f, 0x0c, 0x1e, 0x89,
0x9e, 0x05, 0xec, 0x04, 0x28, 0xcc, 0x1f, 0x62, 0x0c, 0x1f, 0x2c, 0x98, 0xf4, 0x0d, 0x1f, 0x6b,
0xe5, 0x0a, 0x1a, 0x09, 0x0c, 0x1f, 0x68, 0x18, 0xe8, 0xa4, 0x01, 0xc8, 0xf8, 0x04, 0xde, 0xc8,
0xe8, 0x0c, 0x1f, 0x50, 0x0f, 0x1f, 0x5a, 0x0d, 0x1f, 0x5c, 0xe5, 0x49, 0x9a, 0x04, 0x84, 0x0c,
0x1b, 0x03, 0x8f, 0x27, 0xa0, 0xcc, 0x1f, 0x2a, 0x08, 0xeb, 0xcc, 0x1f, 0x64, 0x04, 0xff, 0xcc,
0x1f, 0x6c, 0x05, 0x10, 0xcd, 0x1e, 0x80, 0x05, 0x21, 0xcd, 0x1f, 0x6a, 0x0d, 0x1f, 0x6b, 0xf5,
0x01, 0x98, 0x84, 0x0c, 0x1e, 0x8d, 0x9e, 0x06, 0x3f, 0x04, 0x28, 0xcc, 0x1f, 0x62, 0x0c, 0x1f,
0x4c, 0x98, 0xf4, 0xe5, 0x0a, 0x1a, 0x09, 0x0c, 0x1f, 0x69, 0x18, 0xeb, 0xa4, 0x01, 0xc8, 0xf8,
0x04, 0xde, 0xc8, 0xeb, 0x0c, 0x1f, 0x51, 0x0f, 0x1f, 0x5b, 0x0d, 0x1f, 0x5c, 0xe5, 0x49, 0x9a,
0x04, 0x84, 0x0c, 0x1b, 0x03, 0x8f, 0x27, 0xa0, 0xcc, 0x1f, 0x4a, 0x08, 0xeb, 0xcc, 0x1f, 0x65,
0x04, 0xff, 0xcc, 0x1f, 0x6d, 0x05, 0x10, 0xcd, 0x1e, 0x80, 0x05, 0x21, 0xcd, 0x1f, 0x6a, 0x0f,
0x1f, 0x1e, 0xa7, 0x01, 0x98, 0x18, 0x07, 0x32, 0x09, 0x89, 0x18, 0x0b, 0x20, 0xcc, 0x1f, 0x63,
0xa5, 0x01, 0xcd, 0x1f, 0x62, 0x1b, 0x07, 0x0e, 0x1f, 0x63, 0x26, 0xff, 0xca, 0xfa, 0xcb, 0xe0,
0x0c, 0x1f, 0x56, 0xf4, 0xf0, 0x16, 0x0c, 0x1f, 0x67, 0xa4, 0x01, 0xc8, 0xfa, 0x17, 0x51, 0x51,
0x51, 0x51, 0x45, 0x0f, 0x85, 0x01, 0x51, 0x45, 0x0f, 0x85, 0x01, 0x17, 0x07, 0x0a, 0x85, 0x0a,
0x0d, 0x47, 0x87, 0xce, 0x5f, 0x00, 0xfb, 0x78, 0x17, 0x04, 0x77, 0x0f, 0x1f, 0xaa, 0xe6, 0x00,
0x18, 0x17, 0xcc, 0x1f, 0x80, 0xcc, 0x1f, 0x83, 0xcc, 0x1f, 0x85, 0xcc, 0x1f, 0x8a, 0xcc, 0x1f,
0x8c, 0xcc, 0x1f, 0x96, 0xcc, 0x1f, 0x98, 0xa7, 0x04, 0xcc, 0x1f, 0x86, 0xcc, 0x1f, 0x88, 0xcc,
0x1f, 0x8e, 0xcc, 0x1f, 0x90, 0xcc, 0x1f, 0x92, 0xcc, 0x1f, 0x93, 0xcc, 0x1f, 0x94, 0xcc, 0x1f,
0x95, 0xa7, 0x04, 0xcb, 0xc7, 0x17, 0x00, 0x10, 0x20, 0x40, 0x06, 0x05, 0x06, 0x04, 0x14, 0x3c,
0xfc, 0xfc, 0x7c, 0x38, 0x00, 0xcc, 0x6b, 0x3e, 0xfc, 0x78, 0x30, 0x70, 0xe0, 0x00, 0x00, 0x0c,
0x0b, 0x0e, 0x7c, 0xf8, 0x70, 0x20, 0x00, 0x00, 0x03, 0x06, 0x0c, 0x6d, 0xbe, 0x7e, 0x0d, 0x0c,
0x06, 0x03, 0x00, 0x00, 0x00, 0x3d, 0x5e, 0x3e, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x06, 0x6c, 0xad,
0x7f, 0x3e, 0x0c, 0x1c, 0x38, 0x00, 0x00, 0x00, 0x60, 0xad, 0x7f, 0x3e, 0x1c, 0x00, 0x00, 0x00,
0x00, 0x8c, 0x5e, 0x7d, 0x3f, 0x7e, 0x4c, 0x80, 0x00, 0x00, 0x00, 0x31, 0x7a, 0xbe, 0xfc, 0x7e,
0x32, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x0b, 0x4e, 0x4c, 0xfe, 0x7f, 0x7f, 0x3e, 0x1c, 0x20, 0x61,
0xa1, 0xfe, 0x7e, 0x3e, 0x42, 0x44, 0x24, 0x00, 0x10, 0x62, 0xa1, 0xfe, 0x7e, 0x3e, 0x42, 0x41,
0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0x85, 0x4f, 0x47,
0x22, 0x27, 0x1f, 0x1f, 0x0f, 0x07, 0x07, 0x07, 0x0e, 0x0f, 0x09, 0x09, 0x09, 0x09, 0x1b, 0x1b,
0x3a, 0x3a, 0x3a, 0x3a, 0x12, 0x3e, 0x3a, 0x3a, 0x3e, 0x3a, 0x12, 0x3a, 0x38, 0x28, 0x28, 0x28,
0x28, 0x28, 0x6c, 0x6c, 0xe1, 0xa1, 0xf2, 0xe2, 0x44, 0xe4, 0xf8, 0xf8, 0xf0, 0xe0, 0xe0, 0xe0,
0x70, 0xf0, 0x90, 0x90, 0x90, 0x90, 0xd8, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x81, 0x8b, 0x95, 0x9f, 0xa9, 0xb3,
0x00, 0x0c, 0x0e, 0xff, 0xff, 0x09, 0x09, 0x13, 0x13, 0x1d, 0x1d, 0x27, 0x27, 0x09, 0x09, 0x13,
0x13, 0x31, 0x31, 0x3b, 0x3b, 0x45, 0x45, 0x4f, 0x4f, 0x63, 0x63, 0x6d, 0x6d, 0x59, 0x59, 0x95,
0x9f, 0x95, 0x9f, 0x1e, 0x29, 0x12, 0x19, 0x3f, 0x1d, 0x22, 0x13, 0x04, 0x04, 0x0a, 0x0a, 0x0a,
0x0a, 0x08, 0x08, 0x08, 0x08, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03,
0x03, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x14, 0x12, 0x10, 0x0f, 0x0c, 0x14, 0x12, 0x10, 0x0f,
0x0c, 0x14, 0x12, 0x10, 0x0f, 0x0c, 0x14, 0x12, 0x10, 0x0f, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00
};

#define CLOCK 4    //SRCLK
#define LATCH 3    //RCLK
#define DATA  5    //SER

#define WR    2
#define OEDATA    A1  //_G DATA BUS
#define OEADDRESS A0  //_G ADDRESS BUS

#define OEVCBUS 6

#define CE1SRAM 7
#define CE2SRAM 8

#define LED 13

void setup() {
 pinMode(CLOCK,OUTPUT); 
 pinMode(LATCH,OUTPUT); 
 pinMode(DATA,OUTPUT); 
 pinMode(WR,OUTPUT);
 pinMode(OEDATA,OUTPUT);
 pinMode(OEADDRESS,OUTPUT);
 pinMode(OEVCBUS,OUTPUT);
 pinMode(LED,OUTPUT);

 disableVCBus();
 enableSRAM();

 Serial.begin(9600);
 delay(100);

 Serial.println("writing data");
 enableSRAM();
 for (int i=0;i<ROMSIZE;i++) {
    write2RAM(i,pgm_read_byte(romImage+i));
 }
 disableSRAM();

 Serial.println("done");
 Serial.println("enable bus to VC4000");
 enableVCBus();
}

void loop() {
  digitalWrite(LED,HIGH);
  delay(300);
  digitalWrite(LED,LOW);
  delay(300);
}

void enableSRAM() {
 pinMode(CE1SRAM,OUTPUT);
 pinMode(CE2SRAM,OUTPUT);
 digitalWrite(CE1SRAM,LOW);
 digitalWrite(CE2SRAM,HIGH);
}

void disableSRAM() {
  // Ensure that CE1+2 are in LOW state before turning them OFF.
  // Switching them to INPUT mode while in HIGH state will
  // activate the internal pullup resistors to VCC (which is a
  // bad idea!).
 digitalWrite(CE1SRAM,LOW);
 digitalWrite(CE2SRAM,LOW);
 pinMode(CE1SRAM,INPUT);
 pinMode(CE2SRAM,INPUT);
}


void disableVCBus() {
  digitalWrite(WR, HIGH);
  digitalWrite(OEDATA, LOW);
  digitalWrite(OEADDRESS, LOW);
  digitalWrite(OEVCBUS, HIGH);
}

void enableVCBus() {
  digitalWrite(WR, HIGH);
  digitalWrite(OEDATA, HIGH);
  digitalWrite(OEADDRESS, HIGH);
  digitalWrite(OEVCBUS, LOW);
}

void write2RAM(unsigned int address, byte data) {
  digitalWrite(OEDATA,LOW);
  digitalWrite(OEADDRESS,LOW);
  digitalWrite(WR,HIGH);
  shiftout(address,data);
  digitalWrite(WR,LOW);
  digitalWrite(WR,HIGH);
}

void shiftout(unsigned int address, byte data) {
  byte lowbyte = address & 0xff;
  byte highbyte = address >> 8;

  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,data);
  shiftOut(DATA,CLOCK,MSBFIRST,highbyte);
  shiftOut(DATA,CLOCK,MSBFIRST,lowbyte);
  digitalWrite(LATCH,HIGH);
  delay(1);
  digitalWrite(LATCH,LOW);
}
