#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

#if defined(jpn)
enum { Enum_ov003_021669f0_1152 = 0x2a8 };
#else
enum { Enum_ov003_021669f0_1152 = 0x480 };
#endif

extern "C" void* func_02010828(GameState*);
extern "C" int func_ov003_02166a90(char* arg0, int arg1);

struct Struct_02086a04;
extern "C" int func_02086a04(struct Struct_02086a04* arg0, int arg1);

extern "C" void* func_0205ec34(void);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);

// USA: func_ov003_021669f0
extern "C" ARM int func_ov003_021669f0(char* arg0) {
	GameState* var0;
	void* var1;
	int var2;
	GameObject* var3;

	if (*(short*)(arg0 + Enum_ov003_021669f0_1152) < 0) return 1;

	var0 = GameState::GetInstance();
	var1 = func_02010828(var0);
	var2 = func_ov003_02166a90(arg0, *(short*)(arg0 + Enum_ov003_021669f0_1152));
	if (var2 == 0) return 0;
	if (var2 == 1) {
		func_02086a04((struct Struct_02086a04*)var1, (signed char)*(short*)(arg0 + Enum_ov003_021669f0_1152));
		void* var4 = func_0205ec34();
		func_0206df6c(var4, (unsigned char*)var4 + 0x8c, 0x784, 1);
	}

	var3 = var0->GetProtagonist();
	if (var3 != NULL) {
		func_020397cc((struct Struct_02018300_3*)var3, 1);
	}
	return 1;
}
