#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"


struct Struct_020534ac;


// USA: func_ov012_02185ea8
extern "C" ARM void func_ov012_02185ea8(char *arg0) {
	int var0 = (int)BackgroundLoader::GetInstance();
	int var1 = *(int *)(arg0 + 0x1384);
	int var2;
	((BackgroundLoader*)((Struct_020534ac *)var0))->GetLoadedFileByID((int)(var1), (void**)(&var2), (unsigned int*)((int*)(arg0 + 0x13b8)));
	memcpy(*(void**)(arg0 + 0x13b4), (void*)var2, *(int*)(arg0 + 0x13b8));
	((BackgroundLoader*)(var0))->RemoveTask((int)(*(int *)(arg0 + 0x1384)));
	*(int *)(arg0 + 0x1384) = -1;
}
