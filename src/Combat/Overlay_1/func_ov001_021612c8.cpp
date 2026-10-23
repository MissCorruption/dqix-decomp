#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d612c(void* arg0);
extern "C" int func_ov017_021d60f4(void* arg0);
extern SafeAllocator* data_ov001_021658b8[8];
extern char data_ov001_02165745;

struct Struct_ov001_021612c8 {
	char unknown_0_[0x28];
	struct Struct_ov001_021612c8* unknown_28_;
};
struct Struct_ov001_021612c8_2 {
	
#if defined(jpn)
    char unknown_0_[0xd0];
#else
    char unknown1_0_[0xd4];
#endif

	struct Struct_ov001_021612c8* unknown_d4_;
};

// USA: func_ov001_021612c8
extern "C" ARM int func_ov001_021612c8(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_021612c8_1844 = 0x524 };
#else
    enum { Enum_ov001_021612c8_1844 = 0x734 };
#endif
	struct Struct_ov001_021612c8* var0;
	struct Struct_ov001_021612c8_2* var1;
	char* var2 = (char*)GetGameResources();
	var1 = *(struct Struct_ov001_021612c8_2**)(var2 + 0x3000 + Enum_ov001_021612c8_1844);
	SafeAllocator* var3 = data_ov001_021658b8[0];
	var0 = (struct Struct_ov001_021612c8*)var3->Allocate(0x30);
	*(unsigned char*)var0 = 0;
	memset((char*)var0 + 0x1, 0, 0x22);
	*(int*)((char*)var0 + 0x24) = -1;
	*(int*)((char*)var0 + 0x28) = 0;
	*(unsigned char*)((char*)var0 + 0x2c) = 0;
	int var4 = func_ov017_021d612c(arg0);
	sprintf((char*)var0 + 0x1, &data_ov001_02165745, var4);
	*(unsigned char*)var0 = (unsigned char)func_ov017_021d60f4((char*)arg0 + 0x8);
	if (var1->unknown_d4_ == 0) {
		var1->unknown_d4_ = var0;
	} else {
		struct Struct_ov001_021612c8* var5 = var1->unknown_d4_;
		while (var5->unknown_28_ != 0) {
			var5 = var5->unknown_28_;
		}
		var5->unknown_28_ = var0;
	}
	return 1;
}
