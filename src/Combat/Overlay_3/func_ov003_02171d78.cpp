#include <globaldefs.h>

extern "C" int func_ov003_02171df0(unsigned char* arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

struct Struct_ov003_02171d78 { char unknown_0_[6]; unsigned char unknown_6_; char unknown_7_; };

// USA: func_ov003_02171d78
extern "C" ARM int func_ov003_02171d78(void* arg0, unsigned char* arg1) {
    if (arg1 == 0) goto ret0;
    if (func_ov003_02171df0(arg1) != 0) {
ret0:
        return 0;
    }
    {
        Struct_ov003_02171d78* var0 = (Struct_ov003_02171d78*)((char*)arg0 + 8);
        for (int var1 = 0; var1 < 0x32; var1++, var0++) {
            if (var0->unknown_6_ != 0) {
                if (func_02001aec(var0, arg1, 6) == 0) return 1;
            }
        }
    }
    return 0;
}
