#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned int arg1, unsigned int arg2);
extern "C" int func_ov031_02214fc8(void* arg0, int arg1);
extern "C" int func_ov031_022151b0(void*, void*, int, int);

extern int data_ov031_02245fb0;
extern int data_ov031_02245fb8;

// USA: func_ov031_02214c94
extern "C" ARM int func_ov031_02214c94(char* arg0) {
	unsigned long long var0 = GetCurrentTimestamp() - *(unsigned long long*)(arg0 + 0xcb0);
	unsigned long long var1 = _ll_udiv(var0 << 6, 0x82ea, 0);
	if (var1 < 300) goto ret3;

	*(signed char*)(arg0 + 0xd11) = *(signed char*)(arg0 + 0xd11) + 2;
	if (*(signed char*)(arg0 + 0xd11) >= 13) {
		return func_ov031_02214fc8(arg0, 3);
	}

	*(unsigned long long*)(arg0 + 0xcb0) = GetCurrentTimestamp();
	func_ov031_022151b0(&data_ov031_02245fb0, &data_ov031_02245fb8, *(signed char*)(arg0 + 0xd11), 0x200000);
ret3:
	return 3;
}
