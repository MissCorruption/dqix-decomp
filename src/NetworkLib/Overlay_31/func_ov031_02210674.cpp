#include <globaldefs.h>

struct Struct_ov031_02210674 { volatile int unknown_0_; };

extern void* data_ov031_0224e588;

extern "C" void func_ov031_022103dc(void* arg0);
extern "C" void func_ov031_02210720(void);
extern "C" void func_ov031_02210780(void);
extern "C" void func_ov031_0221087c(void);
extern "C" void func_ov031_02210988(void);
extern "C" void func_ov031_02210b4c(void);
extern "C" void func_ov031_02210bec(void);
extern "C" void func_ov031_02210e20(void);

// USA: func_ov031_02210674
extern "C" ARM void func_ov031_02210674(void) {
	if (data_ov031_0224e588 == NULL) return;
	func_ov031_022103dc((void*)1);
	Struct_ov031_02210674* var0 = (Struct_ov031_02210674*)data_ov031_0224e588;
	if (var0->unknown_0_ == 0) return;
	do {
		switch (var0->unknown_0_) {
		case 1: func_ov031_02210720(); break;
		case 2: func_ov031_02210780(); break;
		case 3: func_ov031_0221087c(); break;
		case 4: func_ov031_02210988(); break;
		case 5: func_ov031_02210b4c(); break;
		case 6: func_ov031_02210bec(); break;
		case 7: func_ov031_02210e20(); break;
		}
		var0 = (Struct_ov031_02210674*)data_ov031_0224e588;
	} while (var0->unknown_0_ != 0);
}
