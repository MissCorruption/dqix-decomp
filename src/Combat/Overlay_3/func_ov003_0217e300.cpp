#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020421a0(void);
struct Struct_ov003_0217e300;
extern "C" void func_ov003_0217e334(struct Struct_ov003_0217e300* arg0);
struct Struct_0201bdac;
struct Struct_0201bdac_2;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

// USA: func_ov003_0217e300
extern "C" ARM void func_ov003_0217e300(char* arg0) {
    GameState::GetInstance()->GetProtagonist();
    func_020421a0();
#if defined(jpn)
    enum { Enum_ov003_0217e300_14128 = 0x3520, Enum_ov003_0217e300_14076 = 0x34ec };
#else
    enum { Enum_ov003_0217e300_14128 = 0x3730, Enum_ov003_0217e300_14076 = 0x36fc };
#endif
    func_ov003_0217e334(*(struct Struct_ov003_0217e300**)(arg0 + Enum_ov003_0217e300_14128));
    func_020469b4(*(struct Struct_0201bdac_2**)(arg0 + Enum_ov003_0217e300_14076), *(struct Struct_0201bdac**)(arg0 + Enum_ov003_0217e300_14128));
}
