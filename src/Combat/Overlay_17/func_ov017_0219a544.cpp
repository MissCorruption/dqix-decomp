#if defined(jpn)
enum { RegionOffset4084 = 0x3e64, RegionLabelExtra = 10 };
#else
enum { RegionOffset4084 = 0x4084, RegionLabelExtra = 0 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02041f70(char* buf, int a, int b);
extern "C" int func_02041a28(char* dst, int x);
struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02039730(void* unused, int index);
extern "C" int func_02042084(char* buffer, char* label, int width, int extra);

struct Table_0219a544 { int values[5]; };
extern struct Table_0219a544 data_ov017_021d6470;
extern int data_ov017_021d6460[4];

// USA: func_ov017_0219a544
extern "C" ARM void func_ov017_0219a544(unsigned char* a, char* buf, int type, int value) {
	if (!buf) return;
	if (type == 3 && value > 0) {
		func_02041f70(buf, 3, 2);
	}
	int resultByte = value;
	if (type == 3 && value <= 0) {
		struct Table_0219a544 local = data_ov017_021d6470;
		GameObject* combatant;
		int idx = 0;
		GameState* battle = GameState::GetInstance();
		combatant = battle->GetProtagonist();
		while (((volatile int*)local.values)[idx] != 7) {
			resultByte = (signed char)func_02039730(combatant, ((volatile int*)local.values)[idx]);
			if (resultByte > 0) break;
			idx = (idx + 1) & 0xff;
		}
	}
	int key = (resultByte < 0) ? 0 : resultByte;
	struct Container020e0310* container = *(struct Container020e0310**)(a + RegionOffset4084);
	int fieldResult = func_020e0434(container, key);
	if (!fieldResult) return;
	func_02041a28(buf, 0);
	int width = data_ov017_021d6460[type];
	func_02042084(buf, (char*)fieldResult, width, RegionLabelExtra);
}
