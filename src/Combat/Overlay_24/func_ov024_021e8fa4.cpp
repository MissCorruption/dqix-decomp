#include <globaldefs.h>

extern "C" int func_ov000_02156068(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov024_021e2bd0_2 {
    char unknown_0_[0x10];
    void* unknown_10_;
};

struct Struct_ov024_021fe820 {
    short unknown_0_;
    short unknown_2_;
};

extern struct Struct_ov024_021fe820 data_ov024_021fe820[];
extern struct Struct_ov024_021fe820 data_ov024_021fe822[];

// USA: func_ov024_021e8fa4
extern "C" ARM int func_ov024_021e8fa4(struct Struct_ov024_021e2bd0_2* arg0, int arg1, int arg2) {
    if (arg2 == 2) {
        int var0 = func_ov000_02156068(arg0->unknown_10_, arg1, 0, 2);
        if (var0 != 0) {
            return 0;
        }
    }
    int var1 = 0;
    while (data_ov024_021fe820[var1].unknown_0_ != -1) {
        if (arg2 == data_ov024_021fe820[var1].unknown_0_) {
            return data_ov024_021fe822[var1].unknown_0_;
        }
        var1++;
    }
    return 0;
}
