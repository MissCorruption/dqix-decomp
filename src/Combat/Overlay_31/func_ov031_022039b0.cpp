#include <globaldefs.h>

struct Node022039b0 { unsigned char pad0[0x8]; unsigned char type; unsigned char hasExtra; };
struct Global02111304 { unsigned char pad0[0x4]; void* ctx; };

extern Global02111304 data_02111304;
extern "C" unsigned char _ZZ18GetGlobal_02201364vE1s;

extern "C" int func_ov031_02201414(void* obj, int id, Node022039b0* node);
extern "C" int func_ov031_02201364(void* obj, int id, Node022039b0* node);
extern "C" int func_ov031_0220a87c(void* a0, int a1, void* a2, int a3, Node022039b0* n);
extern "C" int func_ov031_022037a8(void* a0, int a1, void* a2, int a3, Node022039b0* n);

// USA: func_ov031_022039b0
#pragma optimize_for_size off
extern "C" ARM int func_ov031_022039b0(void* a0, int a1, void* a2, int a3) {
	Node022039b0* n = *(Node022039b0**)((char*)data_02111304.ctx + 0xa4);
	if (n) {
		int result;
		if (n->type == 0xa) {
			if (a1 != 0) func_ov031_02201414(a0, a1, n);
			if (a3 != 0) func_ov031_02201414(a2, a3, n);
			result = a1 + a3;
		} else if (n->type == 0xb) {
			if (a1 != 0) func_ov031_02201364(a0, a1, n);
			if (a3 != 0) func_ov031_02201364(a2, a3, n);
			result = a1 + a3;
		} else {
			if (n->hasExtra != 0) {
				result = func_ov031_0220a87c(a0, a1, a2, a3, n);
			} else {
				result = func_ov031_022037a8(a0, a1, a2, a3, n);
			}
		}
		if (_ZZ18GetGlobal_02201364vE1s == 0) {
			return result;
		}
	}
	return 0;
}
