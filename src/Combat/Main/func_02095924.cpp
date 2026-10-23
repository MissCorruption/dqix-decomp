#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0205faf4_3;
struct Struct_0205faf4_13;
struct Struct_0202c1a4;
struct Struct_02064490_3;
struct Struct_02095924 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 9;
    unsigned short unknown_3_1_ : 1;
    unsigned short unknown_3_2_ : 1;
    unsigned short unknown_3_3_ : 1;
    unsigned short unknown_3_4_ : 4;
    unsigned int unknown_4_0_ : 8;
    unsigned int unknown_5_0_ : 24;
    Struct_02064490_3* unknown_8_;
    Struct_02095924* unknown_c_;
};
struct Struct_02095924_2 { char unknown_0_[0xa0]; Struct_02095924* unknown_a0_; };
struct Struct_02095924_3 { int unknown_0_; char unknown_4_[0x30]; };
extern "C" Struct_0205faf4_3* func_0205ec34();
extern "C" Struct_0202c1a4* func_0202ae18();
extern "C" int func_0206e2dc(Struct_0205faf4_13*, int);
extern "C" int func_0202b7d8(int*);
extern "C" signed char func_0202c1a4(Struct_0202c1a4*);
extern "C" int func_02064704(void*, Struct_02064490_3*, void*);
extern "C" int func_0206e120(Struct_0205faf4_3*, int);
extern "C" int func_02095ae0(Struct_0205faf4_3*, int);
extern "C" void func_0206e164(Struct_0205faf4_3*, int, int);

static inline int inline_02095924(Struct_0205faf4_3* arg0, int arg1, int arg2) {
    return func_0206e120(arg0, arg1) == arg2;
}

// USA: func_02095924
extern "C" ARM int func_02095924(Struct_02095924_2* arg0, int arg1) {
    Struct_0205faf4_3* var0 = func_0205ec34();
    Struct_0202c1a4* var1 = func_0202ae18();
    Struct_02095924_3 var2;
    for (Struct_02095924* var3 = arg0->unknown_a0_; var3; var3 = var3->unknown_c_) {
        if (var3->unknown_4_0_ != arg1) continue;
        if (var3->unknown_3_2_ && !func_0206e2dc((Struct_0205faf4_13*)var0, var3->unknown_2_0_)) continue;
        if (func_0202b7d8((int*)var1) && func_0202c1a4(var1) && !var3->unknown_3_1_) continue;
        var2.unknown_0_ = arg1;
        if (func_02064704(var0, var3->unknown_8_, &var2)) {
            if (inline_02095924(var0, var3->unknown_2_0_, 3)) {
                if (!var3->unknown_3_1_ || var3->unknown_3_3_) continue;
            }
            if (!func_02095ae0(var0, var3->unknown_2_0_)) continue;
            func_0206e164(var0, var3->unknown_2_0_, 1);
            return var3->unknown_2_0_;
        } else {
            if (inline_02095924(var0, var3->unknown_2_0_, 3)) continue;
            if (inline_02095924(var0, var3->unknown_2_0_, 2)) continue;
            func_0206e164(var0, var3->unknown_2_0_, 0);
        }
    }
    return -1;
}
