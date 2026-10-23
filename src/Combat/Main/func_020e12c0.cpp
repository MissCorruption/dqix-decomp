#include <globaldefs.h>

extern "C" void* GetMainBG0CharacterBase(void);
extern "C" void* GetMainBG1CharacterBase(void);
extern "C" void* GetMainBG2CharacterBase(void);
extern "C" void* GetMainBG3CharacterBase(void);
extern "C" void* GetSubBG0CharacterBase(void);
extern "C" void* GetSubBG1CharacterBase(void);
extern "C" void* GetSubBG2CharacterBase(void);
extern "C" void* GetSubBG3CharacterBase(void);

struct Struct_020e12c0 { char unknown_0_[8]; unsigned char unknown_8_; };

// USA: func_020e12c0
extern "C" ARM void* func_020e12c0(Struct_020e12c0* arg0) {
    void* var0 = 0;
    switch (arg0->unknown_8_) {
    case 1: var0 = GetMainBG0CharacterBase(); break;
    case 2: var0 = GetMainBG1CharacterBase(); break;
    case 3: var0 = GetMainBG2CharacterBase(); break;
    case 4: var0 = GetMainBG3CharacterBase(); break;
    case 5: var0 = (void*)0x6400000; break;
    case 6: var0 = GetSubBG0CharacterBase(); break;
    case 7: var0 = GetSubBG1CharacterBase(); break;
    case 8: var0 = GetSubBG2CharacterBase(); break;
    case 9: var0 = GetSubBG3CharacterBase(); break;
    case 10: var0 = (void*)0x6600000; break;
    }
    return var0;
}
