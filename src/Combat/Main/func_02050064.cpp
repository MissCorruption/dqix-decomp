#include <globaldefs.h>

extern "C" void* GetMainBG0CharacterBase(void);
extern "C" void* GetMainBG1CharacterBase(void);
extern "C" void* GetMainBG2CharacterBase(void);
extern "C" void* GetMainBG3CharacterBase(void);
extern "C" void* GetSubBG0CharacterBase(void);
extern "C" void* GetSubBG1CharacterBase(void);
extern "C" void* GetSubBG2CharacterBase(void);
extern "C" void* GetSubBG3CharacterBase(void);

struct Struct_02050064 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 4; unsigned char unknown_1c_4_ : 4; };
struct Struct_02050064_2 { char unknown_0_[4]; Struct_02050064* unknown_4_; };

// USA: func_02050064
extern "C" ARM void* func_02050064(Struct_02050064_2* arg0) {
    void* var0 = 0;
    Struct_02050064* var1 = arg0->unknown_4_;
    if (!var1->unknown_1c_0_) {
        switch (var1->unknown_1c_4_) {
        case 0: var0 = GetMainBG0CharacterBase(); break;
        case 1: var0 = GetMainBG1CharacterBase(); break;
        case 2: var0 = GetMainBG2CharacterBase(); break;
        case 3: var0 = GetMainBG3CharacterBase(); break;
        }
    } else {
        switch (var1->unknown_1c_4_) {
        case 0: var0 = GetSubBG0CharacterBase(); break;
        case 1: var0 = GetSubBG1CharacterBase(); break;
        case 2: var0 = GetSubBG2CharacterBase(); break;
        case 3: var0 = GetSubBG3CharacterBase(); break;
        }
    }
    return var0;
}
