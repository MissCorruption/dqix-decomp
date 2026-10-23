#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_0218930c func_ov012_02189be8
#define func_ov012_02185bf0 func_ov012_02186248
#define data_ov012_0218af88 data_ov012_0218bd00
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct Struct_0205d0e0_2;
extern "C" void* func_0205d888(struct Struct_0205d0e0_2* arg0);
struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" void func_ov023_021e6e60(void* arg0);
extern "C" void func_ov012_02185bf0(void* arg0, int arg1, int arg2);

struct Struct_ov012_0218af88 { unsigned char unknown_0_; unsigned char unknown_1_; };
extern struct Struct_ov012_0218af88 data_ov012_0218af88[];

// USA: func_ov012_0218930c
extern "C" ARM void func_ov012_0218930c(char* arg0, int arg1) {
    void* var0 = func_0205d888((struct Struct_0205d0e0_2*)(arg0 + LOW_REGION(0x90, 0xac)));
    if (var0 != 0 && arg1 == 0) {
        int var1;
        for (var1 = 0; var1 < 5; var1++) {
            unsigned char var2 = data_ov012_0218af88[var1].unknown_0_;
            unsigned char var3 = *((unsigned char*)var0 + 0xc4);
            if (var2 == var3) {
                func_0205d6a0((struct Struct_0205d6a0*)(arg0 + LOW_REGION(0x90, 0xac)), 0);
                break;
            }
        }
    }
    func_0205d6a0((struct Struct_0205d6a0*)(arg0 + LOW_REGION(0x90, 0xac)), 0);
    var0 = func_0205d888((struct Struct_0205d0e0_2*)(arg0 + LOW_REGION(0x90, 0xac)));
    if (var0 == 0) return;
    arg0[LOW_REGION(0x1341, 0x1371)] = *((unsigned char*)var0 + 0xc4);
    func_ov023_021e6e60(arg0);
    func_ov012_02185bf0(arg0, *(unsigned char*)(arg0 + LOW_REGION(0x1341, 0x1371)), 0);
}
