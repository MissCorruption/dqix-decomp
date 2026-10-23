#include <globaldefs.h>

struct Struct_ov011_02184374;
extern "C" void func_ov011_02184374(Struct_ov011_02184374* arg0);

struct Struct_0203d028;
extern "C" void func_0207df50(Struct_0203d028* arg0);

struct Struct_02015ef4_5;
extern "C" void func_0207dfc8(Struct_02015ef4_5* arg0, Struct_02015ef4_5* arg1);

// USA: func_ov011_02184640
extern "C" ARM void func_ov011_02184640(char* arg0, char* arg1) {
    func_ov011_02184374((Struct_ov011_02184374*)(arg0 + 0x20));
    func_0207df50((Struct_0203d028*)arg1);
    func_0207dfc8((Struct_02015ef4_5*)arg1, (Struct_02015ef4_5*)(arg0 + 0x24));
}
