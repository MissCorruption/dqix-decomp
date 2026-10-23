#include <globaldefs.h>

extern "C" void func_ov028_021d9188(void* arg0);
extern "C" void func_0208be90(void*);
extern "C" int func_020a18f4(unsigned int arg0);
extern "C" void func_ov001_0215686c(int arg0);

// USA: func_ov017_021bb8f0
extern "C" ARM void func_ov017_021bb8f0(char* arg0) {
	#if defined(jpn)
    void* var0 = *(void**)(arg0 + 0x15c);
#else
    void* var0 = *(void**)(arg0 + 0x160);
#endif
	if (var0 != NULL) func_ov028_021d9188(var0);
	#if defined(jpn)
    void* var1 = *(void**)(arg0 + 0x11c);
#else
    void* var1 = *(void**)(arg0 + 0x120);
#endif
    if (var1 != NULL) func_0208be90(var1);
	int var2 = func_020a18f4(1);
	if (var2 == 0) return;
	func_ov001_0215686c(var2);
}
