#ifndef _GFXFONT_H_
#define _GFXFONT_H_

typedef struct { // Data stored PER GLYPH
        uint16_t bitmapOffset;     // Pointer into GFXfont->bitmap
        uint8_t  width, height;    // Bitmap dimensions in pixels
        uint8_t  xAdvance;         // Distance to advance cursor (x axis)
        int8_t   xOffset, yOffset; // Dist from cursor pos to UL corner
} GFXglyph;

typedef struct { // Data stored for FONT AS A WHOLE:
        uint8_t  *bitmap;      // Glyph bitmaps, concatenated
        GFXglyph *glyph;       // Glyph array
        uint8_t   first, last; // ASCII extents
        uint8_t   yAdvance;    // Newline distance (y axis)
        uint8_t   yOffset;     // Y offset of the font zero line (y axis)
} GFXfont;

#define gfxFont ((GFXfont*)(&FreeMonoBold12pt7b))

/// Font data stored PER GLYPH
typedef struct {
	uint16_t bitmapOffset;     ///< Pointer into GFXfont->bitmap
	uint8_t  width;            ///< Bitmap dimensions in pixels
  	uint8_t  height;           ///< Bitmap dimensions in pixels
	uint8_t  xAdvance;         ///< Distance to advance cursor (x axis)
	int8_t   xOffset;          ///< X dist from cursor pos to UL corner
  	int8_t   yOffset;          ///< Y dist from cursor pos to UL corner
} GFXglyph;

/// Data stored for FONT AS A WHOLE
typedef struct { 
	uint8_t  *bitmap;      ///< Glyph bitmaps, concatenated

	GFXglyph *glyph;       ///< Glyph array
	uint8_t   first;       ///< ASCII extents (first char)
  uint8_t   last;        ///< ASCII extents (last char)
	uint8_t   yAdvance;    ///< Newline distance (y axis)
} GFXfont;

#endif // _GFXFONT_H_
