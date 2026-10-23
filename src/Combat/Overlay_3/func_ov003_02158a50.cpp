// USA: func_ov003_02158a50
#include <globaldefs.h>
#include "World/Object3D.h"
#if defined(jpn)
enum { Enum_ov003_02158a50_640 = 0x27c };
enum { Enum_ov003_02158a50_812 = 0x328 };
#else
enum { Enum_ov003_02158a50_640 = 0x280 };
enum { Enum_ov003_02158a50_812 = 0x32c };
#endif

extern unsigned char data_ov003_0217fe16;

extern "C" ARM void func_ov003_02158a50(unsigned char* arg0) {
    ((Object3D*)(arg0 + Enum_ov003_02158a50_640))->MaybeSetRegularAnimation((char const*)&data_ov003_0217fe16, 9);
    ((Object3D*)(arg0 + Enum_ov003_02158a50_640))->DisableFlag(0x40000);
    *(int*)(arg0 + Enum_ov003_02158a50_812) = 1;
}
