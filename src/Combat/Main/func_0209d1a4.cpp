#include <globaldefs.h>

extern "C" void* func_02094d6c(void);
extern "C" void* func_0209dccc(void);

extern "C" int func_ov017_021d60f4(void*);
struct Struct_0205faf4_7;
struct Struct_0205faf4_8;
extern "C" struct Struct_0205faf4_8* func_02096134(struct Struct_0205faf4_7*, int);

struct Struct_0209d1a4 { char unknown_0_[0xa]; unsigned short unknown_a_; };
struct Struct_0209d1a4_2 { char unknown_0_[0x98]; int unknown_98_; };

// USA: func_0209d1a4
extern "C" ARM int func_0209d1a4(void* arg0) {
    void* var0 = func_02094d6c();
    if (var0 == NULL) return 0;
    struct Struct_0209d1a4_2* var1 = (struct Struct_0209d1a4_2*)func_0209dccc();
    if (var1 == NULL) return 0;
    struct Struct_0209d1a4* var2 = (struct Struct_0209d1a4*)func_02096134((struct Struct_0205faf4_7*)var0, func_ov017_021d60f4(arg0));
    if (var2 == NULL) return 0;
    if (var2->unknown_a_ + var1->unknown_98_ >= 0xffff) return 0;
    var2->unknown_a_ = var2->unknown_a_ + var1->unknown_98_;
    return 1;
}
