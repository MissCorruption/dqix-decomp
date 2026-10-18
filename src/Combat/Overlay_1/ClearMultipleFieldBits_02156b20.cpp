#include <globaldefs.h>
#include "Resource/Brightness.h"

int GetState0209ca68(char* obj);
extern "C" void func_0209c530(void* p);
extern "C" void* func_02012fe4(void);

extern char data_02109bf4;

// USA: func_ov001_02156b20
ARM void ClearMultipleFieldBits_02156b20(void*) {
	unsigned int* obj = (unsigned int*)GetGameResources();
	if (GetState0209ca68(&data_02109bf4) == 2) {
		func_0209c530(&data_02109bf4);
	}
	unsigned short v = *(unsigned short*)func_02012fe4();
	if (v != 0x2710) {
		ClearFlags04((GameResources*)obj, 0x4);
	}
	ClearFlags04((GameResources*)obj, 0x40);
	ClearFlags04((GameResources*)obj, 0x10);
	ClearFlags04((GameResources*)obj, 0x2);
	ClearFlags00((GameResources*)obj, 0x4);
}
