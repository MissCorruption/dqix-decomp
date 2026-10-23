#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02039df4;
struct Vector3i;

// USA: func_02053ed8
extern "C" ARM void func_02053ed8(void* arg0) {
#if defined(jpn)
    enum { Enum_02053ed8_348 = 0x150 };
#else
    enum { Enum_02053ed8_348 = 0x15c };
#endif
    *(int*)((char*)arg0 + Enum_02053ed8_348) = ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06();
    *(Vector3i*)((int*)((char*)arg0 + Enum_02053ed8_348 + 4)) = *(Vector3i const*)((int*)((char*)arg0 + 0x44));
    *(Vector3i*)((int*)((char*)arg0 + Enum_02053ed8_348 + 0x10)) = *(Vector3i const*)((int*)((char*)arg0 + 0x50));
}
