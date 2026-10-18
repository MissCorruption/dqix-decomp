#include <globaldefs.h>

#if defined(jpn)
#define func_020ca458 func_020cbf24
#endif

extern "C" void func_020ca458(unsigned int value, void* dest, int count);
extern char data_020fe9cc;

// USA: func_0202ad30
ARM void ClearBuffer0202ad30() {
    func_020ca458(0, &data_020fe9cc, 0x600);
}
