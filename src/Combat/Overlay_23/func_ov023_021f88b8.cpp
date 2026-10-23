#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void* arg0);

struct Struct_ov023_021f68b8 { void* unknown_0_; };
extern "C" void* func_ov023_021f68b8(struct Struct_ov023_021f68b8* arg0, int arg1);

extern "C" unsigned int func_ov023_021f6f10(void* arg0);

struct Struct_ov004_02153978 { char unknown_0_[6]; unsigned short unknown_6_; };
extern "C" unsigned int func_ov023_021f6f08(struct Struct_ov004_02153978* arg0);

struct Struct_ov023_021f88b8 { char unknown_0_[0x45]; unsigned char unknown_45_0_ : 1; };

extern "C" int func_ov023_021f6f18(void* arg0);

extern "C" void func_ov023_021f809c(void* arg0, void* arg1);

// USA: func_ov023_021f88b8
extern "C" ARM void func_ov023_021f88b8(void* arg0, void* arg1, int arg2) {
    void* var0 = func_ov011_021849c8(arg1);
    void* var1 = func_ov023_021f68b8((struct Struct_ov023_021f68b8*)var0, 0);
    while (var1 != NULL) {
        unsigned int var2 = func_ov023_021f6f10(var1);
        if (var2 == 8 && *(unsigned short*)((char*)var1 + 0x34) == *(unsigned short*)((char*)arg0 + 0x6)) {
            unsigned int var3 = func_ov023_021f6f08((struct Struct_ov004_02153978*)var1);
            if ((unsigned int)arg2 == var3) {
                ((struct Struct_ov023_021f88b8*)var1)->unknown_45_0_ = 1;
            } else {
                ((struct Struct_ov023_021f88b8*)var1)->unknown_45_0_ = 0;
            }
        }
        var1 = (void*)func_ov023_021f6f18(var1);
    }
    func_ov023_021f809c(arg0, arg1);
}
