#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov003_02173c40_68 = 0x42 };
enum { Enum_ov003_02173c40_196 = 0xc2 };
enum { Enum_ov003_02173c40_202 = 0xc8 };
enum { Enum_ov003_02173c40_203 = 0xc9 };
enum { Enum_ov003_02173c40_204 = 0xca };
enum { Enum_ov003_02173c40_198 = 0xc4 };
enum { Enum_ov003_02173c40_200 = 0xc6 };
enum { Enum_ov003_02173c40_208 = 0xcc };
enum { Enum_ov003_02173c40_212 = 0xd0 };
enum { Enum_ov003_02173c40_213 = 0xd1 };
enum { Enum_ov003_02173c40_216 = 0xd4 };
enum { Enum_ov003_02173c40_236 = 0xe8 };
enum { Enum_ov003_02173c40_237 = 0xe9 };
enum { Enum_ov003_02173c40_238 = 0xea };
enum { Enum_ov003_02173c40_239 = 0xeb };
enum { Enum_ov003_02173c40_240 = 0xf4 };
enum { Enum_ov003_02173c40_244 = 0xf8 };
enum { Enum_ov003_02173c40_266 = 0x118 };
enum { Enum_ov003_02173c40_267 = 0x119 };
enum { Enum_ov003_02173c40_284 = 0x12a };
enum { Enum_ov003_02173c40_285 = 0x12b };
enum { Enum_ov003_02173c40_288 = 0x12c };
enum { Enum_ov003_02173c40_292 = 0x130 };
enum { Enum_ov003_02173c40_296 = 0x134 };
enum { Enum_ov003_02173c40_300 = 0x138 };
enum { Enum_ov003_02173c40_304 = 0x13c };
enum { Enum_ov003_02173c40_388 = 0x190 };
enum { Enum_ov003_02173c40_408 = 0x1a4 };
enum { Enum_ov003_02173c40_428 = 0x1b8 };
enum { Enum_ov003_02173c40_448 = 0x1cc };
enum { Enum_ov003_02173c40_452 = 0x1d0 };
enum { Enum_ov003_02173c40_456 = 0x1d4 };
enum { Enum_ov003_02173c40_464 = 0x1dc };
enum { Enum_ov003_02173c40_472 = 0x1e4 };
enum { Enum_ov003_02173c40_480 = 0x1ec };
enum { Enum_ov003_02173c40_836 = 0x350 };
#else
enum { Enum_ov003_02173c40_68 = 0x44 };
enum { Enum_ov003_02173c40_196 = 0xc4 };
enum { Enum_ov003_02173c40_202 = 0xca };
enum { Enum_ov003_02173c40_203 = 0xcb };
enum { Enum_ov003_02173c40_204 = 0xcc };
enum { Enum_ov003_02173c40_198 = 0xc6 };
enum { Enum_ov003_02173c40_200 = 0xc8 };
enum { Enum_ov003_02173c40_208 = 0xd0 };
enum { Enum_ov003_02173c40_212 = 0xd4 };
enum { Enum_ov003_02173c40_213 = 0xd5 };
enum { Enum_ov003_02173c40_216 = 0xd8 };
enum { Enum_ov003_02173c40_236 = 0xec };
enum { Enum_ov003_02173c40_237 = 0xed };
enum { Enum_ov003_02173c40_238 = 0xee };
enum { Enum_ov003_02173c40_239 = 0xef };
enum { Enum_ov003_02173c40_240 = 0xf0 };
enum { Enum_ov003_02173c40_244 = 0xf4 };
enum { Enum_ov003_02173c40_266 = 0x10a };
enum { Enum_ov003_02173c40_267 = 0x10b };
enum { Enum_ov003_02173c40_284 = 0x11c };
enum { Enum_ov003_02173c40_285 = 0x11d };
enum { Enum_ov003_02173c40_288 = 0x120 };
enum { Enum_ov003_02173c40_292 = 0x124 };
enum { Enum_ov003_02173c40_296 = 0x128 };
enum { Enum_ov003_02173c40_300 = 0x12c };
enum { Enum_ov003_02173c40_304 = 0x130 };
enum { Enum_ov003_02173c40_388 = 0x184 };
enum { Enum_ov003_02173c40_408 = 0x198 };
enum { Enum_ov003_02173c40_428 = 0x1ac };
enum { Enum_ov003_02173c40_448 = 0x1c0 };
enum { Enum_ov003_02173c40_452 = 0x1c4 };
enum { Enum_ov003_02173c40_456 = 0x1c8 };
enum { Enum_ov003_02173c40_464 = 0x1d0 };
enum { Enum_ov003_02173c40_472 = 0x1d8 };
enum { Enum_ov003_02173c40_480 = 0x1e0 };
enum { Enum_ov003_02173c40_836 = 0x344 };
#endif

