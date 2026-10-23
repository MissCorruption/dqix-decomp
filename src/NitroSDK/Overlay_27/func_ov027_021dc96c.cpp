#include <globaldefs.h>

extern "C" unsigned int func_ov027_021dcee8(unsigned int arg0);
extern "C" int func_020d4f7c(int arg0, int arg1, int arg2);
extern "C" void* func_020d472c(void* arg0);
extern "C" void func_ov027_021db490(void);

struct Struct_ov027_021e33e0_8 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[4 - 2];
    unsigned int unknown_4_;
    char* unknown_8_;
    char* unknown_c_;
};

extern Struct_ov027_021e33e0_8 data_ov027_021e33e0;

// USA: func_ov027_021dc96c
extern "C" ARM int func_ov027_021dc96c(void) {
    *(unsigned short*)(data_ov027_021e33e0.unknown_8_ + 0x500 + 0x28) = 0;
    *(unsigned short*)(data_ov027_021e33e0.unknown_8_ + 0x500 + 0x2a) = 0;
    *(unsigned short*)(data_ov027_021e33e0.unknown_8_ + 0x500 + 0x26) = 0;
    *(unsigned short*)(data_ov027_021e33e0.unknown_8_ + 0x500 + 0x48) = 0;
    func_ov027_021dcee8(0xa);

    if (*(int*)(data_ov027_021e33e0.unknown_c_ + 0x1000 + 0x320) == 0) {
        int var0;
        do {
            var0 = func_020d4f7c(data_ov027_021e33e0.unknown_4_, *(int*)(data_ov027_021e33e0.unknown_8_ + 0x508), data_ov027_021e33e0.unknown_0_);
        } while (var0 == 4);
        if (var0 != 2) return 8;
        void* var1 = *(void**)(data_ov027_021e33e0.unknown_8_ + 0x508);
        func_020d472c(var1);
        data_ov027_021e33e0.unknown_8_[0x50d] = 1;
        return 0;
    }

    void* var2 = *(void**)(data_ov027_021e33e0.unknown_8_ + 0x508);
    func_020d472c(var2);
    data_ov027_021e33e0.unknown_8_[0x50d] = 1;
    func_ov027_021db490();
    return 0;
}
