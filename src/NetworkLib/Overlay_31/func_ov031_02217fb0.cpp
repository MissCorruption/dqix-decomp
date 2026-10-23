#include <globaldefs.h>
#include <std_library_functions.h>
#include "NitroSDK/Mutex.h"

struct Struct_ov031_02217fb0_3 {
    char* unknown_0_;
    char* unknown_4_;
    unsigned char unknown_8_[8];
    Mutex unknown_10_;
};
struct Struct_ov031_02217fb0 {
    unsigned char unknown_0_[0xa08];
    Struct_ov031_02217fb0_3 unknown_a08_;
    int unknown_a30_;
    int unknown_a34_;
};
struct Struct_ov031_02217fb0_2 {
    unsigned char unknown_0_[0x1000];
    Struct_ov031_02217fb0 unknown_1000_;
};
extern char data_ov031_02249df8[];
extern char data_ov031_02249e14[];
extern char data_ov031_02249e28[];
extern "C" int func_02005a94(signed char*);

// USA: func_ov031_02217fb0
extern "C" ARM int func_ov031_02217fb0(Struct_ov031_02217fb0_2* arg0) {
    char* var0 = arg0->unknown_1000_.unknown_a08_.unknown_0_;
    Struct_ov031_02217fb0_3* var1 = &arg0->unknown_1000_.unknown_a08_;
    if (strstr(var0, data_ov031_02249df8) == 0) return 0;
    char* var2 = strstr(var0, data_ov031_02249df8) + 4;
    LockMutex(&arg0->unknown_1000_.unknown_a08_.unknown_10_);
    arg0->unknown_1000_.unknown_a34_ = var1->unknown_4_ - var2;
    UnlockMutex(&arg0->unknown_1000_.unknown_a08_.unknown_10_);
    char* var3 = strstr(var1->unknown_0_, data_ov031_02249e14);
    if (var3 == 0) return 1;
    int var4 = strlen(data_ov031_02249e14);
    char* var5 = strstr(var3 + var4, data_ov031_02249e28);
    signed char var6 = *var5;
    *var5 = 0;
    LockMutex(&arg0->unknown_1000_.unknown_a08_.unknown_10_);
    arg0->unknown_1000_.unknown_a30_ = func_02005a94((signed char*)(var3 + var4));
    UnlockMutex(&arg0->unknown_1000_.unknown_a08_.unknown_10_);
    *var5 = var6;
    return 1;
}
