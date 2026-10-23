#include <globaldefs.h>

struct Struct_0203dce4_2;
struct Struct_0203dce4;
extern "C" void* func_0203cf4c(void);
extern "C" Struct_0203dce4* func_0203dce4(Struct_0203dce4_2* arg0, int arg1);

struct Struct_02065758 {
    #if defined(jpn)
    unsigned char unknown_0_[0x1708];
#else
    unsigned char unknown1_0_[0x1838];
#endif
    int unknown_1838_;
    #if defined(jpn)
    unsigned char unknown_170c_[0x1787 - 0x1708 - 4];
#else
    unsigned char unknown_183c_[0x1959 - 0x1838 - 4];
#endif
    unsigned char unknown_1959_;
    #if defined(jpn)
    unsigned char unknown_1788_[0x17e7 - 0x1787 - 1];
#else
    unsigned char unknown_195a_[0x19b7 - 0x1959 - 1];
#endif
    unsigned char unknown_19b7_;
};

// USA: func_02065758
extern "C" ARM int func_02065758(Struct_02065758* arg0, int arg1) {
    Struct_0203dce4* var0;
    int var1;
    unsigned char var2;

    var0 = func_0203dce4((Struct_0203dce4_2*)func_0203cf4c(), arg0->unknown_1838_);
    if (var0 == NULL) {
        return 0;
    }
    if (arg0->unknown_19b7_ == 0) {
        return 0;
    }
    var2 = (unsigned char)arg1;
    var1 = 1;
    if (arg0->unknown_1959_ < var2) {
        arg0->unknown_1959_ = 0;
    } else {
        arg0->unknown_1959_ = arg0->unknown_1959_ - var2;
    }
    if (arg0->unknown_1959_ == 0) {
        var1 = 0;
        arg0->unknown_19b7_ = 0;
    }
    return var1;
}
