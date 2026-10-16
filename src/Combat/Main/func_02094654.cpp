#include <globaldefs.h>

struct Display02094654 {
    char pad0[0x3c8];
    unsigned char state : 7;
    unsigned char display : 1;
};
struct PackFields020946f8Struct { unsigned int attributes01; unsigned short attributes2; };
int GetDisplayModeCode0209378c(int);
extern "C" unsigned int func_020937f0(int);
int GetBattleSubField0xbcForState_020d4ac8(void);
PackFields020946f8Struct* TeardownUnlessFlag02093704(int);
void PackFields020946f8(PackFields020946f8Struct*, int, int, int, int, int, int, int, int, int, int, int);

// USA: func_02094654
extern "C" ARM void func_02094654(Display02094654* obj) {
    int shift = GetDisplayModeCode0209378c(obj->display);
    unsigned int size = func_020937f0(obj->display);
    if (size) {
        unsigned int tile = (size - 0xa00) >> shift;
        int stride = 0x80 >> shift;
        int state = GetBattleSubField0xbcForState_020d4ac8();
        PackFields020946f8Struct* entries = TeardownUnlessFlag02093704(obj->display);
        tile += state * stride;
        PackFields020946f8(entries, 0, 0, 0, 0, 0, 0, 0x40000000, 0, tile, 15, 0);
    }
}
