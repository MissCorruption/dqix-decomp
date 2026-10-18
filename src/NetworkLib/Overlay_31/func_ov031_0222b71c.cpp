#include <globaldefs.h>
#include "System/LoadToVRAM.h"

struct AssetName25 { char text[25]; };
struct AssetName22 { char text[22]; };
extern const AssetName25 data_ov031_02248e43;
extern const AssetName22 data_ov031_02248e2d;
extern char data_ov031_0224b9f4[];
extern "C" void func_ov031_022234d8(void*, void (*)(const void*, unsigned int, unsigned int));
extern "C" void* func_ov031_02223478(const char*);
extern "C" void* func_ov031_0223b61c(void*, int, int);
extern "C" void func_ov031_02234ea8(void*);
void SetField604_02234f34();

struct BackgroundResources_0222b71c {
    int field_00;
    void* first;
    void* second;
};
struct BackgroundContext_0222b71c {
    int field_00;
    BackgroundResources_0222b71c* resources;
};
extern BackgroundContext_0222b71c data_ov031_02290c8c;

struct BgControl_0222b71c {
    unsigned short priority : 2;
    unsigned short remaining : 14;
};
struct BgControlArray_0222b71c { BgControl_0222b71c controls[4]; };
#define MAIN_BG_0222b71c (*(volatile BgControlArray_0222b71c*)0x04000008)
#define SUB_BG_0222b71c (*(volatile BgControlArray_0222b71c*)0x04001008)

// USA: func_ov031_0222b71c
extern "C" ARM void func_ov031_0222b71c() {
    AssetName25 firstName = data_ov031_02248e43;
    AssetName22 secondName = data_ov031_02248e2d;
    func_ov031_022234d8(data_ov031_0224b9f4, LoadToMainBG3ScreenData);
    data_ov031_02290c8c.resources->first = func_ov031_0223b61c(func_ov031_02223478(firstName.text), 0, 4);
    func_ov031_02234ea8(data_ov031_02290c8c.resources->first);
    SetField604_02234f34();
    data_ov031_02290c8c.resources->second = func_ov031_0223b61c(func_ov031_02223478(secondName.text), 0, 4);
    SUB_BG_0222b71c.controls[0].priority = 3;
    SUB_BG_0222b71c.controls[1].priority = 3;
    MAIN_BG_0222b71c.controls[0].priority = 3;
    MAIN_BG_0222b71c.controls[1].priority = 2;
    MAIN_BG_0222b71c.controls[2].priority = 3;
    MAIN_BG_0222b71c.controls[3].priority = 2;
}

