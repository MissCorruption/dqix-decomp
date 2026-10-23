#include <globaldefs.h>

struct Struct_ov000_02175808 {
    char unknown_0_[8];
    unsigned short unknown_8_;
};
struct Struct_ov025_021e6340 {
#if defined(jpn)
    char unknown_0_[0x70f4];
#else
    char unknown1_0_[0x6f04];
#endif
    unsigned short unknown_6f04_;
};
extern int data_02108760;
extern "C" Struct_ov025_021e6340* func_ov000_02160130();
extern "C" void func_0205ebfc(void*, int, int);

// USA: func_ov025_021e6340
extern "C" ARM int func_ov025_021e6340(Struct_ov000_02175808* arg0) {
    Struct_ov025_021e6340* var0 = func_ov000_02160130();
    var0->unknown_6f04_ = arg0->unknown_8_;
    func_0205ebfc(&data_02108760, arg0->unknown_8_, 0);
    return 1;
}
