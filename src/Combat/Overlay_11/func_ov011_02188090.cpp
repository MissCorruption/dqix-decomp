#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
struct Struct_ov011_02184c14;
extern "C" void func_ov011_02184c14(struct Struct_ov011_02184c14* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void MapVRAMBanksToSubBG(int v);

struct Struct_ov011_02188904 { int unknown_0_[4]; };
extern struct Struct_ov011_02188904 data_ov011_02188904;

// USA: func_ov011_02188090
extern "C" ARM int func_ov011_02188090(struct Struct_ov011_02184c30* arg0) {
    void* var0 = func_ov017_021b2164();
    func_ov011_02184c14((struct Struct_ov011_02184c14*)var0);
    int var1 = func_ov011_02184c30(arg0);
    struct Struct_ov011_02188904 var2 = data_ov011_02188904;
    MapVRAMBanksToSubBG(var2.unknown_0_[var1]);
    return 1;
}
