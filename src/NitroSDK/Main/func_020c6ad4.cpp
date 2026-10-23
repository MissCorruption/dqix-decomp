#include <globaldefs.h>

struct Struct_027e0060 { int unknown_0_; int unknown_4_; };
extern Struct_027e0060 data_027e0060;

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c6ad4
ARM void InitializeInterruptContextBlock_020c6ad4(void) {
    data_027e0060.unknown_4_ = 0;
    data_027e0060.unknown_0_ = 0;
}
