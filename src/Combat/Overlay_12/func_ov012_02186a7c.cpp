#if defined(jpn)
#define func_ov023_021e6de4 func_ov023_021e7148
#define func_ov012_0218943c func_ov012_02189d18
enum {
    Enum_ov012_02186a7c_4976 = 0x1340,
    Enum_ov012_02186a7c_4977 = 0x1341,
    Enum_ov012_02186a7c_5024 = 0x1368,
    Enum_ov012_02186a7c_172 = 0x90,
    Enum_ov012_02186a7c_356 = 0x148,
    Enum_ov012_02186a7c_5076 = 0x142c,
    Enum_ov012_02186a7c_9 = 7
};
#else
enum {
    Enum_ov012_02186a7c_4976 = 0x1370,
    Enum_ov012_02186a7c_4977 = 0x1371,
    Enum_ov012_02186a7c_5024 = 0x13a0,
    Enum_ov012_02186a7c_172 = 0xac,
    Enum_ov012_02186a7c_356 = 0x164,
    Enum_ov012_02186a7c_5076 = 0x13d4,
    Enum_ov012_02186a7c_9 = 9
};
#endif

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" void* func_0200fb8c(int*);
extern "C" void* func_02094a00();

struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);

struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);

struct Struct_02108760;
extern struct Struct_02108760 data_02108760;
extern "C" int func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);

struct Struct_ov012_02186a7c;
extern "C" int func_ov023_021e6e20(struct Struct_ov012_02186a7c* arg0);

extern "C" void func_ov023_021e6e60(void* arg0);
extern "C" int func_ov023_021e6de4(char* arg0);
extern "C" void func_ov012_0218943c(void* arg0);

// USA: func_ov012_02186a7c
extern "C" ARM void func_ov012_02186a7c(char* arg0) {
	func_0200fb8c((int*)GameState::GetInstance());
	BackgroundLoader::GetInstance();
	func_02094a00();

	unsigned char var0 = *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4976);
	if (var0 == 0) {
		*(unsigned char*)(arg0 + Enum_ov012_02186a7c_5024) = 0;
		*(int*)(arg0 + Enum_ov012_02186a7c_5076) = 0;
		func_0205de24((struct Struct_0205de24_2*)(arg0 + Enum_ov012_02186a7c_172), 0, 2);
		func_ov023_021e6e60(arg0);
		func_ov012_0218943c(arg0);
		(*(unsigned char*)(arg0 + Enum_ov012_02186a7c_4976))++;
		return;
	}
	if (var0 != 1) return;

	*(unsigned char*)(arg0 + Enum_ov012_02186a7c_5024) = 1;
	*(int*)(arg0 + Enum_ov012_02186a7c_5076) = func_0205d794((struct Struct_0205c570*)(arg0 + Enum_ov012_02186a7c_172));

	int var1 = 0;
	if (func_ov023_021e6de4(arg0) != 0) {
		*(unsigned char*)(arg0 + Enum_ov012_02186a7c_356) = *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4977);
		*(unsigned char*)(arg0 + Enum_ov012_02186a7c_5024) = 0;
		func_0205eaa0(&data_02108760, 1, 0);

		int var2 = *(int*)(arg0 + Enum_ov012_02186a7c_5076);
		switch (var2) {
		case 0: *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4977) = 2; *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4976) = var1; break;
		case 1: *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4977) = Enum_ov012_02186a7c_9; *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4976) = var1; break;
		case 2: *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4977) = 0xa; *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4976) = var1; break;
		case 3: *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4977) = 0xd; *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4976) = var1; break;
		case 4: *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4977) = 0xe; *(unsigned char*)(arg0 + Enum_ov012_02186a7c_4976) = var1; break;
		case 5: var1 = 1; break;
		}
	} else {
		if (func_ov023_021e6e20((struct Struct_ov012_02186a7c*)arg0) != 0) var1 = 1;
	}

	if (var1 == 0) return;
	*(unsigned char*)(arg0 + Enum_ov012_02186a7c_5024) = 0;
	*(int*)(arg0 + Enum_ov012_02186a7c_5076) = 0;
	func_0205d6a0((struct Struct_0205d6a0*)(arg0 + Enum_ov012_02186a7c_172), 1);
	*(unsigned char*)(arg0 + Enum_ov012_02186a7c_4977) = 0xf;
	*(unsigned char*)(arg0 + Enum_ov012_02186a7c_4976) = 0;
}
