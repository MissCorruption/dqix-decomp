#include <globaldefs.h>

struct TextOwner_0222d2bc { void* object; unsigned int field4; unsigned char text[32]; };
struct TextRectangle_0222d2bc {
    unsigned short x, y, width, height;
};
struct TextGlyph_0222d2bc { unsigned short glyph, terminator; };
extern TextOwner_0222d2bc* data_ov031_02290c94;
extern unsigned char data_ov031_02248ed0[16];
extern "C" void func_ov031_0223ca40(void*, int);
extern "C" void func_ov031_0223c980(void*, unsigned short, unsigned short, unsigned short, unsigned short, int, int, TextGlyph_0222d2bc*);
extern "C" void func_ov031_0223caec(void*);

// USA: func_ov031_0222d2bc
extern "C" ARM void func_ov031_0222d2bc() {
    TextRectangle_0222d2bc rectangle = {0, 0, 0, 0};
    rectangle.y = 0x20;
    rectangle.width = 0xe;
    rectangle.height = 0x10;
    func_ov031_0223ca40(data_ov031_02290c94->object, 0);
    TextGlyph_0222d2bc glyph;
    int column;
    int index = 0;
    column = 0;
    glyph.terminator = 0;
    do {
        if (index == 16) {
            column = 0;
            rectangle.y = 0x31;
        }
        unsigned char character = data_ov031_02290c94->text[index];
        if (character == 0x20) glyph.glyph = 0xe01d;
        else glyph.glyph = character;
        rectangle.x = data_ov031_02248ed0[column];
        func_ov031_0223c980(data_ov031_02290c94->object, rectangle.x,
            rectangle.y, rectangle.width, rectangle.height, 2, 0x480, &glyph);
        ++index;
        ++column;
    } while (index < 32);
    func_ov031_0223caec(data_ov031_02290c94->object);
}
