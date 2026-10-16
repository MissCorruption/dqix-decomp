#include <globaldefs.h>

extern void InitSessionFields_0220321c(void);
extern void ResetSessionState02203190(void);
extern void ZeroField164_02203250(void);
void UpdateObjFromContext_022031bc(int a, unsigned short b, unsigned int c);
extern "C" void* func_ov031_02204260(int flag);
extern "C" int func_ov031_02204368(int a, int index);

struct Ctx0224c980_02204710 {
	unsigned char pad0[0x20];
	unsigned int field20;
	unsigned char pad20[0x38 - 0x24];
	unsigned int field38;
	unsigned char pad38[0x4c - 0x3c];
	unsigned int field4c;
};
extern "C" Ctx0224c980_02204710 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02204710  (semantic: StartSessionAndDispatch_02204710)
extern "C" ARM int func_ov031_02204710(int* out, int mode) {
	InitSessionFields_0220321c();
	ResetSessionState02203190();

	if (mode == 1) {
		UpdateObjFromContext_022031bc(0x44, 0x43, _ZZ18GetGlobal_02201364vE1s.field20);
	} else {
		UpdateObjFromContext_022031bc(0x44, 0x43, 0x43 - 0x44);
	}

	int result = 0;
	int i = 0;
	do {
		result = func_ov031_02204368((int)func_ov031_02204260(mode), i);
		if (result != 0) break;
		i++;
	} while (i < 4);

	ZeroField164_02203250();

	if (result == 2) {
		*out = _ZZ18GetGlobal_02201364vE1s.field4c >> 1;
		_ZZ18GetGlobal_02201364vE1s.field38 = (_ZZ18GetGlobal_02201364vE1s.field4c + (_ZZ18GetGlobal_02201364vE1s.field4c << 1)) >> 3;
		return 1;
	}

	unsigned int half = _ZZ18GetGlobal_02201364vE1s.field38 >> 1;
	_ZZ18GetGlobal_02201364vE1s.field38 = half;
	*out = half;

	switch (mode) {
	case 1:
		if (half < 0x3c) {
			*out = 1;
			_ZZ18GetGlobal_02201364vE1s.field38 = _ZZ18GetGlobal_02201364vE1s.field4c >> 3;
		}
		break;
	case 2:
		if (half < 0x3c) {
			*out = 1;
		}
		break;
	}

	return 0;
}
