#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

extern "C" void func_020bd99c(void* arg0);

struct Struct_0203a950 { HMRFAllocator* unknown_0_; };

// USA: func_020bd984
extern "C" ARM void func_020bd984(struct Struct_0203a950* arg0) {
    func_020bd99c(arg0);
    arg0->unknown_0_->RemoveFromTree();
}
