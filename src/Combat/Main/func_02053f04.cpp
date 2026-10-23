#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

#if defined(jpn)
enum { Enum_02053f04_348 = 0x150, Enum_02053f04_352 = 0x154, Enum_02053f04_364 = 0x160, Enum_02053f04_1 = 4 };
#else
enum { Enum_02053f04_348 = 0x15c, Enum_02053f04_352 = 0x160, Enum_02053f04_364 = 0x16c, Enum_02053f04_1 = 1 };
#endif

extern "C" void __clear(void* arg0, int arg1);
extern int data_020f0420[];

// USA: func_02053f04
extern "C" ARM void func_02053f04(void* arg0) {
    Vector3i var0;
    __clear(&var0, 0xc);
    *(int*)((char*)arg0 + Enum_02053f04_348) = data_020f0420[Enum_02053f04_1];
    *(Vector3i*)((char*)arg0 + Enum_02053f04_352) = var0;
    *(Vector3i*)((char*)arg0 + Enum_02053f04_364) = var0;
}
