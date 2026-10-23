#include <globaldefs.h>

extern "C" void func_02019678(void* arg0, int arg1);

#if defined(jpn)
enum { Enum_ov000_02163710_22865 = 0x5b41, Enum_ov000_02163710_3784 = 0xe44, Enum_ov000_02163710_21976 = 0x57c8 };
#else
enum { Enum_ov000_02163710_22865 = 0x5951, Enum_ov000_02163710_3784 = 0xec8, Enum_ov000_02163710_21976 = 0x55d8 };
#endif

struct Struct_ov000_02163710 {
    unsigned char unknown_0_0_ : 3;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 3;
};

// USA: func_ov000_02163710
extern "C" ARM void func_ov000_02163710(void* arg0, int arg1) {
    struct Struct_ov000_02163710* var0 = (struct Struct_ov000_02163710*)((char*)arg0 + Enum_ov000_02163710_22865);
    if (!var0->unknown_0_3_) {
        return;
    }
    if (arg1 == 0) {
        int var1 = *(int*)((char*)arg0 + Enum_ov000_02163710_21976);
        if ((int)var0->unknown_0_4_ == var1 % 2) {
            return;
        }
    }
    func_02019678((char*)arg0 + Enum_ov000_02163710_3784, 1);
    ((struct Struct_ov000_02163710*)((unsigned int)arg0 + Enum_ov000_02163710_22865))->unknown_0_3_ = 0;
}
