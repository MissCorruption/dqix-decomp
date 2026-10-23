#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(Struct_ov011_02184c30*);
struct Struct_ov011_02184c4c;
extern "C" float func_ov011_02184c4c(Struct_ov011_02184c4c*);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);

struct Struct_ov011_0218515c { char unknown_0_[0x1c]; void (*unknown_1c_)(void*, int*); };
struct Struct_ov011_0218515c_2 { struct Struct_ov011_0218515c* unknown_0_; };
extern "C" struct Struct_ov011_0218515c_2* func_ov023_021f6880(void*, int);

// USA: func_ov011_0218515c
extern "C" ARM int func_ov011_0218515c(Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1[3];
    var1[0] = (int)(4096.0f * func_ov011_02184c4c((Struct_ov011_02184c4c*)((char*)arg0 + 8)));
    var1[1] = (int)(4096.0f * func_ov011_02184c4c((Struct_ov011_02184c4c*)((char*)arg0 + 0x10)));
    var1[2] = 0;
    struct Struct_ov011_0218515c_2* var2 = func_ov023_021f6880(func_ov011_021849c8((void*)func_ov017_021b2164()), var0);
    if (!var2) return 0;
    var2->unknown_0_->unknown_1c_(var2, var1);
    return 1;
}
