#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
enum { kManagerPrefix = 0x34fc };
#else
enum { kManagerPrefix = 0x370c };
#endif
struct Obj020a88e8 { unsigned char pad0, key1, key2, pad3, pad4, increase, pad6, instant, key3, key4; };
struct Entry02019508 { unsigned short id, flags; signed char level:7; signed char other:1; };
struct Base02019508;
struct Trigger020a88e8 { char pad[3]; unsigned char instant; };
struct Manager020a88e8 { char pad[kManagerPrefix]; Trigger020a88e8* trigger; };
extern "C" Base02019508* func_02012fe4();
extern "C" Entry02019508* func_02019508(Base02019508*, int, int);
extern "C" void func_020133b4(void*, int);
// USA: func_020a88e8
extern "C" ARM void func_020a88e8(Obj020a88e8* self) {
    Base02019508* base = func_02012fe4();
    Entry02019508* first = func_02019508(base, self->key1, self->key2);
    Entry02019508* second = func_02019508(base, self->key3, self->key4);
    if (!first || !second) return;
    func_020133b4(first, 1);
    Trigger020a88e8* trigger = ((Manager020a88e8*)GetGameResources())->trigger;
    if (self->increase) {
        unsigned char value = first->level;
        if (self->instant || trigger->instant) { self->instant = 0; value = 31; }
        else { value+=2; if (value > 31) value = 31; }
        first->level = (signed char)value;
    } else {
        if (self->instant || trigger->instant) { first->level = 0; self->instant = 0; }
        else if (first->level < 2) first->level = 0;
        else first->level = (signed char)(first->level-2);
    }
    if (first->level >= 10) second->flags|=4;
    else second->flags&=~4;
}
