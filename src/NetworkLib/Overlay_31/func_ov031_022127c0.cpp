#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

typedef void (*Handler022127c0)(void*, int, int);
struct Obj0224e5c0 { Handler022127c0 fn; };
extern Obj0224e5c0* data_ov031_0224e5c0;

extern "C" void func_020c9be0(void);
extern "C" void func_ov031_02211b08(int a, int b);

// USA: func_ov031_022127c0
extern "C" ARM void func_ov031_022127c0(void* a, int sel, int c) {
	if (sel == 0) {
		data_ov031_0224e5c0->fn(a, sel, c);
		return;
	}
	switch (sel) {
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
		func_ov031_02211b08(0xe, 0xffff86e8 - c);
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
	data_ov031_0224e5c0->fn(a, sel, c);
}
