#include <globaldefs.h>

extern "C" unsigned long long func_ov031_0221170c(unsigned int* arg0);
extern "C" long long func_ov031_02212d20(void);

// USA: func_ov031_02211608
extern "C" ARM int func_ov031_02211608(void* arg0) {
	unsigned long long var0 = func_ov031_0221170c((unsigned int*)((char*)arg0 + 0x10));
	if (var0 == 0) return 1;
	unsigned long long var1 = (unsigned long long)func_ov031_02212d20();
	return var0 == var1;
}
