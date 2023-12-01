#include <stdlib.h>

#include "utils.h"

void color_hex_to_RGB(char *hex, RGB *color) {
    unsigned long hexval = strtoul(hex + 1, NULL, 16);
    color->R = ((hexval >> 16) & 0xFF) / 255.0;
    color->G = ((hexval >> 8)  & 0xFF) / 255.0;
    color->B = ((hexval)       & 0xFF) / 255.0;
}