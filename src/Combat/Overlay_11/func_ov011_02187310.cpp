#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);

struct Struct_ov011_02187310 { char unknown_0_[8]; char unknown_8_[8]; };
struct Struct_ov011_02187310_2 { char unknown_0_[0xc]; unsigned char unknown_c_; };

// USA: func_ov011_02187310
extern "C" ARM int func_ov011_02187310(struct Struct_ov011_02187310* arg0) {
    int var0 = func_ov011_02184c30((struct Struct_ov011_02184c30*)&arg0->unknown_0_);
    unsigned char var1 = (unsigned char)func_ov011_02184c30((struct Struct_ov011_02184c30*)&arg0->unknown_8_);
    void* var2 = func_ov017_021b2164();
    struct Struct_ov011_02187310_2* var3 = (struct Struct_ov011_02187310_2*)func_ov023_021f6880(func_ov011_021849c8(var2), var0);
    if (var3 == 0) return 0;
    var3->unknown_c_ = var3->unknown_c_ & ~var1;
    return 1;
}
