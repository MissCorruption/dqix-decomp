#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

struct Struct_ov003_0215f41c {
    void* unknown_0_;
    void* unknown_4_;
    char unknown_8_[0x18 - 8];
    int unknown_18_;
    short unknown_1c_;
    unsigned char unknown_1e_;
    char unknown_1f_;
    unsigned char unknown_20_;
};

// USA: func_ov003_0215f41c
extern "C" ARM void func_ov003_0215f41c(struct Struct_ov003_0215f41c* arg0, char* arg1) {
    int var0;
    char* var1;
    short var2;
    arg0->unknown_0_ = 0;
    arg0->unknown_18_ = 0;
    arg0->unknown_1c_ = 0;
    arg0->unknown_1e_ = 1;
    arg0->unknown_20_ = 0;
    var0 = func_020d2ff0(arg1);
    char* var3 = (char*)arg0->unknown_4_;
    var2 = *(short*)(var3 + 6);
    var1 = *(char**)(var3 + 0);
    for (short var4 = 0; var4 < var2; var4++, var1 += 0x14) {
        void* var5 = *(void**)(var1 + 4);
        if (var5 != 0) {
            if (func_02001aec(var5, arg1, var0) == 0) {
                arg0->unknown_0_ = var1;
                return;
            }
        }
    }
}
