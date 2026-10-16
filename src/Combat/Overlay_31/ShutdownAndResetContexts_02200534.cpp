#include <globaldefs.h>
#include "System/ProcessorContext.h"

int MarkContextReadyIfInactive_022004d4(void);
extern "C" void func_ov031_02200160(int);

struct GlobalStruct0224c980_02200534 {
    char pad[0x54];
    int field54;
    int field58;
    int field5c;
};

extern ProcessorContext data_ov031_0224cb28;
extern ProcessorContext data_ov031_0224cbe8;
extern "C" GlobalStruct0224c980_02200534 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02200534  (semantic: ShutdownAndResetContexts_02200534)
extern "C" ARM void func_ov031_02200534(void) {
    MarkContextReadyIfInactive_022004d4();
    AwaitContextCompletion(&data_ov031_0224cb28);
    ShutdownContext(&data_ov031_0224cbe8);
    _ZZ18GetGlobal_02201364vE1s.field54 = 0;
    func_ov031_02200160(0);
    _ZZ18GetGlobal_02201364vE1s.field58 = 0;
    _ZZ18GetGlobal_02201364vE1s.field5c = 0;
}
