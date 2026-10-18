#include "System/Interrupts.h"
#include "System/ProcessorContext.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c7b40
ARM void SleepCurrentContext(unsigned int milliseconds) {
    Alarm alarm;

    ZeroInitializeAlarm(&alarm);
    ProcessorContext *volatile context = *data_021112e0.ppActiveContext;
    int priorState                     = DisableIRQInterrupts();

    context->sleepAlarm = &alarm;

    SetTimeout(&alarm, ((uint64_t)milliseconds * TIMER_TICKS_PER_MILLISECOND) / 64, SleepCompletionProc,
               (ProcessorContext **)&context);
    while (context != NULL) {
        BlockCurrentContext(NULL);
    }

    SetIRQInterruptState(priorState);
}
