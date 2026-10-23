#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021d246c_15116 = 0x38ec };
#else
enum { Enum_ov017_021d246c_15116 = 0x3b0c };
#endif

#include "GameState/GameState.h"

// USA: func_ov017_021d246c
extern "C" ARM void func_ov017_021d246c(int arg0, char* arg1, GameState* arg2, char* arg3) {
	GameObject* var0 = arg2->GetUnknownGameObject();
	int* var1 = *(int**)((char*)var0 + 0x130);
	if (*var1 & 1) {
		int* var2 = *(int**)(arg3 + Enum_ov017_021d246c_15116);
		if (var2 != 0) {
			*(int*)((char*)var2 + 0x60) = *(int*)(arg1 + 4);
		}
	}
}
