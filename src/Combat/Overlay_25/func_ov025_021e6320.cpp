#include <globaldefs.h>

extern "C" void func_0205ebc0(void* obj, int arg1, int arg2);

extern char data_02108760;

struct Param021e6320 { char pad[8]; unsigned short field_8; unsigned short field_a; };

// USA: func_ov025_021e6320
extern "C" ARM int func_ov025_021e6320(struct Param021e6320* p) {
    func_0205ebc0(&data_02108760, p->field_8, p->field_a);
    return 1;
}
