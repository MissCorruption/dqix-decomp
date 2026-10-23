#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021604f4_904 = 0x270 };
enum { Enum_ov003_021604f4_820 = 0x21c };
#else
enum { Enum_ov003_021604f4_904 = 0x388 };
enum { Enum_ov003_021604f4_820 = 0x334 };
#endif

struct Struct_ov003_021604f4 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x22 - 0x1c];
    unsigned char unknown_22_;
};

extern "C" void func_0205ac40(void* arg0, struct Struct_ov003_021604f4* arg1);

// USA: func_ov003_021604f4
extern "C" ARM void func_ov003_021604f4(char* arg0, int arg1, int arg2, short arg3, unsigned char arg4) {
    struct Struct_ov003_021604f4* var0 = (struct Struct_ov003_021604f4*)(*(char**)(arg0 + Enum_ov003_021604f4_904) + arg3 * 0x28);
    var0->unknown_14_ = arg1 << 12;
    var0->unknown_18_ = arg2 << 12;
    var0->unknown_22_ = arg4;
    func_0205ac40((void*)(arg0 + Enum_ov003_021604f4_820), var0);
}
