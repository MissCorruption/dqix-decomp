#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021bd5d0(void);

struct Obj020397cc;
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);

// USA: func_ov001_021609a0
extern "C" ARM int func_ov001_021609a0(void) {
	func_ov017_021bd5d0();
	GameState* bs = GameState::GetInstance();
	struct Obj020397cc* obj = (struct Obj020397cc*)bs->GetUnknownGameObject();
	func_020397cc(obj, 1);
	return 1;
}
