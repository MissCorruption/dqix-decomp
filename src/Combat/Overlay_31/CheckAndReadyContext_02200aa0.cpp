#include <globaldefs.h>
#include "System/ProcessorContext.h"

extern "C" int func_ov031_022008ac(void* a, int b, void* c, void* d, int e, int f);
bool IsContextInactive(ProcessorContext* context);
void MarkContextReadyAndSwitch(ProcessorContext* context);

struct GlobalStruct0224c980_02200aa0 {
	char pad[0x54];
	ProcessorContext* volatile field54;
};

extern "C" GlobalStruct0224c980_02200aa0 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02200aa0  (semantic: CheckAndReadyContext_02200aa0)
#pragma optimize_for_size off
extern "C" ARM void func_ov031_02200aa0(void* a, int b, void* c, void* d) {
	func_ov031_022008ac(a, b, c, d, 0, 0);
	if (_ZZ18GetGlobal_02201364vE1s.field54 == NULL) return;
	if (IsContextInactive(_ZZ18GetGlobal_02201364vE1s.field54)) return;
	MarkContextReadyAndSwitch(_ZZ18GetGlobal_02201364vE1s.field54);
}
