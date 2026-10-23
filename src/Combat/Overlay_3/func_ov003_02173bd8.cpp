#include <globaldefs.h>

struct Struct_ov003_02173b4c;
extern "C" void* func_ov003_02173bb0(Struct_ov003_02173b4c*, unsigned int);
extern "C" void func_0205ac40(void*, void*);
extern signed char data_ov003_0217fa14[];

// USA: func_ov003_02173bd8
extern "C" ARM void func_ov003_02173bd8(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned int var1;
    void* var2;
#if defined(jpn)
    enum { Enum_ov003_02173bd8_236 = 0xe8, Enum_ov003_02173bd8_238 = 0xea, Enum_ov003_02173bd8_208 = 0xd0, Enum_ov003_02173bd8_304 = 0x13c, Enum_ov003_02173bd8_753664 = 0xa2000 };
#else
    enum { Enum_ov003_02173bd8_236 = 0xec, Enum_ov003_02173bd8_238 = 0xee, Enum_ov003_02173bd8_212 = 0xd4, Enum_ov003_02173bd8_304 = 0x130, Enum_ov003_02173bd8_753664 = 0xb8000 };
#endif
    if (var0[Enum_ov003_02173bd8_236] == 0) {
        return;
    }
    if (var0[Enum_ov003_02173bd8_236] == 1) {
        if (var0[Enum_ov003_02173bd8_238] < 2) {
            return;
        }
    }
#if defined(jpn)
    switch (var0[Enum_ov003_02173bd8_208]) {
        case 0: var2 = func_ov003_02173bb0((Struct_ov003_02173b4c*)((char*)arg0 + Enum_ov003_02173bd8_304), 5); break;
        case 1: var2 = func_ov003_02173bb0((Struct_ov003_02173b4c*)((char*)arg0 + Enum_ov003_02173bd8_304), 4); break;
        case 2: var2 = func_ov003_02173bb0((Struct_ov003_02173b4c*)((char*)arg0 + Enum_ov003_02173bd8_304), 3); break;
        case 3: var2 = func_ov003_02173bb0((Struct_ov003_02173b4c*)((char*)arg0 + Enum_ov003_02173bd8_304), 2); break;
        default: var2 = NULL;
    }
    if (var2 == NULL) return;
#else
    if (var0[Enum_ov003_02173bd8_212] > 3) {
        return;
    }
    var1 = data_ov003_0217fa14[var0[Enum_ov003_02173bd8_212]];
    var2 = func_ov003_02173bb0((Struct_ov003_02173b4c*)((char*)arg0 + Enum_ov003_02173bd8_304), var1);
#endif
    *(int*)((char*)var2 + 0x14) = Enum_ov003_02173bd8_753664;
    *(int*)((char*)var2 + 0x18) = 0x2f000;
    func_0205ac40((char*)arg0 + Enum_ov003_02173bd8_304, var2);
}
