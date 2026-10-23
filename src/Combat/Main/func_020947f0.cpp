#include <globaldefs.h>

#if defined(jpn)
enum { regionalPhase = 0x104, regionalState = 0x138 };
#else
enum { regionalPhase = 0x344, regionalState = 0x3c8 };
#endif

struct PaletteAnimation020947f0 {
    char pad0[regionalPhase];
    float phase;
    char pad348[regionalState - regionalPhase - 4];
    unsigned char state : 7;
    unsigned char display : 1;
};
struct PackFields020946f8Struct { unsigned int attributes01; unsigned short attributes2; };
extern "C" double func_02009424(double);
void CleanInvalidateCacheRange(const void*, unsigned int);
extern "C" void LoadToMainObjStandardPalette(const void*, unsigned int, unsigned int);
extern "C" void LoadToSubObjStandardPalette(const void*, unsigned int, unsigned int);
extern "C" int func_0209378c(int);
extern "C" unsigned int func_020937f0(int);
extern "C" PackFields020946f8Struct* func_02093704(int);
extern "C" void func_020946f8(PackFields020946f8Struct*, int, int, int, int, int, int, int, int, int, int, int);

// USA: func_020947f0
extern "C" ARM void func_020947f0(PaletteAnimation020947f0* animation) {
    float amount = (float)func_02009424((double)animation->phase);
    amount += 1.0f;
    amount *= 0.5f;
    short intensity = (short)(31.0f * amount);
    if (intensity < 0) intensity = 0;
    if (intensity > 31) intensity = 31;
    unsigned short color = intensity | (intensity << 5) | (intensity << 10);
    CleanInvalidateCacheRange(&color, 2);
    if (animation->display == 0) LoadToMainObjStandardPalette(&color, 0x1fe, 2);
    else LoadToSubObjStandardPalette(&color, 0x1fe, 2);
    int shift = func_0209378c(animation->display);
    unsigned int size = func_020937f0(animation->display);
    if (size) {
        unsigned int tile = (size - 0x800) >> shift;
        int stride = 0x100 >> shift;
        PackFields020946f8Struct* entries = func_02093704(animation->display);
        int x = 0;
        for (unsigned char i = 0; i < 8; ++i) {
            func_020946f8(entries + (i + 5), x, 0, 0, 0, 0, 0, 0x80004000, 0, tile, 15, 0);
            tile += stride;
            x += 32;
        }
    }
}
