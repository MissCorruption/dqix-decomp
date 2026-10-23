#include <globaldefs.h>

struct Struct_02029634;
struct Struct_02029634_2;
extern "C" struct Struct_02029634_2* func_0202a9ac(struct Struct_02029634* arg0, int arg1);

struct Struct_0202a944 {
    int unknown_0_;
    char unknown_4_[0x30];
    struct Struct_0202a944* unknown_34_;
    char unknown_38_[0x4];
    unsigned char unknown_3c_;
    char unknown_3d_[0xB];
    void* unknown_48_;
};

struct Struct_0202a944_2 {
    char unknown_0_[0x44];
    struct Struct_0202a944* unknown_44_;
    char unknown_48_[0x12];
    unsigned short unknown_5a_;
};

// USA: func_0202a944
extern "C" ARM void func_0202a944(struct Struct_0202a944_2* arg0, struct Struct_0202a944* arg1) {
    arg1->unknown_34_ = 0;
    if (arg0->unknown_5a_ == 0) {
        arg0->unknown_44_ = arg1;
        arg1->unknown_3c_ = 0;
        arg0->unknown_5a_ = 1;
    } else {
        struct Struct_0202a944* var0 = (struct Struct_0202a944*)func_0202a9ac((struct Struct_02029634*)arg0, arg0->unknown_5a_ - 1);
        if (var0 != 0) {
            var0->unknown_34_ = arg1;
            arg1->unknown_3c_ = (unsigned char)arg0->unknown_5a_;
            arg0->unknown_5a_ = arg0->unknown_5a_ + 1;
        }
    }
    if (arg1->unknown_0_ == 1) {
        arg1->unknown_48_ = arg0;
    }
}
