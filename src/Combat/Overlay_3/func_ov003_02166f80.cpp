#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02166f80_804 = 0x20c };
#else
enum { Enum_ov003_02166f80_804 = 0x324 };
#endif

struct Struct_0207fdcc_2;

struct Struct_0207fdcc {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
};

extern "C" struct Struct_0207fdcc* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov003_02166f80
extern "C" ARM void func_ov003_02166f80(void* arg0, int arg1, int arg2) {
    struct Struct_0207fdcc_2* var0 = *(struct Struct_0207fdcc_2**)((char*)arg0 + Enum_ov003_02166f80_804);
    struct Struct_0207fdcc* var1 = func_02081da8(var0, arg1);
    if (var1 == NULL) {
        return;
    }
    if (arg2) {
        var1->unknown_c5_ |= 0x40;
    } else {
        var1->unknown_c5_ &= ~0x40;
    }
    func_020813ec(*(void**)((char*)arg0 + Enum_ov003_02166f80_804), arg1);
}
