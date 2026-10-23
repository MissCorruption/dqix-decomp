#include <globaldefs.h>
extern "C" void func_0204c8f0(struct Struct_0204c8f0*);


struct Struct_0207fd00 {
    #if defined(jpn)
    char unknown_0_[0x20];
#else
    char unknown1_0_[0x2c];
#endif
    void* unknown_2c_;
    char* unknown_30_;
    char unknown_34_[5];
    unsigned char unknown_39_;
};

// USA: func_0207fd00
extern "C" ARM void func_0207fd00(struct Struct_0207fd00* arg0) {
    unsigned char var0;
    char* var1;
    unsigned char var2;
    if (arg0->unknown_2c_ != NULL && arg0->unknown_30_ != NULL) {
        var1 = arg0->unknown_30_;
        var0 = arg0->unknown_39_;
        for (var2 = 0; var2 < var0; var2++) {
            func_0204c8f0((struct Struct_0204c8f0*)(var1));
            var1 += 0xe0;
        }
    }
}
