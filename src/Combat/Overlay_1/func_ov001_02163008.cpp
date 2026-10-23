#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct Struct_020a9ea4;
extern "C" void func_020a9ea4(struct Struct_020a9ea4* arg0);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

struct Struct_ov001_021658b8_14 {
	SafeAllocator* unknown_0_;
	char unknown_4_[0x4b4 - 4];
	void* unknown_4b4_;
	void* unknown_4b8_;
};
extern Struct_ov001_021658b8_14 data_ov001_021658b8;

// USA: func_ov001_02163008
extern "C" ARM int func_ov001_02163008(void) {
	SafeAllocator* var0 = data_ov001_021658b8.unknown_0_;
	void* var1 = var0->Allocate(8);
	data_ov001_021658b8.unknown_4b4_ = var1;
	func_020a9ea4((struct Struct_020a9ea4*)var1);
	void* var2 = var0->Allocate(0x8000);
	data_ov001_021658b8.unknown_4b8_ = var2;
	memset(var2, 0, 0x8000);
	void* var3 = func_0205ec34();
	func_0206df6c(var3, (unsigned char*)var3 + 0x8c, 0x1142, 1);
	return 1;
}
