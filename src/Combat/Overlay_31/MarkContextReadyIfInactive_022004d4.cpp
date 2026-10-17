#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/ProcessorContext.h"

bool IsContextInactive(ProcessorContext* context);

struct GlobalStruct0224c980_022004d4 {
	char pad[0x44];
	int field44;
};

extern ProcessorContext data_ov031_0224cb28;
extern "C" GlobalStruct0224c980_022004d4 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_022004d4
ARM int MarkContextReadyIfInactive_022004d4(void) {
	int oldIRQ = DisableIRQInterrupts();
	int inactive = IsContextInactive(&data_ov031_0224cb28);
	if (inactive == 0) {
		if (_ZZ18GetGlobal_02201364vE1s.field44 == 0) {
			_ZZ18GetGlobal_02201364vE1s.field44 = 1;
			MarkContextReadyAndSwitch(&data_ov031_0224cb28);
		}
	}
	SetIRQInterruptState(oldIRQ);
	return inactive;
}
