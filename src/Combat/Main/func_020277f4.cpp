#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_020277f4 {
    int unknown_0_;
    char* unknown_4_;
    char unknown_8_[0x1c];
};

struct Struct_020277f4_2 {
    char unknown_0_[0x20];
    Struct_020277f4* unknown_20_;
    int unknown_24_;
    int unknown_28_;
};

// USA: func_020277f4
extern "C" ARM void func_020277f4(Struct_020277f4_2* arg0, int arg1, const char* arg2, void* arg3) {
    if (arg0->unknown_28_ <= arg0->unknown_24_) return;
    arg0->unknown_20_[arg0->unknown_24_].unknown_0_ = arg1;
    char* var0 = (char*)((SafeAllocator*)arg3)->Allocate(strlen(arg2) + 1);
    arg0->unknown_20_[arg0->unknown_24_].unknown_4_ = var0;
    strcpy(arg0->unknown_20_[arg0->unknown_24_].unknown_4_, arg2);
    arg0->unknown_24_ = arg0->unknown_24_ + 1;
}
