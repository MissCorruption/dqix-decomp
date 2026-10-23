#include <globaldefs.h>
#if defined(jpn)
enum { kRegion89c = 0x818 };
#else
enum { kRegion89c = 0x89c };
#endif

extern "C" int func_02080b40(void* obj, int id);
extern "C" int func_02080b2c(void* obj, int id);
extern "C" void func_0208103c(void* obj, int id, int value);
extern "C" void func_02080798(void* obj, int id, int value);

struct Arg1_0217818c {
	char pad0[8];
	unsigned int lo12 : 12;
	unsigned int type2 : 2;
	unsigned int hi18 : 18;
};

// USA: func_ov003_0217818c
extern "C" ARM void func_ov003_0217818c(char* self, struct Arg1_0217818c* arg1, int id, int value) {
	void* obj89c = *(void**)(self + kRegion89c);
	unsigned char flag = 1;
	if (arg1 != 0) {
		if (arg1->type2 == 0) {
			flag = 0;
		}
		flag &= 0xff;
	}
	if (flag) {
		func_02080b40(obj89c, id);
		func_0208103c(obj89c, value, 0x48);
#if !defined(jpn)
#if !defined(jpn)
		func_02080798(obj89c, value, 1);
#endif
#endif
	} else {
		func_02080b2c(obj89c, id);
		func_0208103c(obj89c, value, 0x46);
#if !defined(jpn)
#if !defined(jpn)
		func_02080798(obj89c, value, 1);
#endif
#endif
	}
}
