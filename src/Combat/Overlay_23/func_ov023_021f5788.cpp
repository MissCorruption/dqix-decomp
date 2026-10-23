#include <globaldefs.h>

#include "GameState/GameState.h"
#include "Resource/Script.h"

struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);

struct Struct_ov023_021fff08_4 { char unknown_0_[0x10]; const char* unknown_10_; };
extern struct Struct_ov023_021fff08_4 data_ov023_021fff08;

// USA: func_ov023_021f5788
extern "C" ARM int func_ov023_021f5788(void* arg0) {
    Script::Parameter* var0 = (Script::Parameter*)arg0;
#if defined(jpn)
    data_ov023_021fff08.unknown_10_ = var0[0].ToString();
#else
    int var1 = var0[0].ToInt();
    int var2 = func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance());
    if (var1 == var2) {
        data_ov023_021fff08.unknown_10_ = var0[1].ToString();
    }
#endif
    return 1;
}
