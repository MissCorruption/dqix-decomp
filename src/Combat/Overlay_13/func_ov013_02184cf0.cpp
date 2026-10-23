#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02155480 func_ov006_02156b68
#define data_ov011_021889a0 data_ov011_02189700
#define data_ov013_02187dd8 data_ov013_02188cf0
#define func_ov006_02154fe4 func_ov006_02156730
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

// USA: func_ov013_02184cf0
extern "C" ARM void func_ov013_02184cf0(void* arg0, SafeAllocator* arg1) {
    if (arg1 == 0) return;

    if (*(unsigned char*)((char*)arg0 + R(0x5cc,0x640)) != 0) {
        void* var0 = arg1->Allocate(0xc00);
        ((SafeAllocator*)((char*)arg0 + R(0x598,0x60c)))->CreateTypeA(var0, 0xc00);
        return;
    }

    unsigned int var1 = arg1->GetMaxPossibleAllocation();
    void* var2 = arg1->Allocate(var1);
    ((SafeAllocator*)arg0)->CreateTypeA(var2, var1);
    ((SafeAllocator*)arg0)->Reset();
    void* var3 = ((SafeAllocator*)arg0)->Allocate(0xc00);
    ((SafeAllocator*)((char*)arg0 + R(0x598,0x60c)))->CreateTypeA(var3, 0xc00);
}
