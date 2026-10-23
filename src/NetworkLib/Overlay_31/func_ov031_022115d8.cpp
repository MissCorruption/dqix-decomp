#include <globaldefs.h>

extern "C" long long func_ov031_02212d20(void);
extern "C" void func_ov031_02211754(struct Struct_ov031_022114fc_2* arg0);
extern "C" void func_ov031_02211678(void* arg0, int arg1, int arg2);

struct Struct_ov031_022114fc_2;

// USA: func_ov031_022115d8
extern "C" ARM void func_ov031_022115d8(void* arg0, int arg1) {
	long long var0 = func_ov031_02212d20();
	func_ov031_02211678((char*)arg0 + 0x10, (int)var0, (int)(var0 >> 32));
	*(int*)((char*)arg0 + 0x1c) = arg1;
	func_ov031_02211754((struct Struct_ov031_022114fc_2*)arg0);
}
