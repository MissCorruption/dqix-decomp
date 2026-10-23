#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_ov031_022033e8(void);
extern "C" void func_ov031_02203424(void);
extern "C" void func_ov031_02203250(void);
extern "C" void func_ov031_02203178(void);
extern "C" int func_ov031_022051a8(void* arg0, void* arg1);
unsigned int DisableIRQInterrupts(void);
void SetIRQInterruptState(int mask);
struct Struct_ov031_0224e22c;
extern "C" void* func_ov031_02207108(Struct_ov031_0224e22c* arg0);
struct Struct_ov031_022069d0;
extern "C" void func_ov031_022070f0(Struct_ov031_022069d0* arg0);

// USA: func_ov031_022069d0
extern "C" ARM int func_ov031_022069d0(void* arg0) {
	char* var0 = *(char**)((char*)arg0 + 4);
	signed char var1 = *(signed char*)(var0 + 0x73);
	int var2 = 1;
	if (var1 != 0 && var1 != 4) var2 = 0;
	if (var2 != 0) {
		AwaitContextCompletion((ProcessorContext*)(*(char**)(var0 + 0x68) + 0x20));
		func_ov031_022033e8();
		func_ov031_02203424();
		func_ov031_02203250();
	}
	func_ov031_02203178();
	short var3 = *(short*)(var0 + 0x70);
	var3 &= ~6;
	*(short*)(var0 + 0x70) = var3;
	void* var4 = (*(signed char*)(var0 + 0x73) == 2) ? *(void**)(var0 + 0x68) : *(void**)(var0 + 0x64);
	func_ov031_022051a8(var4, 0);
	int var5 = DisableIRQInterrupts();
	func_ov031_02207108((Struct_ov031_0224e22c*)var0);
	func_ov031_022070f0((Struct_ov031_022069d0*)var0);
	SetIRQInterruptState(var5);
	*(short*)(var0 + 0x70) = *(short*)(var0 + 0x70) | 0x20;
	return 0;
}
