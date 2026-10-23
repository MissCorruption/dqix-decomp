#include <globaldefs.h>

// USA: func_ov000_0215ffc4
extern "C" ARM void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2) {
	void** var0 = (void**)((char*)arg0 + arg2 * 4);
	while (*var0 != 0) {
		var0 = (void**)((char*)(*var0) + 0x20);
	}
	*var0 = arg1;
	{
		unsigned char* var1 = (unsigned char*)arg0 + 0x18;
		var1[arg2]++;
	}
}
