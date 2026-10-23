#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern char data_ov023_021fe3ac[];
extern char data_ov023_021fe3b1[];
extern char data_ov023_021fe3b5[];
extern char data_ov023_021fe3ba[];
extern char data_ov023_021fe3c2[];

extern "C" int func_ov023_021f5cd8(unsigned char* arg0, int arg1, unsigned char* arg2);
extern "C" int func_ov023_021f5d58(unsigned char* arg0, int arg1, unsigned char* arg2);
extern "C" void func_ov023_021f5e70(unsigned char* arg0, int arg1, unsigned char* arg2);
extern "C" void func_ov023_021f6058(unsigned char* arg0, int arg1, unsigned char* arg2);

struct Struct_ov023_021f5b9c {
    char unknown_0_[0x88];
    char unknown_88_[0x24];
    int unknown_ac_;
};

struct Struct_ov023_021fff08_10 { char unknown_0_[4]; int unknown_4_; };
extern struct Struct_ov023_021fff08_10 data_ov023_021fff08;

// USA: func_ov023_021f5b9c
extern "C" ARM void func_ov023_021f5b9c(unsigned char* arg0, struct Struct_ov023_021f5b9c* arg1, int arg2, SafeAllocator* arg3) {
    struct Struct_ov023_021f5b9c* var0;
    unsigned char* var1 = (unsigned char*)arg3->Allocate(0xc800);
    int var2 = 0;
    for (; var2 < arg2; var2++) {
        var0 = &arg1[var2];
        int var3 = 0;
        if (strstr(var0->unknown_88_, data_ov023_021fe3ac)) {
            var3 = 1;
            if (func_ov023_021f5cd8(arg0, var0->unknown_ac_, var1) == 0) {
                var0->unknown_88_[0] = 0;
            }
        } else if (strstr(var0->unknown_88_, data_ov023_021fe3b1)) {
            func_ov023_021f5d58(arg0, var0->unknown_ac_, var1);
        } else if (strstr(var0->unknown_88_, data_ov023_021fe3b5)) {
        } else if (strstr(var0->unknown_88_, data_ov023_021fe3ba)) {
            func_ov023_021f5e70(arg0, var0->unknown_ac_, var1);
        } else if (strstr(var0->unknown_88_, data_ov023_021fe3c2)) {
            func_ov023_021f6058(arg0, var0->unknown_ac_, var1);
        }
        arg0 += var0->unknown_ac_;
        if (var3) {
            var0->unknown_ac_ -= 4;
        }
    }
    data_ov023_021fff08.unknown_4_ = 0;
}
