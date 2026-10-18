#include <globaldefs.h>

struct Header_0223bd28;
void ExtractPackedHiLo_0223bd28(Header_0223bd28*, int, unsigned int*, unsigned int*);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223e2b8(void*, int);
extern "C" void func_ov031_0223701c(void*);

struct Mid_02236f88 { void* items[5]; int f14; };
// The pointer block at 0x02290d04..0x02290d13 (data_ov031_02290d04/d08/d0c/d10).
struct Base_02236f88 { void* field0; Mid_02236f88* p; void* field8; void* fieldC; };
extern Base_02236f88 data_ov031_02290d04;

// USA: func_ov031_02236f88
extern "C" ARM void func_ov031_02236f88(void* obj) {
	unsigned int outHi, outLo;
	ExtractPackedHiLo_0223bd28((Header_0223bd28*)data_ov031_02290d04.p->items[4], 0, &outHi, &outLo);
	outHi = outHi - 8;
	if ((int)outHi > 0x98) {
		func_ov031_0223bbd8(data_ov031_02290d04.p->items[4], -1, outHi, 0x21);
		return;
	}
	outHi = 0x98;
	func_ov031_0223bbd8(data_ov031_02290d04.p->items[4], -1, outHi, 0x21);
	func_ov031_0223e2b8(obj, (int)func_ov031_0223701c);
}
