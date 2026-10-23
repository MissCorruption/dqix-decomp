#include <globaldefs.h>

struct Struct_020d2c00;

struct Struct_020d2c00_3 {
    Struct_020d2c00* unknown_0_;
    Struct_020d2c00_3* unknown_4_;
};

struct Struct_020d2c00 {
    unsigned char unknown_0_[0x18];
    Struct_020d2c00_3* unknown_18_;
    unsigned char unknown_1c_[0x20];
};

struct Struct_020d2c00_2 {
    unsigned char unknown_0_[0x18];
    Struct_020d2c00_3 unknown_18_[4];
};

void CleanCacheRange(const void* addr, unsigned int size);

extern "C" {
    void func_020d21f8();
    void func_020d220c();
}

// USA: func_020d2c00
extern "C" ARM void func_020d2c00(Struct_020d2c00_2* arg0) {
    Struct_020d2c00_3* var0;
    int var1;
    func_020d21f8();
    var0 = &arg0->unknown_18_[0];
    var1 = 0;
    do {
        Struct_020d2c00* const var2 = arg0->unknown_18_[var1].unknown_0_;
        if (var2 != NULL) {
            if (var0 == var2->unknown_18_) {
                var2->unknown_18_ = arg0->unknown_18_[var1].unknown_4_;
                CleanCacheRange(var2, sizeof(Struct_020d2c00));
            } else {
                Struct_020d2c00_3* var3 = var2->unknown_18_;
                if (var3 != NULL) {
                    do {
                        if (var0 == var3->unknown_4_)
                            break;
                        var3 = var3->unknown_4_;
                    } while (var3 != NULL);
                }
                var3->unknown_4_ = arg0->unknown_18_[var1].unknown_4_;
                CleanCacheRange(var3, sizeof(Struct_020d2c00_3));
            }
        }
        var1++;
        var0++;
    } while (var1 < 4);
    func_020d220c();
}
