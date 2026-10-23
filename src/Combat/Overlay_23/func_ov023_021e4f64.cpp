#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern unsigned int data_ov023_021fd6d4[10];

// USA: func_ov023_021e4f64
extern "C" ARM void func_ov023_021e4f64(void* arg0, SafeAllocator* arg1) {
    for (int var0 = 0; var0 < 10; var0++) {
        unsigned int var1 = data_ov023_021fd6d4[var0];
        void* var2 = arg1->Allocate(var1);
        ((SafeAllocator*)((char*)arg0 + 0x6b8 + var0 * 0x14))->CreateTypeA(var2, var1);
    }
    void* var3 = arg1->Allocate(0x1000);
    ((SafeAllocator*)((char*)arg0 + 0x780))->CreateTypeA(var3, 0x1000);
}
