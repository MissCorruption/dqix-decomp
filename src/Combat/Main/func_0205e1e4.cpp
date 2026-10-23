#include <globaldefs.h>

struct Struct_0205e1e4_2 {
    char unknown_0_[0x18];
    struct Struct_0205e1e4_2* unknown_18_;
};
struct Struct_0205e1e4 {
    struct Struct_0205e1e4_2* unknown_0_;
    struct Struct_0205e1e4_2* unknown_4_;
    int unknown_8_;
};

extern "C" void func_020d8654(void);
extern "C" void func_020d8694(void);

// USA: func_0205e1e4
extern "C" ARM struct Struct_0205e1e4_2* func_0205e1e4(struct Struct_0205e1e4* arg0) {
    struct Struct_0205e1e4_2* var0;
    func_020d8654();
    var0 = arg0->unknown_0_;
    if (var0 != NULL) {
        arg0->unknown_0_ = var0->unknown_18_;
        arg0->unknown_8_--;
    }
    func_020d8694();
    return var0;
}
