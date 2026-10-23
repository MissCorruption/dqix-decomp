#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern char* data_ov031_0224e60c;
extern "C" void func_ov031_02217e70(char *arg0);
extern "C" void func_ov031_022169a0(void);

// USA: func_ov031_02219178
extern "C" ARM void func_ov031_02219178(void) {
	char *var0 = data_ov031_0224e60c;
	if (var0 == NULL) return;
	char *var1 = *(char**)((char*)&data_ov031_0224e60c + 0x14);
	if (var1 != NULL) {
		func_ov031_02217e70(var1);
	}
	func_ov031_022169a0();
	var0 = data_ov031_0224e60c;
	if (*(int*)(var0 + 0x1000 + 0x188) != 0) {
		AwaitContextCompletion((ProcessorContext*)(var0 + 0x1000 + 0x11c));
	}
	var0 = data_ov031_0224e60c;
	*(int*)(var0 + 0x1000 + 4) = -7;
}
