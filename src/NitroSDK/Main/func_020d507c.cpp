#include <globaldefs.h>

extern "C" int func_020d424c(int, int);
extern "C" int func_020d40bc(int, int, int);
struct Struct_020d507c;
extern "C" int func_020d5158(struct Struct_020d507c* arg0);
extern "C" void func_020d404c(int arg0, int arg1);
void CleanCacheRange(const void* addr, unsigned int size);

struct Struct_0202db64 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[0x14 - 0x6];
    unsigned short unknown_14_;
    unsigned char unknown_16_[0x34 - 0x16];
    unsigned short unknown_34_;
    unsigned short unknown_36_;
};


// USA: func_020d507c
extern "C" ARM int func_020d507c(int arg0, struct Struct_0202db64* arg1) {
    int var0 = func_020d424c(1, 2);
    if (var0 != 0) {
        return var0;
    }
    if (arg1 == NULL) {
        return 6;
    }
    if (arg1->unknown_4_ != 0 && arg1->unknown_0_ == 0) {
        return 6;
    }

    int var1 = (arg1->unknown_14_ != 0) ? 0x2a : 0;
    if (arg1->unknown_34_ + var1 > 0x200 || arg1->unknown_36_ + ((arg1->unknown_14_ != 0) ? 6 : 0) > 0x200) {
        return 6;
    }

    func_020d5158((struct Struct_020d507c*)arg1);
    func_020d404c(7, arg0);
    CleanCacheRange(arg1, 0x40);
    if (arg1->unknown_4_ != 0) {
        CleanCacheRange((void*)arg1->unknown_0_, arg1->unknown_4_);
    }
    var0 = func_020d40bc(7, 1, (int)arg1);
    if (var0 == 0) {
        var0 = 2;
    }
    return var0;
}
