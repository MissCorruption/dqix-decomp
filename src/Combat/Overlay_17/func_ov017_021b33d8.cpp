#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


// USA: func_ov017_021b33d8
extern "C" ARM void func_ov017_021b33d8(void* arg0) {
	int var0 = (int)BackgroundLoader::GetInstance();
	int var1;
	for (var1 = 0; var1 < 0xe; var1++) {
		int var2 = *(int*)((char*)arg0 + var1 * 4 + 0x10);
		if (var2 >= 0) {
			((BackgroundLoader*)(var0))->RemoveTask((int)(var2));
		}
	}
	*(short*)((char*)arg0 + 8) = -1;
	((unsigned char*)arg0)[0xa] = 0;
	((unsigned char*)arg0)[0xb] = 0;
	int var3;
	for (var3 = 0; var3 < 0xe; var3++) {
		*(int*)((char*)arg0 + var3 * 4 + 0x10) = -1;
	}
}
