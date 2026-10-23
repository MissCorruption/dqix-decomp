#include <globaldefs.h>
#include "Filesystem/FileIO.h"

struct Struct_02020aec {
    char unknown_0_;
    char unknown_1_[0x3f];
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
};

extern "C" int func_0204684c(struct Struct_02020aec* arg0, const char* arg1, void** arg2, int arg3, int* arg4, void** arg5);

// USA: func_ov023_021fad20
extern "C" ARM int func_ov023_021fad20(const void* arg0, const char* arg1, const void** arg2, unsigned int* arg3) {
    if (FindFilesInNarcBySubstring(arg0, arg1, arg2, arg3, 1) != 0) {
        return 1;
    }
    return func_0204684c((struct Struct_02020aec*)arg0, arg1, (void**)arg2, 1, (int*)arg3, NULL) != 0;
}
