#include <globaldefs.h>
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov003_0216e200_92 = 0x28 };
#else
enum { Enum_ov003_0216e200_92 = 0x5c };
#endif

extern "C" int func_020421a0(void);
extern "C" void func_ov003_02170898(void* arg0);
extern "C" void func_ov003_02170688(void* arg0);
extern "C" void func_02074af4(void* arg0);
extern "C" void func_020c5588(int arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov003_0216e200
extern "C" ARM void func_ov003_0216e200(char* arg0) {
	if (*(signed char*)(arg0 + 0x2) != 0) return;

	int var0 = func_020421a0();
	*(int*)(arg0 + 0x18) = *(int*)(var0 + Enum_ov003_0216e200_92);
	func_ov003_02170898(arg0);
	func_ov003_02170688(arg0);
	func_02074af4(arg0 + 0x48);

	volatile unsigned int* var1 = (volatile unsigned int*)0x4000000;
	*(int*)(arg0 + 0x5c) = (*var1 & 0x1f00) >> 8;
	*var1 = (*var1 & ~0x1f00) | 0x700;

	*(int*)(arg0 + 0x174) = GetFlags04(GetGameResources());
	func_020c5588(0, 0, 0x7fff, 0, 0);
	*(unsigned char*)(arg0 + 0x1) = 1;
	*(unsigned char*)(arg0 + 0x2) = 0;
	*(int*)(arg0 + 0x16c) = 0;
}
