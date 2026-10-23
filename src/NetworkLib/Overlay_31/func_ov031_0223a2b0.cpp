#include <globaldefs.h>

extern "C" int func_020d5fd0(int, int, int);
extern "C" ARM void func_ov031_022393e4(int arg0);

typedef void (*Type_ov031_0223a2b0)(int, void*);
struct Struct_ov031_02290d18_26 { Type_ov031_0223a2b0 unknown_0_; unsigned char* unknown_4_; };
extern struct Struct_ov031_02290d18_26 data_ov031_02290d18;
extern int data_ov031_0224c498;
extern int data_ov031_0224c4c8;

// USA: func_ov031_0223a2b0
extern "C" ARM int func_ov031_0223a2b0(int arg0) {
    unsigned char* var0 = data_ov031_02290d18.unknown_4_;
    int var1 = func_020d5fd0((int)(var0 + 0x13e0), arg0, (int)(var0 + 0x1c00));

    if (var1 == 7) {
        Type_ov031_0223a2b0 var2 = data_ov031_02290d18.unknown_0_;
        if (var2 != NULL) {
            var2(0x8000000, &data_ov031_0224c498);
        }
        return 0;
    }
    if (var1 == 5) {
        Type_ov031_0223a2b0 var3 = data_ov031_02290d18.unknown_0_;
        if (var3 != NULL) {
            var3(0x8000000, &data_ov031_0224c4c8);
        }
        func_ov031_022393e4(var1);
        return 0;
    }
    if (var1 == 0) {
        return 1;
    }
    func_ov031_022393e4(var1);
    return 0;
}