struct Struct_020a64bc;
extern "C" void func_020a64bc(Struct_020a64bc* arg0);
extern "C" void func_0205a444(char* arg0);
struct Struct_020727d8;
extern "C" void func_020727d8(Struct_020727d8* arg0);
struct Struct_ov003_02173c40;
extern "C" void func_ov003_0217bcb8(Struct_ov003_02173c40* arg0);

// USA: func_ov003_02173c40
extern "C" ARM void func_ov003_02173c40(char* arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
#if defined(jpn)
    VectorizedMemset(arg0 + 2, 0, 0x40);
#else
    *(short*)(arg0 + 2) = -1;
    VectorizedMemset(arg0 + 4, 0, 0x40);
#endif
    VectorizedMemset(arg0 + Enum_ov003_02173c40_68, 0, 0x80);

    arg0[Enum_ov003_02173c40_196] = 0;
    arg0[Enum_ov003_02173c40_202] = 0;
    arg0[Enum_ov003_02173c40_203] = 0;
    arg0[Enum_ov003_02173c40_204] = 0;
    *(short*)(arg0 + Enum_ov003_02173c40_198) = 0;
    *(short*)(arg0 + Enum_ov003_02173c40_200) = 0;
    *(int*)(arg0 + Enum_ov003_02173c40_208) = 0;
    arg0[Enum_ov003_02173c40_212] = 0;
    arg0[Enum_ov003_02173c40_213] = 0;
    func_020a64bc((Struct_020a64bc*)(arg0 + Enum_ov003_02173c40_216));

    arg0[Enum_ov003_02173c40_236] = 0;
    arg0[Enum_ov003_02173c40_237] = 0;
    arg0[Enum_ov003_02173c40_238] = 0;
    arg0[Enum_ov003_02173c40_239] = 0;
#if defined(jpn)
    *(int*)(arg0 + 0xec) = 0;
    *(int*)(arg0 + 0xf0) = 0;
#else
#endif
    *(int*)(arg0 + Enum_ov003_02173c40_240) = -1;
    *(int*)(arg0 + Enum_ov003_02173c40_244) = -1;
#if defined(jpn)
    *(int*)(arg0 + 0x100) = 0;
    *(int*)(arg0 + 0x104) = 0;
#else
#endif
    arg0[Enum_ov003_02173c40_266] = 0;
    arg0[Enum_ov003_02173c40_267] = 0;
    arg0[Enum_ov003_02173c40_284] = 0;
    arg0[Enum_ov003_02173c40_285] = 0;
    *(int*)(arg0 + Enum_ov003_02173c40_288) = 0;
    *(int*)(arg0 + Enum_ov003_02173c40_292) = 0;
    *(int*)(arg0 + Enum_ov003_02173c40_296) = 0;
    *(int*)(arg0 + Enum_ov003_02173c40_300) = 0;
    func_0205a444(arg0 + Enum_ov003_02173c40_304);

    ((SafeAllocator*)(arg0 + Enum_ov003_02173c40_388))->ResetAllocatorPointer();
    ((SafeAllocator*)(arg0 + Enum_ov003_02173c40_408))->ResetAllocatorPointer();
    ((SafeAllocator*)(arg0 + Enum_ov003_02173c40_428))->ResetAllocatorPointer();

    *(int*)(arg0 + Enum_ov003_02173c40_448) = 0;
    *(int*)(arg0 + Enum_ov003_02173c40_452) = 0;
    func_020727d8((Struct_020727d8*)(arg0 + Enum_ov003_02173c40_456));
    func_020727d8((Struct_020727d8*)(arg0 + Enum_ov003_02173c40_464));
    func_020727d8((Struct_020727d8*)(arg0 + Enum_ov003_02173c40_472));

    func_ov003_0217bcb8((Struct_ov003_02173c40*)(arg0 + Enum_ov003_02173c40_480));

    arg0[Enum_ov003_02173c40_836] = 0;
}
