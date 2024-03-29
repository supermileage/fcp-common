/* Telemetry Macros */
#define FC_BAUD 9600

#define CELL_ARRAY_SIZE 20
#define LEADING_ZEROES 0
#define TRAILING_ZEROES 1

#define FC_NUM_CELLS (CELL_ARRAY_SIZE - LEADING_ZEROES - TRAILING_ZEROES)

#define FC_NUM_HEADERS 6

#define FC_HEADER_0 0x7
#define FC_HEADER_1 0xD
#define FC_HEADER_2 0x11
#define FC_HEADER_3 0x17
#define FC_HEADER_4 0x1D
#define FC_HEADER_5 0x1F