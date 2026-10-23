#include <globaldefs.h>
#include "Resource/Script.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void* func_0205ec34(void);
struct Struct_0201c1c8;

struct Struct_0205faf4_13;
extern "C" int func_0206e2dc(struct Struct_0205faf4_13* arg0, int arg1);
struct Struct_0206e2a0;
extern "C" void func_0206e2a0(struct Struct_0206e2a0* arg0, int arg1);

extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

struct Struct_ov023_021f5a1c {
    unsigned short unknown_0_0_ : 13;
    unsigned short unknown_1_5_ : 3;
};
struct Struct_ov023_021f5a1c_2 {
    char unknown_0_[0x10c];
    struct Struct_ov023_021f5a1c unknown_10c_;
};
struct Struct_ov023_021fff08_7 {
    char unknown_0_[0xc];
    struct Struct_ov023_021f5a1c_2* unknown_c_;
};
extern struct Struct_ov023_021fff08_7 data_ov023_021fff08;

// USA: func_ov023_021f5a1c
extern "C" ARM int func_ov023_021f5a1c(struct Struct_0201c1c8* arg0, int arg1) {
    void* var0 = func_0205ec34();
    for (int var1 = 0; var1 < arg1; var1++) {
        int var2 = ((Script::Parameter*)arg0)->ToInt();
        arg0 = (struct Struct_0201c1c8*)((char*)arg0 + 8);
        int var3 = func_0206e2dc((struct Struct_0205faf4_13*)var0, var2);
        if (var3 == 0) {
            func_0206e2a0((struct Struct_0206e2a0*)var0, var2);
            data_ov023_021fff08.unknown_c_->unknown_10c_.unknown_0_0_ |= 0x40;
            func_0206df6c(var0, (unsigned char*)((char*)var0 + 0x8c), 0x797, 1);
        }
    }
    return 1;
}
