#include <globaldefs.h>

extern "C" int func_ov017_021959b4(void);
extern "C" void func_020936b0(void* arg0);
extern "C" void func_02092e0c(void* arg0);
extern "C" void func_02092f00(void* arg0);

struct Struct_020e6d5c {
    void* unknown_0_;
    int unknown_4_;
};

struct Struct_020e8d84 {
    unsigned int unknown_0_[10];
};

union Struct_02092bcc {
    struct Struct_020e8d84 unknown_0_;
    struct Struct_020e6d5c unknown1_0_[5];
};

extern struct Struct_020e8d84 data_020e8d84;
extern struct Struct_020e6d5c data_020e6d5c;

// USA: func_02092bcc
extern "C" ARM int func_02092bcc(unsigned char* arg0, int arg1) {
    union Struct_02092bcc var0;
    unsigned char var1;
    struct Struct_020e6d5c* var2;
    short var3;

    if (arg0[0x3a] == 0) {
        if (func_ov017_021959b4() != 0) {
            arg0[0x3a] = 1;
            func_020936b0(arg0);
        }
    }

    var3 = *(short*)(arg0 + 0x32);
    if (var3 > 0) {
        *(short*)(arg0 + 0x32) = var3 - arg1;
        if (*(short*)(arg0 + 0x32) < 0) {
            *(short*)(arg0 + 0x32) = 0;
        }
    }

    func_02092e0c(arg0);
    func_02092f00(arg0);

    if (arg0[0x37] & 0x4) {
        return 0;
    }

    var0.unknown_0_ = data_020e8d84;
    {
        int var4 = data_020e6d5c.unknown_4_;
        void* var5 = data_020e6d5c.unknown_0_;
        ((struct Struct_020e6d5c*)&var0)[4].unknown_4_ = var4;
        ((struct Struct_020e6d5c*)&var0)[4].unknown_0_ = var5;
    }

    var1 = arg0[0x34];
    if (var0.unknown1_0_[var1].unknown_0_ == 0) {
        return 1;
    }
    {
        var2 = &var0.unknown1_0_[var1];
        void* var6 = arg0 + (var2->unknown_4_ >> 1);
        void* var7;
        if (var2->unknown_4_ & 1) {
            void** var8 = (void**)*(void**)var6;
            var7 = *(void**)((char*)var8 + (int)var2->unknown_0_);
        } else {
            var7 = var2->unknown_0_;
        }
        ((void (*)(void*))var7)(var6);
    }
    return 0;
}
