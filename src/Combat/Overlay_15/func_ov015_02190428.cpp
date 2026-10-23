#if defined(jpn)
#define R(j,u) (j)
#define func_0202920c func_02028dc4
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" int func_ov015_02190c98(void* arg0);
extern "C" void func_02029060();
extern "C" void func_02028d58(int arg0);
extern "C" void func_02029988(void* arg0, int arg1);
extern "C" void func_0202920c(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_02029088();
extern "C" void func_020bbcb4();
extern "C" void func_ov015_02190acc(void* arg0);

struct Struct_ov015_02190428 {
    char unknown_0_[0x328];
    unsigned short unknown_328_;
    char unknown_32a_[0x330 - 0x328 - 2];
    unsigned char unknown_330_;
    char unknown_331_[0x334 - 0x330 - 1];
    unsigned char unknown_334_;
    char unknown_335_[0x348 - 0x334 - 1];
    int unknown_348_;
    float unknown_34c_;
    unsigned char unknown_350_;
    char unknown_351_[0x354 - 0x350 - 1];
    int unknown_354_;
};

// USA: func_ov015_02190428
extern "C" ARM void func_ov015_02190428(struct Struct_ov015_02190428* arg0) {
    if (!func_ov015_02190c98(arg0)) return;
    func_02029060();
    if (arg0->unknown_330_ != 2) arg0->unknown_350_ = 0;
    func_02028d58(arg0->unknown_354_);
    func_02029988((char*)arg0 + 0x2c4, 1);
    arg0->unknown_334_ = 0;
    func_02028d58(0);
    func_0202920c(0xf, 0x81, 0x17, 6, 0x9e);
    func_0202920c(1, 0x82, 0x18, 4, 0x9c);
    int var0 = (int)(24.0f + arg0->unknown_34c_ * (float)(int)arg0->unknown_328_);
    func_0202920c(0xf, 0x82, var0, 4, arg0->unknown_348_);
    func_ov015_02190acc(arg0);
    func_02029088();
    func_020bbcb4();
}
