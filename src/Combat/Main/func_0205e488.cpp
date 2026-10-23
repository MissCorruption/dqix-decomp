#include <globaldefs.h>

extern "C" void func_020d8654(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_0205e218(void** arg0);
extern "C" void* func_0202c19c(void* arg0);
extern "C" void func_020d8694(void);

struct Struct_0205e488 {
    unsigned char unknown_0_[0x10];
    unsigned char unknown_10_;
    unsigned char unknown_11_[0x14 - 0x11];
};

// USA: func_0205e488
extern "C" ARM int func_0205e488(void* arg0) {
    func_020d8654();
    int var0 = 0;
    void* var1 = func_0202ae18();
    if (func_0205e218((void**)((char*)arg0 + 0x150c))) {
        var0 = 1;
        struct Struct_0205e488* var2 = (struct Struct_0205e488*)func_0202c19c(var1);
        for (int var3 = 0; var3 < 5; var3++) {
            if (var2[var3].unknown_10_ != 0xff) {
                var0 = 0;
                break;
            }
        }
    }
    func_020d8694();
    return var0;
}
