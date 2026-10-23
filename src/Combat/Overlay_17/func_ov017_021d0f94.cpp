#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021d0f94_1788 = 0x4ec, Enum_ov017_021d0f94_2880 = 0x920, Enum_ov017_021d0f94_2016 = 0x768 };
#else
enum { Enum_ov017_021d0f94_1788 = 0x6fc, Enum_ov017_021d0f94_2880 = 0xb40, Enum_ov017_021d0f94_2016 = 0x7e0 };
#endif

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);
extern "C" int func_ov003_0217f278(int* arg0);

extern "C" void func_ov003_02171fe8(void* arg0, void* arg1, void* arg2, int arg3, unsigned char arg4);

struct Struct_ov017_021d0f94 {
    unsigned char unknown_0_[0x4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_0_ : 7;
    unsigned char unknown_7_;
};

// USA: func_ov017_021d0f94
extern "C" ARM void func_ov017_021d0f94(void* arg0, struct Struct_ov017_021d0f94* arg1, int arg2, char* arg3, struct Struct_0202c1a4* arg4) {
    signed char var0 = func_0202c1a4(arg4);
    if (arg1->unknown_4_ != var0) return;

    struct Struct_02015438** var1 = *(struct Struct_02015438***)(arg3 + 0x3000 + Enum_ov017_021d0f94_1788);
    if (func_02046b24(var1) != 0x2a) return;

    int* var2 = *(int**)(arg3 + 0x3000 + Enum_ov017_021d0f94_2880);
    int var3 = func_ov003_0217f278(var2);
    if (var3 == 0) return;

    func_ov003_02171fe8((char*)var3 + Enum_ov017_021d0f94_2016, arg0, &arg1->unknown_7_, arg1->unknown_6_0_, arg1->unknown_5_);
}
