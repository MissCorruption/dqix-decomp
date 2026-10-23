#if defined(jpn)
#define func_ov006_0215f3d8 func_ov006_021607f8
#endif

#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct Struct_ov006_021591ec;
extern "C" unsigned short func_ov006_021591ec(Struct_ov006_021591ec* arg0);
extern "C" short func_02080468(void* arg0, int arg1);
extern "C" void func_ov006_0215f4dc(void* arg0);
extern "C" void func_ov006_0215f740(void* arg0);

struct Struct_ov006_0215f3d8 {
    unsigned char unknown_0_[0x14];
    void* unknown_14_;
    unsigned char unknown_18_[0x350 - 0x18];
    unsigned int unknown_350_;
    unsigned char unknown_354_[0x364 - 0x354];
    short unknown_364_;
    unsigned char unknown_366_[0x388 - 0x366];
    unsigned char unknown_388_;
    unsigned char unknown_389_;
    unsigned char unknown_38a_[0x394 - 0x38a];
    unsigned short unknown_394_;
};

// USA: func_ov006_0215f3d8
extern "C" ARM void func_ov006_0215f3d8(Struct_ov006_0215f3d8* arg0) {
    if ((arg0->unknown_394_ & 4) == 0) {
        return;
    }
    int var0 = 0;
    if (arg0->unknown_350_ & 0x10) {
        arg0->unknown_388_++;
        var0 = 1;
    } else if (arg0->unknown_350_ & 0x20) {
        arg0->unknown_388_--;
        var0 = 1;
    }
    if (arg0->unknown_388_ == 0xff) {
        arg0->unknown_388_ = arg0->unknown_389_ - 1;
    }
    if (arg0->unknown_389_ <= arg0->unknown_388_) {
        arg0->unknown_388_ = 0;
    }
    if (var0 == 0) {
        return;
    }
    unsigned short var1 = func_ov006_021591ec((Struct_ov006_021591ec*)arg0);
    short var2 = arg0->unknown_364_ - func_02080468(*(void**)((char*)arg0 + LOW_REGION(0xc, 0x14)), 0x11);
    short var3 = var2 + arg0->unknown_388_ * 8;
    if (var3 >= var1) {
        var3 = var1 - 1;
    }
    var3 = var3 % 8;
    arg0->unknown_364_ = func_02080468(*(void**)((char*)arg0 + LOW_REGION(0xc, 0x14)), 0x11) + var3;
    func_ov006_0215f4dc(arg0);
    func_ov006_0215f740(arg0);
}
