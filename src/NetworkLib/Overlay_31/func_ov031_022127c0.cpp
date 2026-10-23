#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

typedef void (*Type_0201282c_2)(void*, int, int);
struct Struct_ov031_022127c0 { Type_0201282c_2 unknown_0_; };
extern Struct_ov031_022127c0* data_ov031_0224e5c0;

extern "C" void func_020c9be0(void);
extern "C" void func_ov031_02211b08(int arg0, int arg1);

// USA: func_ov031_022127c0
extern "C" ARM void func_ov031_022127c0(void* arg0, int arg1, int arg2) {
	if (arg1 == 0) {
		data_ov031_0224e5c0->unknown_0_(arg0, arg1, arg2);
		return;
	}
	switch (arg1) {
	case 1:
		func_ov031_02211b08(9, 0xffff86e7);
		break;
	case 2:
		func_020c9be0();
		break;
	case 3:
		func_ov031_02211b08(0xf, 0xffff86d4);
		break;
	case 4:
		func_ov031_02211b08(0xe, 0xffff86ca);
		break;
	case 5:
		func_ov031_02211b08(0xe, 0xffff86e8 - arg2);
		break;
	case 6:
		break;
	case 7:
		func_020c9be0();
		break;
	case 8:
		func_ov031_02211b08(9, 0xffff86df);
		break;
	default:
		func_020c9be0();
		break;
	}
	data_ov031_0224e5c0->unknown_0_(arg0, arg1, arg2);
}
