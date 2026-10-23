#include <globaldefs.h>

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c508(void* arg0);

// USA: func_ov017_021a01bc
extern "C" ARM void func_ov017_021a01bc(unsigned char* arg0) {
	int* var0 = func_0202ae18();
	if (!func_0202b7d8(var0)) return;
	if (func_0202c508(var0) == 0) {
		arg0[
#if defined(jpn)
            0x40c9
#else
            0x42e9
#endif
        ] = 1;
	}
}
