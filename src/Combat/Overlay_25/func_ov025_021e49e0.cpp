#include <globaldefs.h>

struct Obj0205eaa0 { char pad_00[0xb4]; short field_b4; };
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

extern struct Obj0205eaa0 data_02108760;

struct Param021e49e0 { char pad[8]; unsigned short field_8; };

// USA: func_ov025_021e49e0
extern "C" ARM int func_ov025_021e49e0(struct Param021e49e0* p) {
    func_0205eaa0(&data_02108760, p->field_8, 0);
    return 1;
}
