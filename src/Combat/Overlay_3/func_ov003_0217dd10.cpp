#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#if defined(jpn)
enum { kRegioncc = 0xc8 };
#else
enum { kRegioncc = 0xcc };
#endif

extern "C" int func_020421a0();
struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);

// USA: func_ov003_0217dd10
extern "C" ARM void func_ov003_0217dd10(char* obj, int key) {
    MessageSystem* window = (MessageSystem*)func_020421a0();
    const char* text = (const char*)func_020e0434((struct Container020e0310*)(obj + kRegioncc), (short)key);
#if defined(jpn)
    func_0204500c(window, text, 0);
#else
    func_0204500c(window, text, 0, 0xe3);
#endif
    window->b19b2 = 1;
    window->state = 2;
}
