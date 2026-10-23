#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_ov017_021d60f4(void* a);
extern "C" void func_ov017_021d6134(void* param, int val);
extern "C" int func_0206eb98(unsigned char*, int);

// USA: func_ov001_021633ec
extern "C" ARM int func_ov001_021633ec(void* param) {
	unsigned char* base = (unsigned char*)func_0205ec34();
	int id = func_ov017_021d60f4(param);
	int bit = func_0206eb98(base, id);
	if (bit != 0) {
		func_ov017_021d6134((char*)param + 8, 1);
	} else {
		func_ov017_021d6134((char*)param + 8, 0);
	}
	return 1;
}
