#include <globaldefs.h>
extern "C" void* func_02094d6c(void);

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);
struct Struct_0205faf4_7;
struct Struct_0205faf4_8;
extern "C" struct Struct_0205faf4_8* func_02096134(struct Struct_0205faf4_7*, int);

struct Struct_0209d334 { char unknown_0_[0xa]; unsigned short unknown_a_[1]; };

// USA: func_0209d334
extern "C" ARM int func_0209d334(char* arg0) {
    void* var0 = func_02094d6c();
    if (var0 == NULL) return 0;
    struct Struct_0209d334* var1 = (struct Struct_0209d334*)func_02096134(
        (struct Struct_0205faf4_7*)var0, func_ov017_021d60f4(arg0));
    if (var1 == NULL) return 0;
    int var2 = func_ov017_021d60f4(arg0 + 8);
    func_ov017_021d6134(arg0 + 0x10, var1->unknown_a_[var2]);
    return 1;
}
