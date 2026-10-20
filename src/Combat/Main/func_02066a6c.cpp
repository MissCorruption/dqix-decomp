#include <globaldefs.h>

#if defined(jpn)
// JPN: a smaller display block (context at 0, glyphs at 0x888, text at 0x1752, holder at 0x1804),
// fixed 10-pixel glyph spacing instead of the font-width table and glyph metrics, three space
// codes (0xff19/0xff1a full, 0xff1b half), and glyph codes masked to 7 bits.
struct GlyphJpn02066a6c { char pad[0x1c]; };
struct TransformJpn02066a6c { short x; short y; int field4; int mode; int fieldc; int scaleX; int scaleY; int field18; };
struct HolderJpn02066a6c { char pad[0x440]; TransformJpn02066a6c* transform; };
struct Field440XYObj;
struct DisplayJpn02066a6c {
    void* context;
    char pad4[0x7e0]; TransformJpn02066a6c backup; TransformJpn02066a6c active;
    char pad81c[0x6c]; GlyphJpn02066a6c glyphs[128];
    char pad1688[0xc4]; unsigned short font;
    char pad174e[4]; unsigned short text[16];
    unsigned short length;
    char pad1774[0x80]; unsigned char hasText; unsigned char visible;
    char pad17f6[0xe]; HolderJpn02066a6c holder;
};
void LoadStateBytePair0206b804(char*, int*, int*);
void GetField440XY_02066cc0(Field440XYObj*, short*, short*);
struct Holder02042c24;
void SetSubstructXY02042c24(Holder02042c24*, int, int);
void EmitScaledField0x440_0202f404(void*, int, int);
extern "C" void func_020681b4(GlyphJpn02066a6c*, int, int, short);
extern "C" void func_02041cd8(GlyphJpn02066a6c*, int, int, int);
extern "C" void func_02066934(DisplayJpn02066a6c*, void*, GlyphJpn02066a6c*, int, int, int);

extern "C" ARM void func_02066a6c(DisplayJpn02066a6c* obj, int absolute) {
    if (!obj->visible) return;
    HolderJpn02066a6c* holder = &obj->holder;
    unsigned int count;
    unsigned short* text;
    unsigned char i;
    count = 0;
    text = NULL;
    if (obj->hasText) {
        text = obj->text;
        count = obj->length & 255;
    }
    if (text) {
        int offsetX, offsetY;
        short x, y;
        LoadStateBytePair0206b804((char*)obj, &offsetX, &offsetY);
        GetField440XY_02066cc0((Field440XYObj*)holder, &x, &y);
        y -= 19;
        holder->transform = &obj->active;
        if (holder->transform) {
            holder->transform->scaleX = 4096;
            holder->transform->scaleY = 4096;
        }
        if (holder->transform) holder->transform->mode = 2;
        if (absolute) SetSubstructXY02042c24((Holder02042c24*)holder, x, y);
        else {
            SetSubstructXY02042c24((Holder02042c24*)holder, (short)(x + offsetX), (short)(y + offsetY));
            EmitScaledField0x440_0202f404(holder, 1, 0);
        }
        short remainder = 8 - ((count * 10) & 7);
        x += (remainder + 18) >> 1;
        y += 5;
        for (i = 0; i < count; i++) {
            unsigned short code = text[i];
            if ((code & 0xff00) == 0xff00) {
                if (code == 0xff01) break;
                if (code == 0xff19) { x += 10; continue; }
                if (code == 0xff1a) { x += 10; continue; }
                if (code == 0xff1b) { x += 5; continue; }
                code &= 0x7f;
            }
            GlyphJpn02066a6c* glyph = &obj->glyphs[code];
            if (absolute) func_02066934(obj, obj->context, glyph, x, y, 15);
            else {
                func_020681b4(glyph, x, y, 0);
                func_02041cd8(glyph, obj->font, 0, 31);
            }
            x += 10;
        }
    }
    holder->transform = &obj->backup;
}
#else
struct GlyphMetrics02066a6c { char pad[4]; signed char width; };
struct SetIntIntShortAt0xcStruct {
    char pad[12]; int x; int y; short mode; short reserved; GlyphMetrics02066a6c* metrics;
};
struct Transform02066a6c { short x; short y; int field4; int mode; int fieldc; int scaleX; int scaleY; int field18; };
struct Holder02042c24 { char pad[0x440]; Transform02066a6c* transform; };
struct Field440XYObj;
struct Display02066a6c {
    char pad0[0x34]; void* context;
    char pad38[0x8dc]; Transform02066a6c backup; Transform02066a6c active;
    char pad94c[0x6c]; SetIntIntShortAt0xcStruct glyphs[80];
    char pad1278[0x604]; unsigned short font;
    char pad187e[4]; unsigned short text[96];
    unsigned short length; short width;
    char pad1946[0x7d]; unsigned char hasText; unsigned char visible;
    char pad19c5[0x17]; unsigned char table;
    char pad19dd[3]; Holder02042c24 holder;
};
void LoadStateBytePair0206b804(char*, int*, int*);
void GetField440XY_02066cc0(Field440XYObj*, short*, short*);
void SetSubstructXY02042c24(Holder02042c24*, int, int);
void EmitScaledField0x440_0202f404(void*, int, int);
int GetWordFromTable02042648(int);
void SetIntIntShortAt0xc_02066ce0(SetIntIntShortAt0xcStruct*, int, int, short);
extern "C" void func_020417b0(SetIntIntShortAt0xcStruct*, int, int, int);
extern "C" void func_020654b8(Display02066a6c*, void*, SetIntIntShortAt0xcStruct*, int, int, int);

// USA: func_02066a6c
extern "C" ARM void func_02066a6c(Display02066a6c* obj, int absolute) {
    if (!obj->visible) return;
    Holder02042c24* holder = &obj->holder;
    int count;
    unsigned short* text;
    SetIntIntShortAt0xcStruct* glyph;
    int i;
    int spacing;
    count = 0;
    text = NULL;
    if (obj->hasText) {
        text = obj->text;
        count = obj->length & 255;
    }
    if (text) {
        int offsetX, offsetY;
        short x, y;
        LoadStateBytePair0206b804((char*)obj, &offsetX, &offsetY);
        GetField440XY_02066cc0((Field440XYObj*)holder, &x, &y);
        y -= 19;
        holder->transform = &obj->active;
        if (holder->transform) {
            holder->transform->scaleX = 4096;
            holder->transform->scaleY = 4096;
        }
        if (holder->transform) holder->transform->mode = 2;
        if (absolute) SetSubstructXY02042c24(holder, x, y);
        else {
            SetSubstructXY02042c24(holder, (short)(x + offsetX), (short)(y + offsetY));
            EmitScaledField0x440_0202f404(holder, 1, 0);
        }
        short remainder = 8 - (obj->width & 7);
        x += (remainder + 18) >> 1;
        y += 5;
        unsigned char fontWidth = GetWordFromTable02042648(obj->table);
        for (i = 0; i < count; i++) {
            spacing = fontWidth + 1;
            unsigned short code = text[i];
            if ((code & 0xff00) == 0xff00) {
                if (code == 0xff01) break;
                if (code == 0xff19) { x += spacing; continue; }
            }
            glyph = &obj->glyphs[code];
            if (absolute) func_020654b8(obj, obj->context, glyph, x, y, 15);
            else {
                SetIntIntShortAt0xc_02066ce0(glyph, x, y, 0);
                func_020417b0(glyph, obj->font, 0, 31);
            }
            if (glyph->metrics) x += glyph->metrics->width + 1;
        }
    }
    holder->transform = &obj->backup;
}
#endif
