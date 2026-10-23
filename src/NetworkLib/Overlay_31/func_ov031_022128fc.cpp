#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/ProcessorContext.h"

extern "C" int func_ov031_02212598();
extern "C" int func_ov031_022119b0(int*);
extern "C" void func_ov031_02211b08(int, int);
extern "C" int func_020c7170(char*, unsigned long, const char*, ...);
extern "C" void* func_ov031_02212790(void*, int);
extern "C" void* func_ov031_022127a8(void*);
extern "C" void func_ov031_022127c0(int, int, int);
extern "C" int func_ov031_0221aae4(int, int, char*, int);
typedef void* (*Type_ov031_022128fc)(unsigned int, unsigned int);
typedef void (*Type_ov031_022128fc_2)(void*);
extern "C" int func_ov031_0223e6c0(Type_ov031_022128fc, Type_ov031_022128fc_2, const char*, const char*, const void*, const void*, void*);

struct Struct_ov031_022128fc {
    void (*unknown_0_)(int, int, int);
    char unknown_4_[4];
    char unknown_8_[32];
    char unknown_28_[32];
    int unknown_48_;
    char unknown_4c_[4];
    char unknown_50_[65];
    char unknown_91_[1];
};

extern Struct_ov031_022128fc* data_ov031_0224e5c0;
extern const char data_ov031_02249a8c[];
extern const char data_ov031_02249aa0[];

// USA: func_ov031_022128fc
extern "C" ARM void func_ov031_022128fc() {
    char var0[256];
    char var1[400];
    for (;;) {
        int var2 = func_ov031_02212598();
        if (var2 == 3) {
            Struct_ov031_022128fc* var3 = data_ov031_0224e5c0;
            unsigned int var4 = strlen(var3->unknown_50_);
            if (var4 + strlen(data_ov031_02249a8c) > 255) {
                func_ov031_022127c0(0, 8, -1);
                return;
            }
            func_020c7170(var0, 256, data_ov031_02249aa0, var3->unknown_50_);
            var3 = data_ov031_0224e5c0;
            int var5 = strlen(var3->unknown_91_);
            if (func_ov031_0221aae4((int)var3->unknown_91_, var5, var1, 400) < 0) {
                func_ov031_022127c0(0, 8, -1);
                return;
            }
            if (!func_ov031_0223e6c0((Type_ov031_022128fc)func_ov031_02212790, (Type_ov031_022128fc_2)func_ov031_022127a8, var0, var1, data_ov031_0224e5c0->unknown_8_, data_ov031_0224e5c0->unknown_28_, (void*)func_ov031_022127c0)) {
                func_ov031_022127c0(0, 8, -1);
                return;
            }
            data_ov031_0224e5c0->unknown_48_ = 1;
            func_ov031_022127c0(0, 0, -1);
            return;
        }
        if (var2 == 4) {
            int var6;
            func_ov031_022119b0(&var6);
            func_ov031_02211b08(14, var6);
            data_ov031_0224e5c0->unknown_0_(0, 3, -1);
            return;
        }
        if (var2 == 5) func_ov031_022127c0(0, 6, -1);
        SleepCurrentContext(100);
    }
}
