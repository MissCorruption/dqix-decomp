#include <globaldefs.h>

struct Obj_02184374;
extern "C" void func_ov011_02184374(Obj_02184374* obj);

struct Foo0207df50;
extern "C" void func_0207df50(Foo0207df50* p);

struct State0207dfc8;
extern "C" void func_0207dfc8(State0207dfc8* src, State0207dfc8* dst);

// USA: func_ov011_02184640
extern "C" ARM void func_ov011_02184640(char* obj, char* arg) {
    func_ov011_02184374((Obj_02184374*)(obj + 0x20));
    func_0207df50((Foo0207df50*)arg);
    func_0207dfc8((State0207dfc8*)arg, (State0207dfc8*)(obj + 0x24));
}
