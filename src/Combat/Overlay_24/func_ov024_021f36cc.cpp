#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215eb1c(int battle, short* table, int count, int flag);
extern "C" int func_020882f8(unsigned char* obj);
struct FlagObj_021da9b0;
extern "C" int func_ov024_021da9b0(struct FlagObj_021da9b0* obj);
struct FlagObj_021de25c;
extern "C" int func_ov024_021de25c(struct FlagObj_021de25c* obj);
struct FlagObj_021da9c8;
extern "C" int func_ov024_021da9c8(struct FlagObj_021da9c8* obj);
struct FlagObj_021dd260;
extern "C" int func_ov024_021dd260(struct FlagObj_021dd260* obj);
extern "C" int func_ov024_021ed890(struct Random** rngPtr, int* maxAndFlag, short* table);

struct Buf8_021f36cc { short v[8]; };
extern struct Buf8_021f36cc data_ov024_021fedec;

// USA: func_ov024_021f36cc
extern "C" ARM int func_ov024_021f36cc(int* a0, int selfId, int a2, int* outCount, short* outArray) {
	struct Buf8_021f36cc buf = data_ov024_021fedec;

	int count = func_ov000_0215eb1c(*a0, buf.v, 8, 1);
	if (count <= 0) return 0;

	*outCount = 0;
	for (int i = 0; i < count; i++) {
		if (selfId == buf.v[i]) continue;
		GameObject* member = GetCombatantByID(*a0, buf.v[i]);
		if (!member) continue;
		if (func_020882f8((unsigned char*)member->currentStats_)) continue;
		if (func_ov024_021da9b0((struct FlagObj_021da9b0*)member)) continue;
		if (func_ov024_021de25c((struct FlagObj_021de25c*)member)) continue;
		if (func_ov024_021da9c8((struct FlagObj_021da9c8*)member)) continue;
		if (func_ov024_021dd260((struct FlagObj_021dd260*)member)) continue;
		int idx = *outCount;
		*outCount = idx + 1;
		outArray[idx] = buf.v[i];
	}
	if (*outCount <= 0) return 0;
	func_ov024_021ed890((struct Random**)a0, outCount, outArray);
	return 1;
}
