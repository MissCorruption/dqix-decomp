#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215eb1c(int battle, short* table, int count, int flag);
extern "C" int func_020882f8(unsigned char* obj);
struct FlagObj_021de25c;
extern "C" int func_ov024_021de25c(struct FlagObj_021de25c* obj);
extern "C" int func_ov024_021ed890(struct Random** rngPtr, int* maxAndFlag, short* table);

struct Buf8_021f37fc { short v[8]; };
extern struct Buf8_021f37fc data_ov024_021fee0c;

// USA: func_ov024_021f37fc
extern "C" ARM int func_ov024_021f37fc(int* a0, int a1, int a2, int* outCount, short* outArray) {
	struct Buf8_021f37fc buf = data_ov024_021fee0c;

	int count = func_ov000_0215eb1c(*a0, buf.v, 8, 1);
	if (count <= 0) return 0;

	*outCount = 0;
	for (int i = 0; i < count; i++) {
		GameObject* c = GetCombatantByID(*a0, buf.v[i]);
		if (!c) continue;
		if (func_020882f8((unsigned char*)c->currentStats_) || func_ov024_021de25c((struct FlagObj_021de25c*)c)) {
			int idx = *outCount;
			*outCount = idx + 1;
			outArray[idx] = buf.v[i];
		}
	}
	if (*outCount > 0) {
		func_ov024_021ed890((struct Random**)a0, outCount, outArray);
		return 1;
	}
	return 0;
}
