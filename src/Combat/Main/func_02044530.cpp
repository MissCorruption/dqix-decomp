#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02044530_2464 = 0x870, Enum_02044530_6586 = 0x17ea, Enum_02044530_144 = 0x50 };
#else
enum { Enum_02044530_2464 = 0x9a0, Enum_02044530_6586 = 0x19ba, Enum_02044530_144 = 0x90 };
#endif

extern "C" void func_0205c96c(void* arg0, int arg1);

// USA: func_02044530
extern "C" ARM void func_02044530(char* arg0, int arg1) {
    if (*(int*)(arg0 + Enum_02044530_2464) != 6) return;
    if (*(unsigned char*)(arg0 + Enum_02044530_6586) == 0) return;
    func_0205c96c(arg0 + Enum_02044530_144, arg1);
}
