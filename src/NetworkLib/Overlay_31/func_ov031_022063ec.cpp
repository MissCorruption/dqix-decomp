#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
void SetIRQInterruptState(int state);

struct BlockedContextList;
void BlockCurrentContext(BlockedContextList* p);

struct Struct_ov031_02206368 {
    char unknown_0_[0x100];
    unsigned short unknown_100_;
    char unknown_102_[0x104 - 0x100 - 2];
    char unknown_104_;
};

struct Struct_ov031_02206368_2 {
    char unknown_0_[0x68];
    Struct_ov031_02206368* unknown_68_;
};

extern "C" ARM int func_ov031_022063ec(Struct_ov031_02206368_2* arg0);

// USA: func_ov031_02206368
extern "C" ARM int func_ov031_02206368(Struct_ov031_02206368_2* arg0, int arg1, int arg2, int* arg3, int arg4) {
    Struct_ov031_02206368* var0 = arg0->unknown_68_;
    if (arg2 > arg1) {
        arg2 = arg1;
    }
    unsigned int var1 = DisableIRQInterrupts();
    int var2;
    int var3 = arg4 & 1;
    for (;;) {
        var2 = func_ov031_022063ec(arg0);
        if (var2 >= arg2) {
            *arg3 = var0->unknown_100_;
            if (var2 >= arg1) {
                var2 = arg1;
            }
            break;
        }
        if (!var3) {
            var2 = 0;
            break;
        }
        BlockCurrentContext((BlockedContextList*)&var0->unknown_104_);
    }
    SetIRQInterruptState(var1);
    return var2;
}
