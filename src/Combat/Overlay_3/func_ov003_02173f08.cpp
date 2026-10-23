#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);
extern signed char data_ov003_0217fad4[];

// USA: func_ov003_02173f08
extern "C" ARM void func_ov003_02173f08(char* arg0, char* arg1, char* arg2, char* arg3) {
	signed char var0 = (signed char)func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance());
	signed char* var1 = data_ov003_0217fad4;
	while (1) {
		signed char var2 = *var1;
		if (var2 < 0) { var1 = data_ov003_0217fad4; break; }
		if (var2 == var0) break;
		var1++;
	}
	*arg0 = var1[1];
	*arg1 = var1[2];
	*arg2 = var1[3];
	*arg3 = var1[4];
}
