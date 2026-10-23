#include <globaldefs.h>

struct Struct_02040774_2;
extern "C" void func_020407b4(struct Struct_02040774_2* arg0, int arg1, int arg2, int arg3);

struct Struct_02040774 {
    char unknown_0_[4];
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
struct Struct_0203d028_15 {
    char unknown_0_[0x14];
    struct Struct_02040774* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
};

// USA: func_02040774
extern "C" ARM void func_02040774(struct Struct_0203d028_15* arg0, int arg1, int arg2, int arg3) {
    struct Struct_02040774* var0 = arg0->unknown_14_;
    if (var0 != NULL) {
        var0->unknown_4_ = arg1;
        var0->unknown_8_ = arg2;
        var0->unknown_c_ = arg3;
        return;
    }
    if (arg0->unknown_18_ != NULL) {
        func_020407b4((struct Struct_02040774_2*)arg0->unknown_18_, arg1, arg2, arg3);
        return;
    }
    if (arg0->unknown_1c_ != NULL) {
        func_020407b4((struct Struct_02040774_2*)arg0->unknown_1c_, arg1, arg2, arg3);
    }
}
