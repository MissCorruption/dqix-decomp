#include <globaldefs.h>
#include "Combat/ActorAction.h"

// USA: func_020399a8
extern "C" ARM Struct_02037d10* func_020399a8(void* arg0) {
#if defined(jpn)
    return (Struct_02037d10*)((char*)arg0 + 0x260);
#else
    return (Struct_02037d10*)((char*)arg0 + 0x26c);
#endif
}
