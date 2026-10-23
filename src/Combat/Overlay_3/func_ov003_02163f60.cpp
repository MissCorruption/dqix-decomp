#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02163f60_1187 = 0x2cb };
enum { Enum_ov003_02163f60_1156 = 0x2ac };
#else
enum { Enum_ov003_02163f60_1187 = 0x4a3 };
enum { Enum_ov003_02163f60_1156 = 0x484 };
#endif


extern "C" void func_ov003_021612c0(void*);
extern "C" int func_ov003_02161344(void*);

struct Struct_ov003_02163f60 { char unknown_0_[Enum_ov003_02163f60_1187]; unsigned char unknown_4a3_; unsigned char unknown_4a4_; };

// USA: func_ov003_02163f60
#pragma optimize_for_size off
extern "C" ARM void func_ov003_02163f60(Struct_ov003_02163f60* arg0) {
    if (arg0->unknown_4a4_ == 0) {
        func_ov003_021612c0(arg0);
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        return;
    }
    if (arg0->unknown_4a4_ != 1) return;
    int var0 = func_ov003_02161344(arg0);
    if (var0 != -1) {
        if (var0 != 1) return;
        *(short*)((char*)arg0 + Enum_ov003_02163f60_1156) = 0x2b;
        arg0->unknown_4a4_ = 0;
        return;
    }
    arg0->unknown_4a3_ = 10;
    arg0->unknown_4a4_ = 0;
}
