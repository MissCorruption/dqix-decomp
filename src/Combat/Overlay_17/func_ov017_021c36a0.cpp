#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" void* func_020e2ff8(void);
extern "C" void* func_020e3580(void);
extern "C" int func_0202b000(void* arg0);
extern "C" void func_ov017_021c37a4(void);
extern "C" void func_0202c778(unsigned char* arg0);
extern "C" int func_0202b800(int* arg0);
extern "C" void func_0205e22c(void* arg0);
struct Struct_020e3004;
extern "C" void func_020e3004(struct Struct_020e3004* arg0);
struct Struct_020e358c;
extern "C" void func_020e358c(struct Struct_020e358c* arg0);
extern "C" void func_ov017_02195748(unsigned char* arg0);
extern "C" void func_02010890(GameState* arg0, int* arg1, int* arg2);
extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void func_0202c360(void* arg0, char* arg1);
extern "C" void func_ov017_021972cc(char* arg0);
extern "C" void func_ov017_02195520(void* arg0);

// USA: func_ov017_021c36a0
extern "C" ARM void func_ov017_021c36a0(void) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = (void*)(int)((int)GetGameResources());
	void* var2 = func_0202ae18();
	GameObject* var3 = var0->GetProtagonist();
	void* var4 = func_0202ae24();
	void* var5 = func_020e2ff8();
	void* var6 = func_020e3580();

	if (func_0202b000(var2) != 0) {
		func_ov017_021c37a4();
		return;
	}

#if !defined(jpn)
	func_0202c778((unsigned char*)var2);
#endif
	func_0202b800((int*)var2);
	func_0205e22c(var4);
	func_020e3004((struct Struct_020e3004*)var5);
	func_020e358c((struct Struct_020e358c*)var6);
	func_ov017_02195748((unsigned char*)var1);

	int var7[4];
	int var8;
	func_02010890(var0, var7, &var8);

	char var9[20];
	__clear(var9, 0x14);

	int var10 = func_020d2ff0(*(char**)((char*)var3 + 0x134));
	if (var10 > 0x14) {
		var10 = 0x14;
	}
	memcpy(var9, *(char**)((char*)var3 + 0x134), var10);
	var9[var10] = 0;
	var9[0x13] = (char)var8;

	func_0202c360(var2, *(char**)((char*)var3 + 0x134));
	func_ov017_021972cc((char*)var1);
	func_ov017_02195520(var1);
}
