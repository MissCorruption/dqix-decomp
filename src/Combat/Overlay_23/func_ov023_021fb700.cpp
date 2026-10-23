#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021fb700 func_ov023_021faaa4
#endif
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" void* func_ov011_021849c8(void*);
extern "C" int func_ov023_021f6bb8(void*);
extern "C" void func_ov023_021f6bb0(void*, int);

extern char data_ov023_021fef64[];

struct Struct_ov023_021fb700 {
    char unknown_0_[0x10];
    int unknown_10_;
    char unknown_14_[8];
    int unknown_1c_;
};

// USA: func_ov023_021fb700
extern "C" ARM int func_ov023_021fb700(Struct_ov023_021fb700* arg0, void* arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    if (func_ov023_021f6bb8(var0) >= 0) {
        return arg0->unknown_1c_;
    }
    char var1[0x50];
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    sprintf(var1, data_ov023_021fef64, arg0->unknown_10_);
    int var3 = var2->QueueLoadFile(var1, NULL);
    func_ov023_021f6bb0(var0, var3);
    return 1;
}
