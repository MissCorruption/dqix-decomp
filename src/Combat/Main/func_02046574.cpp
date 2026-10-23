#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "std_library_functions.h"

struct Struct_02046574 { char unknown_0_[0x40]; };

struct Struct_02046574_2 {
    char unknown_0_[IS_JPN ? 0x37c : 0x4ac];
    struct Struct_02046574 unknown_4ac_[16];
};

// USA: func_02046574
extern "C" ARM void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2) {
    if (arg2 == NULL) return;
    if (arg1 < 0) return;
    if (arg1 >= 0x10) return;
    strncpy(arg0->unknown_4ac_[arg1].unknown_0_, arg2, 0x3f);
    arg0->unknown_4ac_[arg1].unknown_0_[0x3f] = 0;
}
