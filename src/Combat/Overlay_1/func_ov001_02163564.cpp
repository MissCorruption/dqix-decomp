#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* a);
extern "C" void func_ov017_021d6134(void* param, int val);
extern "C" int* func_ov001_0215a818(int* outIdx);
extern "C" void func_0205eb90(void* obj, int a, int b);
struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern int data_02108760;

// USA: func_ov001_02163564
extern "C" ARM int func_ov001_02163564(void* param, int mode) {
	int id = func_ov017_021d60f4(param);
	int outIdx;
	if (mode >= 2) {
		int* slot = func_ov001_0215a818(&outIdx);
		if (slot != NULL) {
			func_0205eb90(&data_02108760, id, (int)slot);
		}
		func_ov017_021d6134((char*)param + 8, outIdx);
	} else {
		func_0205eaa0((struct Obj0205eaa0*)&data_02108760, id, 0);
	}
	return 1;
}
