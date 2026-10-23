#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Interrupts.h"

struct Struct_ov027_021dd218 {
    Struct_ov027_021dd218* unknown_0_;
    unsigned int unknown_4_0_ : 1;
    unsigned int unknown_4_1_ : 31;
    void (*unknown_8_)(Struct_ov027_021dd218*);
    void (*unknown_c_)(Struct_ov027_021dd218*);
};

struct Struct_ov027_021dd218_2 {
    ProcessorContext unknown_0_;
    Struct_ov027_021dd218* volatile unknown_c8_;
    Struct_ov027_021dd218 unknown_cc_;
};

// USA: func_ov027_021dd218
extern "C" ARM void func_ov027_021dd218(Struct_ov027_021dd218_2* arg0) {
    for (;;) {
        Struct_ov027_021dd218* var0 = NULL;
        {
            int var1 = DisableIRQInterrupts();
            while (arg0->unknown_c8_ == NULL) {
                ChangeContextPriority((ProcessorContext*)arg0, 0);
                BlockCurrentContext(NULL);
            }
            var0 = arg0->unknown_c8_;
            arg0->unknown_c8_ = arg0->unknown_c8_->unknown_0_;
            ChangeContextPriority((ProcessorContext*)arg0, var0->unknown_4_1_);
            SetIRQInterruptState(var1);
        }

        if (var0->unknown_8_ != NULL) var0->unknown_8_(var0);

        {
            int var2 = DisableIRQInterrupts();
            void (*var3)(Struct_ov027_021dd218*) = var0->unknown_c_;
            const unsigned int var4 = GetContextPriority((ProcessorContext*)arg0);
            unsigned int var5;
            if (arg0->unknown_c8_ == NULL) {
                var5 = 0;
            } else if (var4 < arg0->unknown_c8_->unknown_4_1_) {
                var5 = arg0->unknown_c8_->unknown_4_1_;
            } else {
                var5 = var4;
            }
            if (var5 != var4) {
                ChangeContextPriority((ProcessorContext*)arg0, var5);
            }

            var0->unknown_0_ = NULL;
            var0->unknown_4_0_ = 0;
            if (var3 != NULL) var3(var0);

            if (var0 == &arg0->unknown_cc_) break;
            SetIRQInterruptState(var2);
        }
    }
    ContextExecutionReturnProc();
}
