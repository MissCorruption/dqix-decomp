#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_02218a38_2 { char* unknown_0_; char* unknown_4_; };
struct Struct_ov031_02218a38 { Struct_ov031_02218a38_2* unknown_0_; int unknown_4_; int unknown_8_; };
typedef char* (*Type_ov031_02218a38)(const char*, unsigned int);
typedef void (*Type_ov031_02218a38_2)(const char*, char*, int);
#if defined(jpn)
#define data_ov031_02249f40 data_ov031_0224ab40
#define data_ov031_02249f60 data_ov031_0224ab60
#define data_ov031_02249f80 data_ov031_0224ab80
#define data_ov031_02249f9c data_ov031_0224ab9c
#endif
extern char data_ov031_02249f40[];
extern char data_ov031_02249f60[];
extern char data_ov031_02249f80[];
extern char data_ov031_02249f9c[];

// USA: func_ov031_02218a38
extern "C" ARM int func_ov031_02218a38(void* arg0, Struct_ov031_02218a38* arg1, const char* arg2, const char* arg3) {
    Type_ov031_02218a38 var0 = *(Type_ov031_02218a38*)((char*)arg0 + 0x1010);
    Type_ov031_02218a38_2 var1 = *(Type_ov031_02218a38_2*)((char*)arg0 + 0x1014);
    if (arg1->unknown_8_ > arg1->unknown_4_) return 0;
    arg1->unknown_0_[arg1->unknown_8_].unknown_0_ = var0(data_ov031_02249f40, strlen(arg2) + 1);
    if (arg1->unknown_0_[arg1->unknown_8_].unknown_0_ != NULL) {
        arg1->unknown_0_[arg1->unknown_8_].unknown_4_ = var0(data_ov031_02249f60, strlen(arg3) + 1);
        if (arg1->unknown_0_[arg1->unknown_8_].unknown_4_ != NULL) {
            strcpy(arg1->unknown_0_[arg1->unknown_8_].unknown_0_, arg2);
            strcpy(arg1->unknown_0_[arg1->unknown_8_].unknown_4_, arg3);
            arg1->unknown_8_++;
            return 1;
        }
    }
    if (arg1->unknown_0_[arg1->unknown_8_].unknown_0_ != NULL) {
        var1(data_ov031_02249f80, arg1->unknown_0_[arg1->unknown_8_].unknown_0_, 0);
        arg1->unknown_0_[arg1->unknown_8_].unknown_0_ = NULL;
    }
    Struct_ov031_02218a38_2* var2 = arg1->unknown_0_;
    int var3 = arg1->unknown_8_;
    if (var2[var3].unknown_4_ != NULL) {
        var1(data_ov031_02249f9c, var2[var3].unknown_4_, 0);
        arg1->unknown_0_[arg1->unknown_8_].unknown_4_ = NULL;
    }
    return 0;
}
