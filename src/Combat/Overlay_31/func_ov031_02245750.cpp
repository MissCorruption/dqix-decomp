#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Memory.h"
#include "Resource/GameResources.h"

extern const char data_ov031_0224c94e[];

struct Struct_ov031_02291e04_5 {
#if defined(jpn)
	unsigned char unknown_0_[0x2c];
#else
	unsigned char unknown1_0_[0x28];
#endif
	int* unknown_28_;
};
extern Struct_ov031_02291e04_5 data_ov031_02291e04;

struct Struct_ov031_02245750 {
	char unknown_0_[4];
	int unknown_4_;
	int unknown_8_;
	unsigned char unknown_c_[8];
};

// USA: func_ov031_02245750
extern "C" ARM int func_ov031_02245750(void* arg0, Struct_ov031_02245750* arg1) {
#if defined(jpn)
 enum {Enum_ov031_02245750_2888=0x928};
#else
 enum {Enum_ov031_02245750_2888=0xb48};
#endif
	if (strstr((char*)arg1, data_ov031_0224c94e) == NULL) return 0;
	int var0 = 0;
	while (var0 < 0xe) {
		if (data_ov031_02291e04.unknown_28_[var0] == arg1->unknown_4_) break;
		var0++;
	}
	if (var0 == 0xe) return 0;
	char* var1 = (char*)GetGameResources();
	char* var2 = var1 + 0x3000;
	unsigned char* var3 = *(unsigned char**)(var2 + Enum_ov031_02245750_2888);
	var3[0x28] = (unsigned char)var0;
	var3[0x29] = (unsigned char)arg1->unknown_8_;
	VectorizedInvertedMemcpy(arg1->unknown_c_, var3 + 0x2a, 8);
	return 1;
}
