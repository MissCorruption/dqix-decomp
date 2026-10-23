#include <globaldefs.h>

struct S_021a185c;
extern "C" void func_ov017_021a185c(S_021a185c* obj);

struct S021b8408;
extern "C" void func_ov017_021b8408(S021b8408* obj);

struct S021b6b44;
extern "C" void func_ov017_021b6b44(S021b6b44* obj);

extern "C" void func_ov003_0217eedc(int* obj);

struct ObjWithField4_021afa9c;
extern "C" void func_ov017_021afa9c(ObjWithField4_021afa9c* obj);

extern "C" void func_ov017_021c0520(void* obj);
extern "C" void func_ov017_021c1208(void* obj);

struct Obj0217f230;
extern "C" void func_ov003_0217f230(Obj0217f230* obj);

extern "C" void func_ov017_021b1ce4(void*);
extern "C" void func_ov017_021b1fa4(void*);
extern "C" void func_ov017_021b2328(void*);

// USA: func_ov017_021a3ddc
extern "C" ARM void func_ov017_021a3ddc(void* unused, void* obj) {
	if (!obj) return;
	if (*((unsigned char*)obj + 1) != 0) return;

	switch (*(signed char*)obj) {
	case 2:
		func_ov017_021a185c((S_021a185c*)obj);
		break;
	case 0xa:
		func_ov017_021b8408((S021b8408*)obj);
		break;
	case 0x17:
		func_ov017_021b6b44((S021b6b44*)obj);
		break;
	case 0x18:
		func_ov003_0217eedc((int*)obj);
		break;
	case 0x26:
		func_ov017_021afa9c((ObjWithField4_021afa9c*)obj);
		break;
	case 0x28:
		func_ov017_021c0520(obj);
		break;
	case 0x29:
		func_ov017_021c1208(obj);
		break;
	case 0x2a:
		func_ov003_0217f230((Obj0217f230*)obj);
		break;
	case 0x2b:
		func_ov017_021b1ce4(obj);
		break;
	case 0x2c:
		func_ov017_021b1fa4(obj);
		break;
	case 0x2d:
		func_ov017_021b2328(obj);
		break;
	}
}
