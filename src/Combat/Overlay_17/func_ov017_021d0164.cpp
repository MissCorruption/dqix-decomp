#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* obj);
struct Slots0208386c;
extern "C" void func_0208386c(struct Slots0208386c* s, int idx);

struct Obj_021d0164 { unsigned char pad0[4]; int id; signed char idx; };

// USA: func_ov017_021d0164
extern "C" ARM void func_ov017_021d0164(int unused, Obj_021d0164* obj, GameState* battleStruct) {
	GameObject* c = func_0200ff1c(battleStruct, obj->id);
	if (c == NULL) return;
	int val = func_02053c6c((unsigned char*)c);
	if (val == 0) return;
	func_0208386c((struct Slots0208386c*)val, obj->idx);
}
