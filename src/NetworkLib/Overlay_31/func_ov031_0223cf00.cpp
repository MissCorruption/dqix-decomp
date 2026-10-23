#include <globaldefs.h>
#include "NitroSDK/Memory/HPXEAllocator.h"
#include "NitroSDK/Interrupts.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern HPXEAllocator* data_ov031_02290d3c;

// USA: func_ov031_0223cf00
extern "C" ARM void* func_ov031_0223cf00(unsigned int len, int align) {
	void* p;
	unsigned int irq;
	irq = DisableSpecificInterrupts(1);
	p = data_ov031_02290d3c->Allocate(len, align);
	if (p == NULL) {
		func_020c9be0();
	}
	EnableSpecificInterrupts(irq);
	return p;
}
