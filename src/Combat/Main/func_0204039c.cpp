#include <globaldefs.h>

struct Struct_0203fca0;
extern "C" void func_0203fcd4(struct Struct_0203fca0* arg0);

struct Struct_02040258 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0x37];
    int unknown_38_;
};
extern "C" void func_02040258(struct Struct_02040258* arg0);

struct Struct_0204039c {
    int unknown_0_;
    char unknown_4_[4];
    struct Struct_02040258* unknown_8_;
};

// USA: func_0204039c
extern "C" ARM void func_0204039c(struct Struct_0204039c* arg0, int arg1) {
    struct Struct_02040258* var0 = arg0->unknown_8_;
    if (var0 == 0) {
        return;
    }
    if (arg1 < 0) {
        return;
    }
    if ((unsigned int)arg0->unknown_0_ <= (unsigned int)arg1) {
        return;
    }
    if (var0[arg1].unknown_38_ < 0) {
        return;
    }
    if (var0[arg1].unknown_38_ > 0) {
        var0[arg1].unknown_38_--;
        return;
    }
    func_0203fcd4((struct Struct_0203fca0*)((char*)&var0[arg1] + 0x10));
    func_02040258(&arg0->unknown_8_[arg1]);
}
