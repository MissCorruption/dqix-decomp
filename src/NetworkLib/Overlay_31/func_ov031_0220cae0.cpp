#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int state);
extern "C" int func_020d4aa8(void);
extern "C" int func_020d3fdc(void);
extern "C" int func_020d472c(void* arg0);
extern "C" int func_020d4e48(int arg0);
extern "C" int func_020d3dcc(int arg0, int arg1);
extern "C" void func_ov031_0220da1c(int);
extern "C" void func_ov031_0220d61c(int, int);
extern "C" void func_ov031_0220dc40(void);
struct Struct_ov031_0220dbc8;
extern "C" void func_ov031_0220dbc8(struct Struct_ov031_0220dbc8* arg0);
extern int data_ov031_0224e53c;

// USA: func_ov031_0220cae0
extern "C" ARM int func_ov031_0220cae0(int arg0, int arg1) {
	unsigned int var0 = DisableIRQInterrupts();
	if (data_ov031_0224e53c == 0) {
		SetIRQInterruptState(var0);
		return 1;
	}
	int var1 = *(int*)((char*)data_ov031_0224e53c + 0x2260);
	switch (var1) {
	case 1:
		func_ov031_0220d61c(arg0, arg1);
		break;
	case 2:
		SetIRQInterruptState(var0);
		return 2;
	case 3:
		SetIRQInterruptState(var0);
		return 0;
	default:
		SetIRQInterruptState(var0);
		return 1;
	}

	int var2 = (unsigned short)(*(int*)((char*)data_ov031_0224e53c + 0x226c));
	int var3 = func_020d3dcc(data_ov031_0224e53c, var2);
	switch (var3) {
	case 3:
		func_ov031_0220da1c(0xb);
		SetIRQInterruptState(var0);
		return 7;
	case 4:
		SetIRQInterruptState(var0);
		return 5;
	case 1:
	case 2:
	case 5:
	case 6:
	default:
		func_ov031_0220da1c(0xb);
		SetIRQInterruptState(var0);
		return 7;
	case 0: {
		int var4 = func_020d4aa8();
		if (var4 == 0) {
			if (func_020d3fdc() != 0) {
				func_ov031_0220da1c(0xb);
				SetIRQInterruptState(var0);
				return 7;
			}
			SetIRQInterruptState(var0);
			return 5;
		}
		if (func_020d472c((void*)func_ov031_0220dbc8) != 0) {
			func_ov031_0220da1c(0xb);
			SetIRQInterruptState(var0);
			return 7;
		}
		int var5 = func_020d4e48((int)func_ov031_0220dc40);
		switch (var5) {
		case 2:
			func_ov031_0220da1c(2);
			*(unsigned short*)((char*)data_ov031_0224e53c + 0x2280) = 1;
			goto ret3;
		case 8:
			func_ov031_0220da1c(0xc);
			SetIRQInterruptState(var0);
			return 1;
		case 3:
		default:
			func_ov031_0220da1c(0xb);
			SetIRQInterruptState(var0);
			return 7;
		}
	ret3:
		SetIRQInterruptState(var0);
		return 3;
	}
	}
}
