#include <globaldefs.h>

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

typedef int (*Type_ov011_021862a4)(int, int, int, int, int);
typedef int (*Type_ov011_021862a4_2)(int, int, int, int);

struct Struct_ov011_021862a4 { void* unknown_0_[4]; };
struct Struct_ov011_02188914 { struct Struct_ov011_021862a4 unknown_0_[2]; };
extern struct Struct_ov011_02188914 data_ov011_02188914;

// USA: func_ov011_021862a4
extern "C" ARM int func_ov011_021862a4(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(&arg0[0]);
    int var1 = func_ov011_02184c30(&arg0[1]);
    int var2 = func_ov011_02184c30(&arg0[2]);
    int var3 = func_ov011_02184c30(&arg0[3]);
    int var4 = func_ov011_02184c30(&arg0[4]);
    int var5 = func_ov011_02184c30(&arg0[5]);
    int var6 = func_ov011_02184c30(&arg0[6]);

    struct Struct_ov011_02188914 var7 = data_ov011_02188914;
    void* var8 = var7.unknown_0_[var0].unknown_0_[var1];
    if (var1 < 2) {
        ((Type_ov011_021862a4)var8)(var2, var3, var4, var5, var6);
    } else {
        ((Type_ov011_021862a4_2)var8)(var2, var3, var4, var5);
    }
    return 1;
}
