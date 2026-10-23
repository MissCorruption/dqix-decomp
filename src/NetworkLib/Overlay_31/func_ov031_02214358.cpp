#include <globaldefs.h>

extern "C" char* func_ov031_022133f8(int);
extern "C" int func_ov031_02214410(void*);

struct Struct_ov031_02214358 { unsigned char unknown_0_[0xb]; unsigned char unknown_b_; };

extern "C" int func_ov031_022143a8(unsigned int arg0);
extern "C" int func_ov031_022143ec(void);
extern "C" int func_ov031_022143f4(struct Struct_ov031_02214358* arg0);
extern "C" void* func_ov031_022134f0(void);

// USA: func_ov031_02214358
extern "C" ARM int func_ov031_02214358(void) {
	char* var0 = func_ov031_022133f8(1);
	int var1 = (int)func_ov031_022134f0();
	if (var1 < 4) return func_ov031_022143a8(var1);
	if (var1 < 5) return func_ov031_022143ec();
	if (var1 == 5) return func_ov031_022143f4((struct Struct_ov031_02214358*)var0);
	return func_ov031_02214410(var0);
}
