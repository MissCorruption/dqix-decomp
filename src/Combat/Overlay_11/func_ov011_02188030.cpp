#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" void func_ov011_02184c00(void* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void MapVRAMBanksToMainBG(int v);

struct Struct_ov011_02188954 { int unknown_0_[17]; };
extern struct Struct_ov011_02188954 data_ov011_02188954;

// USA: func_ov011_02188030
extern "C" ARM int func_ov011_02188030(struct Struct_ov011_02184c30* arg0) {
	func_ov011_02184c00(func_ov017_021b2164());
	int var0 = func_ov011_02184c30(arg0);
	struct Struct_ov011_02188954 var1 = data_ov011_02188954;
	MapVRAMBanksToMainBG(var1.unknown_0_[var0]);
	return 1;
}
