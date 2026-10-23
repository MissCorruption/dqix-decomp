#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif
struct Struct_0207cc18 { char unknown_0_[0x8c]; unsigned char unknown_8c_[1]; };
struct Struct_0207cc18_2 {
    char unknown_0_[8];
    unsigned int unknown_8_0_:4, unknown_8_4_:28;
    unsigned int unknown_c_0_:12, unknown_d_4_:11, unknown_e_7_:9;
};
struct Struct_0206e424_4;
struct Struct_0207cc18_3;
struct Struct_0207cc18_4 { char unknown_0_[0xb0]; };
static inline int inline_0207cc18(unsigned char arg0) { return arg0 <= 7; }
static inline int inline_0207cc18_2(unsigned char arg0) { return arg0 >= 8 && arg0 <= 9; }
extern "C" Struct_0207cc18* func_0205ec34(void*);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" int func_020ac4c0(void*);
extern "C" void func_020a04c8(Struct_0206e424_4*, unsigned int);
extern "C" void func_020a0494(Struct_0207cc18_3*, unsigned int);
extern "C" int func_020ac494(void*);
// USA: func_0207cc18
extern "C" ARM void func_0207cc18(void* arg0, Struct_0207cc18_2* arg1) {
    if (arg1) {
        Struct_0207cc18* var0 = func_0205ec34(arg0);
        int var1 = (unsigned short)arg1->unknown_d_4_;
        if (var1 > 0) {
            int var2 = var1 + 0xc76;
            if (!func_0206dfb0((int)var0, var0->unknown_8c_, var2)) {
                func_0206df6c(var0, var0->unknown_8c_, var2, 1);
                Struct_0207cc18_4 var3;
                func_020ac4c0(&var3);
                unsigned char var4 = arg1->unknown_8_0_;
                if (inline_0207cc18(var4))
                    func_020a04c8((Struct_0206e424_4*)&var3, 1);
                else if (inline_0207cc18_2(var4))
                    func_020a0494((Struct_0207cc18_3*)&var3, 1);
                func_020ac494(&var3);
            }
        }
    }
}
