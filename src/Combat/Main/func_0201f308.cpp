#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_0201f308 {
    char unknown_0_[0x18];
    char* unknown_18_[8];
    unsigned char unknown_38_;
};

// USA: func_0201f308
extern "C" ARM void func_0201f308(struct Struct_0201f308* arg0, char* arg1, SafeAllocator* arg2) {
    arg0->unknown_18_[arg0->unknown_38_] = (char*)arg2->Allocate(strlen(arg1) + 1);
    if (arg0->unknown_18_[arg0->unknown_38_] != NULL) {
        strcpy(arg0->unknown_18_[arg0->unknown_38_], arg1);
        arg0->unknown_38_++;
    }
}
