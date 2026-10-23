#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_020534ac_2;
struct Struct_020534ac;

struct Struct_0201f040;
struct Struct_0201f040_2;
struct Struct_02013fb4;
struct Struct_0201f040_3;

extern int data_ov031_02291e04;
extern int data_ov031_0224c8dc;

// USA: func_ov031_02243714
extern "C" ARM int func_ov031_02243714(char* arg0) {
	char var0[0x430];
	int var1, var2;
	int var3 = (int)BackgroundLoader::GetInstance();
	if (!((BackgroundLoader*)(var3))->GetTaskStatus((int)(*(int*)(arg0 + 0x39c))) || !((BackgroundLoader*)(var3))->GetTaskStatus((int)(*(int*)(arg0 + 0x3a0)))) {
		return 3;
	}
	if (((BackgroundLoader*)((struct Struct_020534ac_2*)var3))->GetDetailedTaskStatus((int)(*(int*)(arg0 + 0x39c))) != 2) {
		((BackgroundLoader*)((void*)var3))->RemoveTask((int)(*(int*)(arg0 + 0x39c)));
		return 2;
	}
	if (((BackgroundLoader*)((struct Struct_020534ac_2*)var3))->GetDetailedTaskStatus((int)(*(int*)(arg0 + 0x3a0))) != 2) {
		((BackgroundLoader*)((void*)var3))->RemoveTask((int)(*(int*)(arg0 + 0x3a0)));
		return 2;
	}
	((BackgroundLoader*)((struct Struct_020534ac*)var3))->GetLoadedFileByID((int)(*(int*)(arg0 + 0x39c)), (void**)(&var1), (unsigned int*)(&var2));
	*(int*)(arg0 + 0x388) = var1;
	*(int*)(arg0 + 0x38c) = var2;
	void* var4 = ((SafeAllocator*)arg0)->Allocate(0x38);
#if defined(jpn)
	*(void**)((char*)&data_ov031_02291e04 + 0x2c) = var4;
#else
	*(void**)((char*)&data_ov031_02291e04 + 0x28) = var4;
#endif
	if (var4 == 0) return 2;
	memset(var4, 0, 0x38);
	((BackgroundLoader*)((struct Struct_020534ac*)var3))->GetLoadedFileByID((int)(*(int*)(arg0 + 0x3a0)), (void**)(&var1), (unsigned int*)(&var2));
	((Script*)((struct Struct_0201f040*)var0))->Initialize();
	((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov031_0224c8dc);
	((Script*)((struct Struct_0201f040_2*)var0))->Load((struct Struct_02013fb4*)var1, var2);
	((Script*)((struct Struct_0201f040_3*)var0))->Execute();
	return 1;
}
