#include <globaldefs.h>
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov028_021d9940;
extern "C" void func_ov028_021d9940(Struct_ov028_021d9940* arg0, SafeAllocator* arg1, unsigned int arg2);

struct Struct_ov028_021d9bc4 {
    Struct_ov028_021d9940* unknown_0_;
    SafeAllocator* unknown_4_;
};
extern Struct_ov028_021d9bc4 data_ov028_021d9bc4;

// USA: func_ov028_021d97b0
extern "C" ARM int func_ov028_021d97b0(Script::Parameter* arg0, int arg1) {
    func_ov028_021d9940(data_ov028_021d9bc4.unknown_0_, data_ov028_021d9bc4.unknown_4_, (unsigned short)arg0->ToInt());
    return 1;
}
