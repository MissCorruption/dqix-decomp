#include <globaldefs.h>
#include <std_library_functions.h>

struct Wnd0204e3e0 {
    char pad0[0xa4];
    int fA4;
    short fA8;
    short fAA;
    char padAC[4];
    short fB0;
    short fB2;
    char padB4[2];
    short fB6;
};

struct Glyph0204e3e0 {
    int val;
    char width;
    signed char skip : 6;
    signed char unused : 2;
};

extern "C" void* __clear(void* dst, int count);
extern "C" int func_020420e8(char* str, int id);
int FindEntryIndexByKey020424e4(int key, int tableIdx);
char* FindUnescapedAngleBracket_020424ac(char* str);
Glyph0204e3e0* GetBoundedEntry020425b4(int idx, int tableIdx);
int LookupKeyValue020425e4(int a, int b, int tableIdx);
extern "C" int func_0204fc40(void* unused0, char** cursor, char* tag, short* out, int max);
extern const unsigned char data_020e7bd6[];
extern char data_020f0248[];
extern char data_020f024e[];
extern char data_020f0251[];
extern char data_020f0254[];
extern char data_020f0258[];
extern char data_020f025b[];
extern char data_020f025e[];
extern char data_020f0298[];
extern char data_020f02d4[];
extern char data_020f02db[];
extern char data_020f02e7[];
extern char data_020f02eb[];
extern char data_020f02f1[];

// USA: func_0204e3e0
extern "C" ARM short func_0204e3e0(Wnd0204e3e0* wnd, char* text, int mode, unsigned char border, unsigned char grow, unsigned char font) {
    int boxY;
    int x, y, maxX, maxY;
    short prev;
    int code;
    bool boxOn;
    short ret;
    int savedX;
    int lineH;
    char* end;
    char* cursor;
    char* p;
    short out[8];
    char tmp[0x100];
    unsigned char adv;
    Glyph0204e3e0* glyph;

    cursor = text;
    if (cursor == 0) return 0;

    maxX = wnd->fB0;
    maxY = wnd->fB2;
    boxOn = 0;
    boxY = 0;
    ret = 0;
    lineH = wnd->fB6;
    x = wnd->fB0;
    y = wnd->fB2;
    prev = 0xff;

    while (*cursor != 0) {
        char ch = *cursor;
        char next = cursor[1];
        if ((ch == '\\' && next == 'n') || (ch == '\r' && next == '\n')) {
            if (maxX < x) maxX = x;
            x = wnd->fB0;
            y += wnd->fB6;
            cursor += 2;
            prev = 0xff;
            continue;
        }
        if (ch == '\n') {
            if (maxX < x) maxX = x;
            x = wnd->fB0;
            y += wnd->fB6;
            cursor += 1;
            prev = 0xff;
            continue;
        }
        int idx = FindEntryIndexByKey020424e4((int)cursor, font);
        if (*cursor == '<' && idx < 0) {
            p = cursor + 1;
            end = FindUnescapedAngleBracket_020424ac(cursor);
            if (func_0204fc40(wnd, &p, data_020f0248, out, 1)) {
            } else if (func_0204fc40(wnd, &p, data_020f024e, out, 1)) {
                if (maxX < x) maxX = x;
                x = out[0];
                prev = 0xff;
            } else if (func_0204fc40(wnd, &p, data_020f0251, out, 1)) {
                if (maxY < y) maxY = y;
                y = out[0];
                prev = 0xff;
            } else if (func_0204fc40(wnd, &p, data_020f0254, out, 2)) {
                if (maxX < x) maxX = x;
                if (maxY < y) maxY = y;
                x = out[0];
                y = out[1];
                prev = 0xff;
            } else if (func_0204fc40(wnd, &p, data_020f0258, out, 1)) {
                x += out[0];
                prev = 0xff;
            } else if (func_0204fc40(wnd, &p, data_020f025b, out, 1)) {
                y += out[0];
                prev = 0xff;
            } else if (func_0204fc40(wnd, &p, data_020f025e, out, 2)) {
                x += out[0];
                y += out[1];
                prev = 0xff;
            } else if (func_0204fc40(wnd, &p, data_020f0298, out, 1)) {
                ret = out[0];
            } else if (func_0204fc40(wnd, &p, data_020f02d4, out, 1)) {
                boxOn = 1;
                boxY = out[0];
            } else if (func_0204fc40(wnd, &p, data_020f02db, out, 0)) {
                if (boxOn) {
                    if (maxX < x) maxX = x;
                    if (maxY < y) maxY = y;
                    x = wnd->fB0;
                    y = boxY + wnd->fB2;
                }
            } else if (func_0204fc40(wnd, &p, data_020f02e7, out, 1)) {
                if (maxX < x) maxX = x;
                x = out[0];
                prev = 0xff;
                savedX = x;
                __clear(tmp, 0x100);
                char* start = p;
                char* found = strstr(start, data_020f02eb);
                if (found != 0) {
                    int len = found - start;
                    if (len < 0x100) {
                        memcpy(tmp, start, len);
                        x -= func_020420e8(tmp, font);
                    }
                }
            } else if (func_0204fc40(wnd, &p, data_020f02f1, out, 0)) {
                if (maxX < x) maxX = x;
                x = savedX;
                prev = 0xff;
            }
            cursor = end + 1;
            continue;
        }
        adv = data_020e7bd6[font] + 1;
        if (idx >= 0) {
            code = idx & 0xff;
            glyph = GetBoundedEntry020425b4(idx, font);
            int kern = LookupKeyValue020425e4(prev, code, font);
            prev = code;
            adv = glyph->width + 1 + kern;
            cursor += glyph->skip;
        } else {
            cursor++;
        }
        x += adv;
    }

    if (x < maxX) x = maxX;
    if (y < maxY) y = maxY;
    y = y + lineH - (wnd->fB6 - 10);
    if (((x + 3) & 7) <= 3) x += 4;
    int w = ((x + 7) & ~7) >> 3;
    int h = ((y + 7) & ~7) >> 3;
    if (w > 32) w = 32;
    if (h > 32) h = 32;
    if (grow) {
        if (wnd->fA8 < w) wnd->fA8 = w;
        if (wnd->fAA < h) wnd->fAA = h;
    }
    if (border) {
        y -= wnd->fB2;
        if ((wnd->fAA << 3) - y < 7) wnd->fAA = wnd->fAA + 1;
        wnd->fB2 = ((wnd->fAA << 3) - y) >> 1;
    }
    if (boxOn) {
        wnd->fB2 = wnd->fB2 + boxY;
        if (border) wnd->fB2 = wnd->fB2 - 1;
    }
    wnd->fA4 = (wnd->fA8 * wnd->fAA) << 5;
    return ret;
}
