#include <globaldefs.h>


extern "C" int func_ov031_0220d60c(void);
struct Struct_ov031_0220ede4;
extern "C" ARM Struct_ov031_0220ede4* func_ov031_0220ede4(unsigned char* arg0);
extern "C" void* func_ov031_0220ece8(void);
extern "C" ARM int func_ov031_0220edb4(void);
extern "C" int func_020ca4b4(void*, void*, int);
extern "C" void func_ov031_0220eea0(void* arg0);

struct Struct_ov031_0220ec5c { unsigned char unknown_0_[0x3c]; unsigned short unknown_3c_; };

// USA: func_ov031_0220ec5c
extern "C" ARM void func_ov031_0220ec5c(Struct_ov031_0220ec5c* arg0, int arg1) {
    int var0 = func_ov031_0220d60c();
    if (var0 == 0) return;
    if (*(unsigned char*)(var0 + 0x2000 + 0x26a) != 0 || arg0->unknown_3c_ != 0) return;
    void* var1 = func_ov031_0220ede4((unsigned char*)arg0 + 4);
    if (var1 == NULL) {
        var1 = func_ov031_0220ece8();
    }
    if (var1 == NULL) {
        if (*(int*)(var0 + 0x2000 + 0x278) == 1) {
            var1 = (void*)func_ov031_0220edb4();
        }
    }
    if (var1 == NULL) return;
    *(unsigned short*)((char*)var1 + 2) = (unsigned short)arg1;
    func_020ca4b4(arg0, (char*)var1 + 0x10, 0xc0);
    func_ov031_0220eea0(var1);
}
