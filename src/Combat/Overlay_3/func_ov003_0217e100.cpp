#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { kRegionValue90_8C = 0x8c };
enum { kRegionValue78_74 = 0x74 };
enum { kRegionValue3C_38 = 0x38 };
#else
enum { kRegionValue90_8C = 0x90 };
enum { kRegionValue78_74 = 0x78 };
enum { kRegionValue3C_38 = 0x3c };
#endif

struct Struct_0205d81c;
struct Elem_0205d81c;
extern "C" Elem_0205d81c* func_0205d8c4(Struct_0205d81c*);

extern "C" int func_0204c7e0(unsigned char*);

struct Struct_0205c570;
extern "C" int func_0205d794(Struct_0205c570*);

struct Container0205a3d0;
struct Elem0205a3d0;
extern "C" void func_0205a370(Container0205a3d0*, int);
extern "C" Elem0205a3d0* func_0205a3d0(Container0205a3d0*, int);

struct Container0205a330;
extern "C" void func_0205a330(Container0205a330*, int);

extern "C" void func_0205ae8c(void*);

// USA: func_ov003_0217e100
extern "C" ARM void func_ov003_0217e100(void* obj) {
    GameState* battleStruct = GameState::GetInstance();
    void* sub = *(void**)((char*)obj + kRegionValue90_8C);
    Elem_0205d81c* elem = func_0205d8c4((Struct_0205d81c*)sub);
    if (elem == NULL) return;
    if (!func_0204c7e0((unsigned char*)elem)) return;

    sub = *(void**)((char*)obj + kRegionValue90_8C);
    short a = *(short*)((char*)elem + 0xae);
    short c = *(short*)((char*)elem + 0xac);
    int field68 = *(int*)((char*)sub + 0x68);
    short d = a << 3;

    int e = func_0205d794((Struct_0205c570*)sub);
    short g = (short)e - field68 * 6;
    short comp = (short)((int)g * 13 + d);

    Container0205a3d0* cont = *(Container0205a3d0**)((char*)obj + kRegionValue78_74);
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
        *(short*)((char*)entry + 0x4) = (short)((int)c << 3) - 4;
        *(short*)((char*)entry + 0x6) = comp + 2;
    }

    func_0205ae8c((char*)obj + kRegionValue3C_38);
}
