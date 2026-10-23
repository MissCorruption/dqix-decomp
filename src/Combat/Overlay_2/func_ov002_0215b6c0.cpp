#include <globaldefs.h>

#if defined(jpn)
#define func_ov002_0215b6c0 func_ov002_0215c914
#endif

struct Struct_ov002_0215b6c0 {
#if defined(jpn)
    char unknown_0_[0x1a94];
#else
    char unknown1_0_[0x1bcc];
#endif
    int unknown_1bcc_;
};

extern "C" void func_ov002_0215b9a4(Struct_ov002_0215b6c0* arg0, unsigned char arg1, int arg2);

// USA: func_ov002_0215b6c0
extern "C" ARM void func_ov002_0215b6c0(Struct_ov002_0215b6c0* arg0) {
    arg0->unknown_1bcc_ = 1;
#if defined(jpn)
    func_ov002_0215b9a4(arg0, 0x11, 1);
    func_ov002_0215b9a4(arg0, 0x14, 0);
    func_ov002_0215b9a4(arg0, 8, 1);
    func_ov002_0215b9a4(arg0, 9, 0);
#else
    func_ov002_0215b9a4(arg0, 0x10, 1);
    func_ov002_0215b9a4(arg0, 0x13, 0);
    func_ov002_0215b9a4(arg0, 7, 1);
    func_ov002_0215b9a4(arg0, 8, 0);
#endif
    func_ov002_0215b9a4(arg0, 4, 1);
}
