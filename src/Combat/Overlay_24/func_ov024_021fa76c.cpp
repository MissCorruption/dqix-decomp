#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);

extern "C" int func_ov024_021e6798(GameObject* arg0);

struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);

extern "C" int func_020882f8(unsigned char* arg0);

struct Struct_ov024_021da670_8;
extern "C" int func_ov024_021da9c8(struct Struct_ov024_021da670_8* arg0);

struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);

struct Struct_021fa76c {
    char unknown_0_[0x138];
    unsigned char* unknown_138_;
};

// USA: func_ov024_021fa76c
extern "C" ARM int func_ov024_021fa76c(struct Struct_021fa76c* arg0) {
    if (func_02010088((struct Struct_02010088*)arg0)) return 0;
    if (func_ov024_021e6798((GameObject*)arg0)) return 0;
    if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)arg0)) return 0;
    if (func_020882f8(arg0->unknown_138_)) return 0;
    if (func_ov024_021da9c8((struct Struct_ov024_021da670_8*)arg0)) return 0;
    return !func_ov024_021de25c((struct Struct_ov024_021de124*)arg0);
}
