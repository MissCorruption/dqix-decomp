#if defined(jpn)
#include <globaldefs.h>
#include <std_library_functions.h>
#include "Resource/CharacterCreationUI.h"

extern "C" int func_020e0434(Container020e0310*, int);
extern "C" int func_020d2ff0(const char*);

// JPN: func_ov009_0218b850
extern "C" ARM void func_ov009_0218b850(CharacterCreationUI* self)
{
    const char* placeholder = (const char*)func_020e0434(&self->texts, 0x4272);
    memcpy(self->names[self->sex], placeholder, 11);
    int choice = rand() % 101;
    short key = (self->sex * 1000 + 0x4e20) + choice;
    int length = func_020d2ff0((const char*)func_020e0434(&self->texts, key));
    const char* name = (const char*)func_020e0434(&self->texts, key);
    memcpy(self->names[self->sex], name, length);
    self->nameFlags[self->sex] = length / 2;
}
#endif
