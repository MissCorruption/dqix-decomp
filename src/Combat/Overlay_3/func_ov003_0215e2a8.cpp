#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { kRegionValue3C2_3DA = 0x3da };
enum { kRegionValue98_B0 = 0xb0 };
enum { kRegionValue3F2_40A = 0x40a };
enum { kRegionValue900_700 = 0x700 };
enum { kRegionValue16_E6 = 0xe6 };
enum { kRegionValue394_3AC = 0x3ac };
enum { kRegionValue358_370 = 0x370 };
#else
enum { kRegionValue3C2_3DA = 0x3c2 };
enum { kRegionValue98_B0 = 0x98 };
enum { kRegionValue3F2_40A = 0x3f2 };
enum { kRegionValue900_700 = 0x900 };
enum { kRegionValue16_E6 = 0x16 };
enum { kRegionValue394_3AC = 0x394 };
enum { kRegionValue358_370 = 0x358 };
#endif

struct Struct_0205d81c;
struct Elem_0205d81c;
extern "C" Elem_0205d81c* func_0205d8c4(Struct_0205d81c*);
extern "C" int func_0204c7e0(unsigned char*);
extern "C" int func_020421a0(void);

struct Container0205a3d0;
struct Elem0205a3d0;
extern "C" void func_0205a370(Container0205a3d0*, int);
extern "C" Elem0205a3d0* func_0205a3d0(Container0205a3d0*, int);

struct Container0205a330;
extern "C" void func_0205a330(Container0205a330*, int);

extern "C" void func_0205a42c(Container0205a3d0*, int, int);
extern "C" void func_0205ae8c(void*);

// USA: func_ov003_0215e2a8
extern "C" ARM void func_ov003_0215e2a8(char* base) {
    if (*(unsigned char*)(base + kRegionValue3C2_3DA) == 0) return;

    Elem_0205d81c* elem = func_0205d8c4((Struct_0205d81c*)(base + kRegionValue98_B0));
    if (elem == NULL) return;
    if (*(unsigned char*)((char*)elem + 0xc4) != 1) return;
    if (!func_0204c7e0((unsigned char*)elem)) return;
    if (*(unsigned char*)((char*)elem + 0xc5) & 0x20) return;

    short a = *(short*)((char*)elem + 0xac);
    short b = *(short*)((char*)elem + 0xae);
    short d = *(short*)((char*)elem + 0xbc);
    short e = *(short*)((char*)elem + 0xbe);

    short x = (short)(d + (short)((a << 3)));
    short y = (short)(e + (short)((b << 3)));
    x = (short)(x - 8);
    y = (short)(y - 2);

    if (*(unsigned char*)(base + kRegionValue3F2_40A) != 0) {
        int f = func_020421a0();
        int v = *(short*)((char*)f + kRegionValue900_700 + kRegionValue16_E6);
        x = (short)(x - 2);
        y = (short)(y + (short)(v % 8));
    }

    GameState* battleStruct = GameState::GetInstance();
    Container0205a3d0* cont = *(Container0205a3d0**)(base + kRegionValue394_3AC);
    if (cont == NULL) return;

    func_0205a370(cont, 0);
    Elem0205a3d0* entry = func_0205a3d0(cont, 0);
    if (entry != NULL) {
        *(unsigned char*)((char*)entry + 0x15) |= 8;
    }

    int scaleCount = (int)battleStruct->GetTickCount();
    func_0205a330((Container0205a330*)cont, scaleCount);

    entry = func_0205a3d0(cont, 0);
    if (entry != NULL) {
        *(short*)((char*)entry + 0x4) = x;
        *(short*)((char*)entry + 0x6) = y;
    }

    func_0205a42c(cont, 0, 0x3f);
    func_0205ae8c(base + kRegionValue358_370);
}
