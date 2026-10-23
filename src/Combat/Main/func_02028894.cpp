#include <globaldefs.h>

extern "C" void func_020287b4(void* arg0);

struct Struct_02028894 {
    char unknown_0_[0x10];
    void* unknown_10_;   // 0x10
#if !defined(jpn)
    void* unknown_14_;   // 0x14
#endif
    char unknown_18_[0x318 - 0x18];
};

// USA: func_02028894
extern "C" ARM void func_02028894(struct Struct_02028894* arg0, char* arg1, char* arg2) {
    int var0;
    func_020287b4(arg0);
    for (var0 = 0; var0 < 4; var0++) {
        arg0[var0].unknown_10_ = arg1 + var0 * 0x14;
#if !defined(jpn)
        arg0[var0].unknown_14_ = arg2 + var0 * 0x14;
#endif
    }
}
