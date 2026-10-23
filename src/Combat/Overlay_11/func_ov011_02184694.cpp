#if defined(jpn)
#define R(j,u) (j)
#define func_ov008_021889f8 func_ov008_0218973c
#define data_ov005_0215cd20 data_ov005_0215e100
#define data_ov014_021894b8 data_ov014_0218a2f8
#define data_ov015_02193cfc data_ov015_0219482c
#define data_ov015_02194078 data_ov015_02194bb8
#define data_ov015_02194129 data_ov015_02194c69
#define func_ov008_02188730 func_ov008_02189444
#define func_ov014_02185c90 func_ov014_02186d00
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_ov017_021959b4(void);
struct GameResources;
void SetBrightness(GameResources*, int, int);
extern "C" void func_ov011_021848a8(void* arg0);
struct Struct_ov011_02184694_2;
extern "C" void func_ov011_02184a84(struct Struct_ov011_02184694_2* arg0);
extern "C" void func_ov011_02184ae4(void* arg0);
extern "C" void func_ov023_021f68dc(void* arg0, void* arg1);
int IsBrightnessTransitionActive(GameResources*);
extern "C" void func_ov011_02184770(void* arg0);

struct Struct_ov011_02184694 {
    char unknown_0_[0x1cc];
    unsigned char unknown_1cc_;
    unsigned char unknown_1cd_;
};

// USA: func_ov011_02184694
extern "C" ARM int func_ov011_02184694(Struct_ov011_02184694* arg0) {
    int var0 = (int)GetGameResources();
    func_0202ae18();
    if (arg0->unknown_1cd_ == 0) {
        int var1 = func_ov017_021959b4();
        if (var1) {
            arg0->unknown_1cd_ = 1;
            if (var0) {
                SetBrightness((GameResources*)var0, -16, 10);
            }
        }
        func_ov011_021848a8(arg0);
        func_ov011_02184a84((struct Struct_ov011_02184694_2*)arg0);
        func_ov011_02184ae4(arg0);
        func_ov023_021f68dc((char*)arg0 + 0x118, arg0);
    } else if (var0 != 0 && !IsBrightnessTransitionActive((GameResources*)var0)) {
        func_ov011_02184770(arg0);
        arg0->unknown_1cc_ = 1;
    }
    return arg0->unknown_1cc_ == 0;
}
