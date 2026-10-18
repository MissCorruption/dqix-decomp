#include <globaldefs.h>

struct FontGlyph0223c980 {
    unsigned char cellWidth;
    unsigned char cellHeight;
    unsigned short cellSize;
    signed char baselinePos;
    unsigned char maxCharWidth;
    unsigned char bpp;
    unsigned char flags;
};
struct FontInfo0223c980 {
    unsigned char pad[8];
    FontGlyph0223c980* glyph;
};
struct Font0223c980 {
    FontInfo0223c980* info;
};
struct TextCanvas0223c980 {
    void* charCanvas;
    Font0223c980* font;
    int hSpace;
    int vSpace;
};
struct Window0223c980 {
    char pad[0x18];
    TextCanvas0223c980 canvas;
};
struct TextDirection0223c980 { signed char x, y; };

extern "C" void func_020b26e8(TextCanvas0223c980* canvas, int x, int y, int arg3, int available, int arg5, int flags, const char* text, TextDirection0223c980 direction);

// USA: func_ov031_0223c980
extern "C" ARM void func_ov031_0223c980(Window0223c980* window, int x, int y, int arg3, int available, int arg5, int flags, const char* text) {
    Font0223c980* font = window->canvas.font;
    TextDirection0223c980 dir = {0, 0};
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
    func_020b26e8(&window->canvas, x, y, arg3, available, arg5, flags, text, dir);
}
