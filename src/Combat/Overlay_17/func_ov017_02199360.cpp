#if defined(jpn)
enum { Enum_ov017_02199360_14008 = 0x34a8, Enum_ov017_02199360_14012 = 0x34ac, Enum_ov017_02199360_10100 = 0x27b4, Enum_ov017_02199360_10112 = 0x27c0, Enum_ov017_02199360_10120 = 0x27c8 };
#else
enum { Enum_ov017_02199360_14008 = 0x36b8, Enum_ov017_02199360_14012 = 0x36bc, Enum_ov017_02199360_10100 = 0x2774, Enum_ov017_02199360_10112 = 0x2780, Enum_ov017_02199360_10120 = 0x2788 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" int func_0202c508(void* arg0);
extern "C" void* func_0200fd0c(GameState* arg0);
struct Struct_0200ffc0;
extern "C" void* func_0200ffc0(struct Struct_0200ffc0* arg0);
struct Vector3i;
extern "C" void func_02070378(char* arg0);
extern "C" void func_ov017_021d1a18(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov017_02199360
extern "C" ARM void func_ov017_02199360(void* arg0) {
    if (!*(unsigned char*)((char*)arg0 + Enum_ov017_02199360_14008)) return;

    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    void* var2 = func_02012fe4();
    void* var3 = *(void**)((char*)arg0 + Enum_ov017_02199360_14012);
    void* var4 = func_0200fd0c(var0);
    void* var5 = func_0200ffc0((struct Struct_0200ffc0*)var0);

    if (func_0202c508(var1)) {
        *(Vector3i*)((int*)((char*)var2 + Enum_ov017_02199360_10100)) = *(Vector3i const*)((int*)((char*)var3 + 0x40));
        *(int*)((char*)var2 + Enum_ov017_02199360_10112) = *(short*)((char*)var3 + 0x4c);
        func_02070378((char*)var4);
        *(short*)((char*)var4 + 0x0) = 0x2710;
        ((char*)var4)[0x2] = 1;
        ((char*)var4)[0x7] = 1;
        *(Vector3i*)((int*)((char*)var4 + 0x10)) = *(Vector3i const*)((int*)((char*)var5 + 0x44));
        *(short*)((char*)var4 + 0x1c) = *(int*)((char*)var5 + 0x54);
        ((char*)var2)[Enum_ov017_02199360_10120] = 1;
        func_ov017_021d1a18(1, -1, 1, 0);
    } else {
        func_02070378((char*)var4);
        *(short*)((char*)var4 + 0x0) = 0x170c;
        ((char*)var4)[0x2] = 1;
        ((char*)var4)[0x7] = 1;
        *(int*)((char*)var4 + 0x10) = -0x7000;
        *(int*)((char*)var4 + 0x14) = 0x2e1;
        *(int*)((char*)var4 + 0x18) = 0x5e66;
        *(short*)((char*)var4 + 0x1c) = 0x3244;
    }
}
