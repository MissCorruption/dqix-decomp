#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" int func_0209ca68(char* arg0);
extern "C" void func_0209c530(void* arg0);
extern "C" void* func_02012fe4(void);

extern char data_02109bf4;

// USA: func_ov001_02156b20
extern "C" ARM void func_ov001_02156b20(void*) {
	unsigned int* var0 = (unsigned int*)GetGameResources();
	if (func_0209ca68(&data_02109bf4) == 2) {
		func_0209c530(&data_02109bf4);
	}
	unsigned short var1 = *(unsigned short*)func_02012fe4();
	if (var1 != 0x2710) {
		ClearFlags04((GameResources*)var0, 0x4);
	}
	ClearFlags04((GameResources*)var0, 0x40);
	ClearFlags04((GameResources*)var0, 0x10);
	ClearFlags04((GameResources*)var0, 0x2);
	ClearFlags00((GameResources*)var0, 0x4);
}
