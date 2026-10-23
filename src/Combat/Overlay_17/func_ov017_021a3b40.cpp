#include <globaldefs.h>

extern "C" void func_ov017_021adc30(void* arg0);
extern "C" void func_ov017_021a1880(void* arg0);
extern "C" void func_ov017_021bb930(void* arg0);
extern "C" void func_ov017_021b9904(char* arg0);
extern "C" void func_ov017_021b8438(void* arg0);
extern "C" void func_ov017_021a5934(void*);
extern "C" void func_ov017_021bae80(void* arg0);
extern "C" void func_ov017_021babc8(void* arg0);
extern "C" void func_ov003_0217e580(int* arg0);
extern "C" void func_ov017_021b2f0c(void*);
struct Struct_ov017_021a3b40_2;
extern "C" void func_ov017_021b6b5c(Struct_ov017_021a3b40_2* arg0);
extern "C" void func_ov003_0217eec4(int* arg0);
extern "C" void func_ov017_021aad8c(void* arg0);
extern "C" void func_ov017_021accfc(void*);
struct Struct_ov017_021a3b40_3;
extern "C" void func_ov017_021afa70(Struct_ov017_021a3b40_3* arg0);
extern "C" void func_ov017_021c0538(void* arg0);
extern "C" void func_ov017_021c11f0(void* arg0);
struct Struct_ov003_0217f218;
extern "C" void func_ov003_0217f218(Struct_ov003_0217f218* arg0);
extern "C" void func_ov017_021b1cc4(void*);
extern "C" void func_ov017_021b1fa0(void*);
extern "C" void func_ov017_021b2348(void*);
extern "C" void func_ov017_021c162c(void*);
extern "C" void func_ov017_021c19f8(void* arg0);
extern "C" void func_ov017_021bef48(void*);
extern "C" void func_ov017_021a9248(void* arg0);
struct Struct_ov017_021a3b40;
extern "C" void func_ov017_021a9998(Struct_ov017_021a3b40* arg0);
extern "C" void func_ov017_021a7998(void* arg0);
struct Struct_020dae68;
extern "C" void func_020dae68(Struct_020dae68* arg0);

// USA: func_ov017_021a3b40
extern "C" ARM void func_ov017_021a3b40(void* arg0, void* arg1) {
	if (!arg1) return;
	if (*((unsigned char*)arg1 + 1) != 0) return;

	switch (*(signed char*)arg1) {
	case 1:
		func_ov017_021adc30(arg1);
		break;
	case 2:
		func_ov017_021a1880(arg1);
		break;
	case 5:
		func_ov017_021b9904((char*)arg1);
		break;
	case 0xa:
		func_ov017_021b8438(arg1);
		break;
	case 0xc:
		func_ov017_021a5934(arg1);
		break;
	case 0xf:
		func_ov017_021bae80(arg1);
		break;
	case 0x10:
		func_ov017_021babc8(arg1);
		break;
	case 0x11:
		func_ov003_0217e580((int*)arg1);
		break;
	case 4:
		func_ov017_021bb930(arg1);
		break;
	case 0x12:
		func_ov017_021b2f0c(arg1);
		break;
	case 0x17:
		func_ov017_021b6b5c((Struct_ov017_021a3b40_2*)arg1);
		break;
	case 0x18:
		func_ov003_0217eec4((int*)arg1);
		break;
	case 0x1a:
		func_ov017_021aad8c(arg1);
		break;
	case 0x1f:
		func_ov017_021accfc(arg1);
		break;
	case 0x26:
		func_ov017_021afa70((Struct_ov017_021a3b40_3*)arg1);
		break;
	case 0x28:
		func_ov017_021c0538(arg1);
		break;
	case 0x29:
		func_ov017_021c11f0(arg1);
		break;
	case 0x2a:
		func_ov003_0217f218((Struct_ov003_0217f218*)arg1);
		break;
	case 0x2b:
		func_ov017_021b1cc4(arg1);
		break;
	case 0x2c:
		func_ov017_021b1fa0(arg1);
		break;
	case 0x2d:
		func_ov017_021b2348(arg1);
		break;
	case 0x2e:
		func_ov017_021c162c(arg1);
		break;
	case 0x2f:
		func_ov017_021c19f8(arg1);
		break;
	case 0x34:
		func_ov017_021bef48(arg1);
		break;
	case 0x38:
		func_ov017_021a9248(arg1);
		break;
	case 0x3a:
		func_ov017_021a9998((Struct_ov017_021a3b40*)arg1);
		break;
	case 0x3f:
		func_ov017_021a7998(arg1);
		break;
	case 0x4b:
		func_020dae68((Struct_020dae68*)arg1);
		break;
	}
}
