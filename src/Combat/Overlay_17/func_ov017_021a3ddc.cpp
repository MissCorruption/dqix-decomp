#include <globaldefs.h>

struct Struct_ov017_021a185c;
extern "C" void func_ov017_021a185c(Struct_ov017_021a185c* arg0);

struct Struct_ov017_021a3ddc;
extern "C" void func_ov017_021b8408(Struct_ov017_021a3ddc* arg0);

struct Struct_ov017_021a3ddc_2;
extern "C" void func_ov017_021b6b44(Struct_ov017_021a3ddc_2* arg0);

extern "C" void func_ov003_0217eedc(int* arg0);

struct Struct_ov017_021a3ddc_3;
extern "C" void func_ov017_021afa9c(Struct_ov017_021a3ddc_3* arg0);

extern "C" void func_ov017_021c0520(void* arg0);
extern "C" void func_ov017_021c1208(void* arg0);

struct Struct_ov003_0217f230;
extern "C" void func_ov003_0217f230(Struct_ov003_0217f230* arg0);

extern "C" void func_ov017_021b1ce4(void*);
extern "C" void func_ov017_021b1fa4(void*);
extern "C" void func_ov017_021b2328(void*);

// USA: func_ov017_021a3ddc
extern "C" ARM void func_ov017_021a3ddc(void* arg0, void* arg1) {
	if (!arg1) return;
	if (*((unsigned char*)arg1 + 1) != 0) return;

	switch (*(signed char*)arg1) {
	case 2:
		func_ov017_021a185c((Struct_ov017_021a185c*)arg1);
		break;
	case 0xa:
		func_ov017_021b8408((Struct_ov017_021a3ddc*)arg1);
		break;
	case 0x17:
		func_ov017_021b6b44((Struct_ov017_021a3ddc_2*)arg1);
		break;
	case 0x18:
		func_ov003_0217eedc((int*)arg1);
		break;
	case 0x26:
		func_ov017_021afa9c((Struct_ov017_021a3ddc_3*)arg1);
		break;
	case 0x28:
		func_ov017_021c0520(arg1);
		break;
	case 0x29:
		func_ov017_021c1208(arg1);
		break;
	case 0x2a:
		func_ov003_0217f230((Struct_ov003_0217f230*)arg1);
		break;
	case 0x2b:
		func_ov017_021b1ce4(arg1);
		break;
	case 0x2c:
		func_ov017_021b1fa4(arg1);
		break;
	case 0x2d:
		func_ov017_021b2328(arg1);
		break;
	}
}
