#include <globaldefs.h>
#if defined(jpn)
#define REGION_MEMBER_SHORT_OFFSET 0x2a
#define REGION_MENU_LEADING_SIZE 0x20
#define func_ov014_02188330 func_ov014_02189234
#else
#define REGION_MEMBER_SHORT_OFFSET 0x36
#define REGION_MENU_LEADING_SIZE 0x2c
#endif
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" void func_ov014_02188330(void* arg0);
extern "C" short func_02080468(void* arg0, int arg1);
extern "C" void func_020813ec(void* arg0, int arg1);
struct GameResources;
void SetBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);

// USA: func_ov014_02187b38
extern "C" ARM void func_ov014_02187b38(void* arg0) {
    int var0 = func_0200fb8c((int*)GameState::GetInstance());
    unsigned char var1 = *((unsigned char*)arg0 + 0x17b);
    if (var1 == 0) {
        *(void**)((char*)arg0 + 0x5c) = (char*)arg0 + 0xe0;
        func_ov014_02188330(arg0);
        *(short*)((char*)arg0 + 0x170) = 1;
        if (*(short*)((char*)arg0 + 0x172) < 0) {
            *(short*)((char*)arg0 + 0x172) = func_02080468(*(void**)((char*)arg0 + 0xc0), *(short*)((char*)arg0 + 0x170));
        }
        *(short*)((char*)*(void**)((char*)arg0 + 0xc0) + REGION_MEMBER_SHORT_OFFSET) = *(short*)((char*)arg0 + 0x172);
        func_020813ec(*(void**)((char*)arg0 + 0xc0), *(short*)((char*)arg0 + 0x170));
        (*((unsigned char*)arg0 + 0x17b))++;
        return;
    }
    if (var1 == 1) {
        SetBrightness((GameResources*)var0, 0, 8);
        (*((unsigned char*)arg0 + 0x17b))++;
        return;
    }
    if (var1 != 2) return;
    if (!IsBrightnessTransitionActive((GameResources*)var0)) {
        *((unsigned char*)arg0 + 0x17a) = 2;
        *((unsigned char*)arg0 + 0x17b) = 0;
    }
}
