#include <globaldefs.h>

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021fd954(void* arg0, int arg1);

// USA: func_ov024_021fc320
extern "C" ARM void func_ov024_021fc320(void* arg0) {
	void* var0 = *(void**)((char*)arg0 + 0x64c);
	unsigned int var1 = *(unsigned int*)((char*)var0 + 0x8);
	unsigned int var2 = (var1 << 0x16) >> 0x1e;
	if (var2 == 1 || *(unsigned char*)((char*)arg0 + 0x6e) == 0) {
		return;
	}
	if (!func_ov024_021fe698(arg0, 0xb)) {
		return;
	}
	func_ov024_021fd954(arg0, 0x17);
}
