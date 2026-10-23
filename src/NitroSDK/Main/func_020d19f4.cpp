#include <globaldefs.h>
#include <NitroSDK/Interrupts.h>
#include <NitroSDK/Memory.h>
#include <NitroSDK/ProcessorContext.h>

struct Struct_020d19f4;

typedef unsigned long (*Type_020d19f4)(Struct_020d19f4* task);

struct Struct_020d19f4 {
    Type_020d19f4 unknown_0_;
    Type_020d19f4 unknown_4_;
    unsigned long unknown_8_;
    unsigned char* unknown_c_;
    unsigned char* unknown_10_;
    unsigned long unknown_14_;
    unsigned long unknown_18_;
    unsigned char* unknown_1c_;
    unsigned short unknown_20_;
    unsigned char unknown_22_;
    unsigned char unknown_23_[1];
};

struct Struct_020d19f4_2 {
    unsigned char unknown_0_[0xc0];
    Struct_020d19f4* volatile unknown_c0_;
    Struct_020d19f4 unknown_c4_;
};

struct Struct_02112328 {
    Struct_020d19f4_2* unknown_0_;
    Struct_020d19f4 unknown_4_;
};

struct Struct_020d19f4_3 {
    unsigned long unknown_0_[sizeof(Struct_020d19f4) / 4];
};

extern Struct_02112328 data_02112328;

// USA: func_020d19f4
extern "C" ARM void func_020d19f4(void* arg0) {
    Struct_020d19f4_2* const var0 = (Struct_020d19f4_2*)arg0;

    for (;;) {
        Struct_020d19f4 var1;

        VectorizedMemset(&var1, 0, sizeof(Struct_020d19f4));
        {
            int var2 = DisableIRQInterrupts();
            while (!var0->unknown_c0_) {
                BlockCurrentContext(NULL);
            }
            *(Struct_020d19f4_3*)&var1 = *(Struct_020d19f4_3*)var0->unknown_c0_;
            SetIRQInterruptState(var2);
        }

        if (var1.unknown_0_) {
            var1.unknown_8_ = var1.unknown_0_(&var1);
        }

        {
            int var3 = DisableIRQInterrupts();
            Type_020d19f4 var4 = var1.unknown_4_;

            data_02112328.unknown_4_.unknown_22_ = false;
            if (var4) {
                var4(&var1);
            }
            if (data_02112328.unknown_0_ == NULL) {
                break;
            }
            var0->unknown_c0_ = NULL;
            SetIRQInterruptState(var3);
        }
    }

    ContextExecutionReturnProc();
    return;
}
