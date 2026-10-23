#include <globaldefs.h>
#include "Input/Input.h"
#if defined(jpn)
enum { Enum_ov003_02169554_228 = 0xe0 };
#else
enum { Enum_ov003_02169554_228 = 0xe4 };
#endif

extern "C" int func_0205d97c(void*);

// USA: func_ov003_02169554
extern "C" ARM int func_ov003_02169554(void* arg0) {
    int var0 = g_keyManager.TestKeysPressed(2);
    int var1 = func_0205d97c((char*)arg0 + Enum_ov003_02169554_228) == 2;
    return (var0 | var1) != 0;
}
