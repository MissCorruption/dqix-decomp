#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0207fc6c_44 = 0x20 };
#else
enum { Enum_0207fc6c_44 = 0x2c };
#endif

extern "C" void func_0204c87c(void* arg0, int arg1);

struct Struct_0207fc6c {
    char unknown_0_[Enum_0207fc6c_44];
    void* unknown_2c_;
    char* unknown_30_;
    char unknown_34_[5];
    unsigned char unknown_39_;
};

// USA: func_0207fc6c
extern "C" ARM void func_0207fc6c(struct Struct_0207fc6c* arg0, int arg1) {
    unsigned char var0;
    char* var1;
    unsigned char var2;
    if (arg0->unknown_2c_ != NULL && arg0->unknown_30_ != NULL) {
        var1 = arg0->unknown_30_;
        var0 = arg0->unknown_39_;
        for (var2 = 0; var2 < var0; var2++) {
            func_0204c87c(var1, arg1);
            var1 += 0xe0;
        }
    }
}
