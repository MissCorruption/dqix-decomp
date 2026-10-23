#if defined(jpn)
enum { Enum_ov017_021d3aa4_2856 = 0x908 };
#else
enum { Enum_ov017_021d3aa4_2856 = 0xb28 };
#endif

#include <globaldefs.h>
#include "Combat/LootPointEvent.h"

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void func_0208e0a8(void);
extern "C" int func_0202c508(void* arg0);
extern "C" ARM int* func_020120b8(char* arg0, int arg1);
extern "C" int func_ov017_021d3950(void* arg0);

struct Struct_ov017_021d3aa4 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    signed char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    Struct_0208ec78 unknown_8_;
};

// USA: func_ov017_021d3aa4
extern "C" ARM void func_ov017_021d3aa4(int arg0, struct Struct_ov017_021d3aa4* arg1, char* arg2, int arg3, struct Struct_0202c1a4* arg4) {
    func_0208e0a8();
    unsigned char* var0 = *(unsigned char**)((char*)arg3 + 0x3000 + Enum_ov017_021d3aa4_2856);

    if (func_0202c508(arg4)) {
        if (arg1->unknown_4_ != 1) return;

        if (func_ov017_021d3950(&arg1->unknown_4_) != 0) {
            func_ov017_021d38f8(1, arg0, arg1->unknown_6_, arg1->unknown_7_, &arg1->unknown_8_);
        } else {
            func_ov017_021d38f8(2, arg0, arg1->unknown_6_, arg1->unknown_7_, &arg1->unknown_8_);
        }
        return;
    }

    if (arg0 != 0) return;

    if (arg1->unknown_4_ == 0) {
        int* var1 = func_020120b8(arg2, arg1->unknown_7_);
        if (var1) *var1 = arg1->unknown_8_.unknown1_0_;
    } else if (arg1->unknown_4_ == 1) {
        signed char var2 = func_0202c1a4(arg4);
        if (arg1->unknown_5_ == var2) {
            if (var0[2] != 0) var0[9] = 1;
        }
        func_ov017_021d3950(&arg1->unknown_4_);
    } else if (arg1->unknown_4_ == 2) {
        signed char var3 = func_0202c1a4(arg4);
        if (arg1->unknown_5_ == var3) {
            var0[9] = 2;
        }
    }
}
