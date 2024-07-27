#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_STAR
#define LV_ATTRIBUTE_IMG_IMG_STAR
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_STAR uint8_t img_star_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/

#error NOT IMPLEMENTED

#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/

#error NOT IMPLEMENTED

#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/

#error NOT IMPLEMENTED

#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  /* actually it is other way around */
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x1d, 0x21, 0xff, 0x00, 0x1c, 0x20, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x7e, 0x8f, 0xff, 0x00, 0x8d, 0x9f, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x1b, 0x1f, 0xff, 0x00, 0xd3, 0xef, 0xff, 0x00, 0xdb, 0xf8, 0xff, 0x00, 0x1c, 0x20, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x74, 0x84, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0x87, 0x99, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x16, 0x18, 0xff, 0x00, 0xd3, 0xef, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xd5, 0xf1, 0xff, 0x00, 0x1b, 0x1f, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x71, 0x80, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0x7b, 0x8b, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x10, 0x12, 0xff, 0x00, 0xd3, 0xef, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xd3, 0xef, 0xff, 0x00, 0x11, 0x13, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x70, 0x80, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0x6f, 0x7e, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x0e, 0x10, 0xff, 0x00, 0xd3, 0xef, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xd3, 0xef, 0xff, 0x00, 0x04, 0x05, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x0e, 0x10, 0xff, 0x00, 0x2a, 0x2f, 0xff, 0x00, 0x46, 0x50, 0xff, 0x00, 0x63, 0x70, 0xff, 0x00, 0x9e, 0xb3, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xb3, 0xcb, 0xff, 0x00, 0x70, 0x80, 0xff, 0x00, 0x3f, 0x48, 0xff, 0x00, 0x26, 0x2b, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x12, 0x12, 0x12, 0xff, 0x4a, 0x4a, 0x4a, 0xff, 0x00, 0x62, 0x70, 0xff, 0x00, 0x7f, 0x8f, 0xff, 0x00, 0xaa, 0xc0, 0xff, 0x00, 0xbc, 0xd6, 0xff, 0x00, 0xd7, 0xf4, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xc5, 0xdf, 0xff, 0x00, 0x9b, 0xaf, 0xff, 0x00, 0x83, 0x95, 0xff, 0x00, 0x67, 0x78, 0xff, 0x00, 0x2a, 0x40, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xaa, 0xaa, 0xaa, 0xff, 0xbf, 0xf7, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xde, 0xff, 0xff, 0x00, 0xbd, 0xff, 0xff, 0x00, 0x62, 0x95, 0xff, 0x00, 0x0b, 0x11, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xa6, 0xa6, 0xa6, 0xff, 0xbf, 0xf7, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xde, 0xff, 0xff, 0x00, 0xbd, 0xff, 0xff, 0x00, 0x61, 0x93, 0xff, 0x00, 0x0b, 0x11, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xa3, 0xa3, 0xa3, 0xff, 0xbf, 0xf7, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xde, 0xff, 0xff, 0x00, 0xbd, 0xff, 0xff, 0x00, 0x60, 0x91, 0xff, 0x00, 0x0a, 0x10, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xa1, 0xa1, 0xa1, 0xff, 0xbf, 0xf7, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xdd, 0xff, 0xff, 0x00, 0xbc, 0xff, 0xff, 0x00, 0x5f, 0x90, 0xff, 0x00, 0x09, 0x0e, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xa0, 0xa0, 0xa0, 0xff, 0xbf, 0xf7, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xdd, 0xff, 0xff, 0x00, 0xbc, 0xff, 0xff, 0x00, 0x5f, 0x90, 0xff, 0x00, 0x08, 0x0c, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x9f, 0x9f, 0x9f, 0xff, 0xbf, 0xf7, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xdd, 0xff, 0xff, 0x00, 0xbb, 0xff, 0xff, 0x00, 0x5e, 0x8f, 0xff, 0x00, 0x06, 0x0a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xa0, 0xa0, 0xa0, 0xff, 0xa8, 0xf5, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xbd, 0xff, 0xff, 0x00, 0x5e, 0x8f, 0xff, 0x00, 0x05, 0x07, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x41, 0x41, 0x41, 0xff, 0xb7, 0xf6, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xb6, 0xff, 0xff, 0x00, 0x29, 0x3e, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x70, 0x70, 0x70, 0xff, 0x8f, 0xf2, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xc1, 0xff, 0xff, 0x00, 0x49, 0x70, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x9f, 0x9f, 0x9f, 0xff, 0x59, 0xeb, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xcd, 0xff, 0xff, 0x00, 0x66, 0x9b, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xb5, 0xb5, 0xb5, 0xff, 0x34, 0xe7, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xd4, 0xff, 0xff, 0x00, 0x7a, 0xba, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe0, 0xe0, 0xe0, 0xff, 0x16, 0xe4, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xdd, 0xff, 0xff, 0x00, 0x9d, 0xef, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x24, 0x24, 0x24, 0xff, 0xd4, 0xfa, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xd3, 0xef, 0xff, 0x00, 0x6f, 0x7d, 0xff, 0x00, 0x63, 0x70, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xae, 0xff, 0xff, 0x00, 0x0f, 0x16, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x44, 0x44, 0x44, 0xff, 0xb2, 0xf6, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xd3, 0xef, 0xff, 0x00, 0x76, 0x85, 0xff, 0x00, 0x13, 0x16, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x07, 0x08, 0xff, 0x00, 0x84, 0x95, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xb6, 0xff, 0xff, 0x00, 0x2a, 0x40, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x70, 0x70, 0x70, 0xff, 0x8f, 0xf2, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xd6, 0xf2, 0xff, 0x00, 0x9a, 0xaf, 0xff, 0x00, 0x20, 0x25, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x20, 0x24, 0xff, 0x00, 0x8d, 0x9f, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xe1, 0xff, 0xff, 0x00, 0xc1, 0xff, 0xff, 0x00, 0x49, 0x70, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xa2, 0xa2, 0xa2, 0xff, 0x55, 0xeb, 0xff, 0xff, 0x00, 0xa9, 0xbf, 0xff, 0x00, 0x2a, 0x30, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x2a, 0x30, 0xff, 0x00, 0x8d, 0xa0, 0xff, 0x00, 0xcf, 0xff, 0xff, 0x00, 0x6c, 0xa4, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x7e, 0x7e, 0x7e, 0xff, 0x11, 0x2e, 0x32, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x2a, 0x34, 0xff, 0x00, 0x5d, 0x8e, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
#endif
};

const lv_img_dsc_t img_star = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_CHROMA_KEYED,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 32,
  .header.h = 32,
  .data_size = 1024 * LV_COLOR_SIZE / 8,
  .data = img_star_map,
};
