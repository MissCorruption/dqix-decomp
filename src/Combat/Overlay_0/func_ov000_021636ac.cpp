#include <globaldefs.h>

extern "C" void func_02019568(void* arg0, int arg1);

#if defined(jpn)
enum { Enum_ov000_021636ac_22865 = 0x5b41, Enum_ov000_021636ac_3784 = 0xe44, Enum_ov000_021636ac_21976 = 0x57c8 };
#else
enum { Enum_ov000_021636ac_22865 = 0x5951, Enum_ov000_021636ac_3784 = 0xec8, Enum_ov000_021636ac_21976 = 0x55d8 };
#endif

struct Struct_ov000_021636ac {
    unsigned char unknown_0_0_ : 3;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 3;
};

// USA: func_ov000_021636ac
extern "C" ARM void func_ov000_021636ac(void* arg0) {
    if (((struct Struct_ov000_021636ac*)((char*)arg0 + Enum_ov000_021636ac_22865))->unknown_0_3_) {
        return;
    }
    func_02019568((char*)arg0 + Enum_ov000_021636ac_3784, 1);
    ((struct Struct_ov000_021636ac*)((char*)arg0 + Enum_ov000_021636ac_22865))->unknown_0_3_ = 1;
    int var0 = *(int*)((char*)arg0 + Enum_ov000_021636ac_21976);
    ((struct Struct_ov000_021636ac*)((char*)arg0 + Enum_ov000_021636ac_22865))->unknown_0_4_ = (unsigned char)(var0 % 2);
}
