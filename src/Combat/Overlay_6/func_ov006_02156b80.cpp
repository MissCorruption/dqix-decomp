// KEEP-NAME
// USA: func_ov006_02156b80
#include <globaldefs.h>
#include "Resource/AlchemyPot.h"

extern "C" void func_ov006_021557c0(void*);
extern "C" void func_ov023_021dc488(void*);

extern "C" ARM void func_ov006_02156b80(void* arg0) {
    Struct_ov006_02154614* var0 = (Struct_ov006_02154614*)arg0;
    if (!(var0->unknown_ae2_ & 8)) {
        var0->unknown_238_.AdvanceEffects();
        var0->unknown_2e4_.AdvanceEffects();
        var0->unknown_390_.AdvanceEffects();
        var0->unknown_43c_.SetNormalizedAnimationTime(var0->unknown_2e4_.normalizedAnimationTime_);
    }
    func_ov006_021557c0(var0);
    func_ov023_021dc488(&var0->unknown_ae4_);
}
