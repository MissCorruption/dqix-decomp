#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02173b4c_236 = 0xe8 };
enum { Enum_ov003_02173b4c_238 = 0xea };
enum { Enum_ov003_02173b4c_304 = 0x13c };
enum { Enum_ov003_02173b4c_278528 = 0x4f000 };
#else
enum { Enum_ov003_02173b4c_236 = 0xec };
enum { Enum_ov003_02173b4c_238 = 0xee };
enum { Enum_ov003_02173b4c_304 = 0x130 };
enum { Enum_ov003_02173b4c_278528 = 0x44000 };
#endif

struct Struct_ov003_02173b4c;
extern "C" void* func_ov003_02173bb0(Struct_ov003_02173b4c*, unsigned int);
extern "C" void func_0205ac40(void*, void*);

// USA: func_ov003_02173b4c
extern "C" ARM void func_ov003_02173b4c(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned int var1;
    void* var2;
    if (var0[Enum_ov003_02173b4c_236] == 0) {
        return;
    }
    if (var0[Enum_ov003_02173b4c_236] == 1) {
        if (var0[Enum_ov003_02173b4c_238] < 2) {
            return;
        }
    }
#if defined(jpn)
    if (var0[0] != 0) {
        var2 = func_ov003_02173bb0((Struct_ov003_02173b4c*)((char*)arg0 + Enum_ov003_02173b4c_304), 1);
    } else {
        var2 = func_ov003_02173bb0((Struct_ov003_02173b4c*)((char*)arg0 + Enum_ov003_02173b4c_304), 0);
    }
#else
    var1 = 6;
    if (var0[0] != 0) {
        var1 = 7;
    }
    var2 = func_ov003_02173bb0((Struct_ov003_02173b4c*)((char*)arg0 + Enum_ov003_02173b4c_304), var1);
#endif
    if (var2 == 0) {
        return;
    }
    *(int*)((char*)var2 + 0x14) = Enum_ov003_02173b4c_278528;
    *(int*)((char*)var2 + 0x18) = 0x5f000;
    func_0205ac40((char*)arg0 + Enum_ov003_02173b4c_304, var2);
}
