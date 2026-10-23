#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define data_020ef6d0 data_020ef5c0
#define data_020ef6d3 data_020ef5c3
#endif

extern char data_020ef6d0;
extern char data_020ef6ca;
extern char data_020ef6d3;

struct Struct_020265a8 {
    char unknown_0_[0x5fc];
#if defined(jpn)
    char unknown_5fc_[3][0x24];
#else
    char unknown_5fc_[3][0x48];
#endif
    char unknown_6d4_[3][8];
};

extern "C" ARM void func_020265a8(char* arg0, int arg1, const char* arg2, int arg3) {
    Struct_020265a8* var0 = reinterpret_cast<Struct_020265a8*>(arg0);
    if (static_cast<unsigned int>(arg1) >= 3) return;
    if (arg2 != NULL && *arg2 != 0) {
        strcpy(var0->unknown_5fc_[arg1], arg2);
        sprintf(var0->unknown_6d4_[arg1], &data_020ef6d0, arg3);
    } else {
        strcpy(var0->unknown_5fc_[arg1], &data_020ef6ca);
        strcpy(var0->unknown_6d4_[arg1], &data_020ef6d3);
    }
}
