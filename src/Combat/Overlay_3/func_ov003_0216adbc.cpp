#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216adbc_1444 = 0x5a0 };
enum { Enum_ov003_0216adbc_1248 = 0x4dc };
enum { Enum_ov003_0216adbc_1260 = 0x4e8 };
enum { Enum_ov003_0216adbc_1256 = 0x4e4 };
#else
enum { Enum_ov003_0216adbc_1444 = 0x5a4 };
enum { Enum_ov003_0216adbc_1248 = 0x4e0 };
enum { Enum_ov003_0216adbc_1260 = 0x4ec };
enum { Enum_ov003_0216adbc_1256 = 0x4e8 };
#endif

#include "Filesystem/BackgroundLoader.h"

extern "C" void func_ov003_02168324(void* arg0);

// USA: func_ov003_0216adbc
extern "C" ARM void func_ov003_0216adbc(void* arg0) {
	if (*(unsigned char*)((char*)arg0 + Enum_ov003_0216adbc_1444) != 0) return;
	int var0 = (int)BackgroundLoader::GetInstance();
	((BackgroundLoader*)(var0))->MaybeFreeAllocations();
	((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)((char*)arg0 + Enum_ov003_0216adbc_1248)));
	*(int*)((char*)arg0 + Enum_ov003_0216adbc_1248) = -1;
	func_ov003_02168324(arg0);
	*(unsigned char*)((char*)arg0 + Enum_ov003_0216adbc_1260) = 6;
	*(unsigned char*)((char*)arg0 + Enum_ov003_0216adbc_1256) = 0;
}
