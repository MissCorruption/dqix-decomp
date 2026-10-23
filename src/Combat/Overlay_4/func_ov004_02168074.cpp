#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_ov004_02168074 func_ov004_021684bc
#endif

struct Struct_02053f7c;
extern "C" short func_02086aec(struct Struct_02053f7c* arg0, int arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_02168074
extern "C" ARM int func_ov004_02168074(void* arg0) {
	if (func_02086aec((struct Struct_02053f7c*)func_02010828(GameState::GetInstance()), 0x5617) > 0) {
		func_ov011_021848a0(arg0, 0x78);
	} else {
		func_ov011_021848a0(arg0, 0x97);
	}
	return 0;
}
