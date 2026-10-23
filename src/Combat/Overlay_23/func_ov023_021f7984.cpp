#include <globaldefs.h>

extern "C" int func_ov023_021f6f18(void* arg0);
extern "C" unsigned int func_ov023_021f6f10(void* arg0);

struct Struct_02020cb8_3;
extern "C" void func_0204afb4(struct Struct_02020cb8_3* arg0);

struct Struct_ov023_021f7984 {
    char unknown_0_[4];
    void* unknown_4_;
};

// USA: func_ov023_021f7984
extern "C" ARM void func_ov023_021f7984(void* arg0, void** arg1) {
#if defined(jpn)
 enum {Enum_ov023_021f7984_40=0x24};
#else
 enum {Enum_ov023_021f7984_40=0x28};
#endif
    void* var0 = *arg1;
    while (var0 != 0) {
        void* var1 = (void*)func_ov023_021f6f18(var0);
        unsigned int var2 = func_ov023_021f6f10(var0);
        if (var2 == 6) {
            Struct_ov023_021f7984* var3 = (Struct_ov023_021f7984*)((char*)var0 + 0x20);
            if (var3 != 0) {
                if ((void*)((char*)arg0 + Enum_ov023_021f7984_40) == var3->unknown_4_) var3->unknown_4_ = 0;
            }
        }
        var0 = var1;
    }
    func_0204afb4((struct Struct_02020cb8_3*)((char*)arg0 + Enum_ov023_021f7984_40));
}
