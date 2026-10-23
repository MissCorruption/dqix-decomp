#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020d857c(signed char* arg0, signed char* arg1);
extern "C" char* strcpy(char* arg0, const char* arg1);
extern "C" void* memcpy(void* arg0, void* arg1, unsigned int arg2);
extern "C" int func_020d2ff0(const char* arg0);

struct Struct_ov003_0217f600 {
    signed char* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov003_0217f608 {
    const char* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern Struct_ov003_0217f600 data_ov003_0217f600[];
extern Struct_ov003_0217f600 data_ov003_0217f604[];
extern Struct_ov003_0217f608 data_ov003_0217f608[];

// USA: func_ov003_02170a7c
extern "C" ARM void func_ov003_02170a7c(signed char* arg0, void* arg1) {
    if (arg1 != 0 && arg0 != 0) {
        char var0[16];
        int var1 = func_020d2ff0((const char*)arg0) + 1;
        unsigned char var2 = var1;
        unsigned char var3 = 0;
        __clear(var0, 0x10);
        int var4 = var3;
        while (data_ov003_0217f600[var3].unknown_0_ != 0 && var2 != 0) {
            int var5 = 0;
            if (func_020d857c(arg0, data_ov003_0217f600[var3].unknown_0_) != 0) {
                var5 = 1;
            } else if (func_020d857c(arg0, data_ov003_0217f604[var3].unknown_0_) != 0) {
                var5 = 1;
            }
            if (var5 == 0) {
                var3 = var3 + 1;
                continue;
            }
            const char* var6 = *(const char* const*)((char*)data_ov003_0217f608 + (int)var3 * 12);
            strcpy(var0 + var4, var6);
            var4 += func_020d2ff0(var6);
            var2 = var2 - 2;
            arg0 += 2;
            var3 = 0;
        }
        memcpy(arg1, var0, 8);
    }
}
