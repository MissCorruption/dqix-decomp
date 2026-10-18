#include <globaldefs.h>

struct FontGlyph0223c7e8 {
    unsigned char cellWidth;
    unsigned char cellHeight;
    unsigned short cellSize;
    signed char baselinePos;
    unsigned char maxCharWidth;
    unsigned char bpp;
    unsigned char flags;
};
struct FontInfo0223c7e8 {
    unsigned char pad[8];
    FontGlyph0223c7e8* glyph;
};
struct Font0223c7e8 {
    FontInfo0223c7e8* info;
};
struct TextCanvas0223c7e8 {
    void* charCanvas;
    Font0223c7e8* font;
    int hSpace;
    int vSpace;
};
struct Window0223c7e8 {
    char pad[0x18];
    TextCanvas0223c7e8 canvas;
};
struct TextDirection0223c7e8 { signed char x, y; };

extern "C" void func_020b25c4(TextCanvas0223c7e8* canvas, int x, int y, int color, int flags, const char* text, TextDirection0223c7e8 direction);

// USA: func_ov031_0223c7e8
extern "C" ARM void func_ov031_0223c7e8(Window0223c7e8* window, int x, int y, int color, int flags, const char* text) {
    Font0223c7e8* font = window->canvas.font;
    TextDirection0223c7e8 dir = {0, 0};
    switch (font->info->glyph->flags) {
    case 0:
    case 7:
        dir.x = 1;
        break;
    case 1:
    case 2:
        dir.y = 1;
        break;
    case 3:
    case 4:
        dir.x = -1;
        break;
    case 5:
    case 6:
        dir.y = -1;
        break;
    }
    func_020b25c4(&window->canvas, x, y, color, flags, text, dir);
}
