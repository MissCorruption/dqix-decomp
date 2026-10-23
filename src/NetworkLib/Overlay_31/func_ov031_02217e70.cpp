#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

void* LockMutex(Mutex*);

struct Struct_ov031_02290f8c;
struct Mutex;
void UnlockMutex(Mutex*);

// USA: func_ov031_02217e70
extern "C" ARM void func_ov031_02217e70(char *arg0) {
	if (*(unsigned char*)(arg0 + 0x1000) != 0xff) return;
	LockMutex((Mutex*)(arg0 + 0x3f8 + 0x1800));
	*(int*)(arg0 + 0x1000 + 0xc10) = 1;
	UnlockMutex((Mutex*)(arg0 + 0x3f8 + 0x1800));
	if (*(int*)(arg0 + 0x1000 + 0xba4) == 0) return;
	AwaitContextCompletion((ProcessorContext*)(arg0 + 0x1800 + 0x338));
}
