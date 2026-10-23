#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov003_0217daf0_20 = 0x10 };
enum { Enum_ov003_0217daf0_48 = 0x2c };
enum { Enum_ov003_0217daf0_49 = 0x2d };
enum { Enum_ov003_0217daf0_24 = 0x14 };
enum { Enum_ov003_0217daf0_52 = 0x30 };
enum { Enum_ov003_0217daf0_56 = 0x34 };
enum { Enum_ov003_0217daf0_60 = 0x38 };
enum { Enum_ov003_0217daf0_144 = 0x8c };
enum { Enum_ov003_0217daf0_148 = 0x90 };
enum { Enum_ov003_0217daf0_152 = 0x94 };
enum { Enum_ov003_0217daf0_156 = 0x98 };
enum { Enum_ov003_0217daf0_160 = 0x9c };
enum { Enum_ov003_0217daf0_164 = 0xa0 };
enum { Enum_ov003_0217daf0_184 = 0xb4 };
enum { Enum_ov003_0217daf0_204 = 0xc8 };
#else
enum { Enum_ov003_0217daf0_20 = 0x14 };
enum { Enum_ov003_0217daf0_48 = 0x30 };
enum { Enum_ov003_0217daf0_49 = 0x31 };
enum { Enum_ov003_0217daf0_24 = 0x18 };
enum { Enum_ov003_0217daf0_52 = 0x34 };
enum { Enum_ov003_0217daf0_56 = 0x38 };
enum { Enum_ov003_0217daf0_60 = 0x3c };
enum { Enum_ov003_0217daf0_144 = 0x90 };
enum { Enum_ov003_0217daf0_148 = 0x94 };
enum { Enum_ov003_0217daf0_152 = 0x98 };
enum { Enum_ov003_0217daf0_156 = 0x9c };
enum { Enum_ov003_0217daf0_160 = 0xa0 };
enum { Enum_ov003_0217daf0_164 = 0xa4 };
enum { Enum_ov003_0217daf0_184 = 0xb8 };
enum { Enum_ov003_0217daf0_204 = 0xcc };
#endif


extern "C" void func_0205a444(char* arg0);
struct Struct_0201099c_14;
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);

// USA: func_ov003_0217daf0
extern "C" ARM void func_ov003_0217daf0(char* arg0) {
	*(int*)(arg0 + 0x0) = (*(volatile unsigned int*)0x4000000 & 0x1f00) >> 8;
	*(unsigned char*)(arg0 + 0x4) = 0;
	*(unsigned char*)(arg0 + 0x5) = 0;
	*(unsigned char*)(arg0 + 0x6) = 0;
	*(short*)(arg0 + 0x8) = 1;
	*(int*)(arg0 + 0xc) = 0;
	*(int*)(arg0 + Enum_ov003_0217daf0_20) = 0;
	*(unsigned char*)(arg0 + Enum_ov003_0217daf0_48) = 0;
	*(unsigned char*)(arg0 + Enum_ov003_0217daf0_49) = 0;
	VectorizedMemset(arg0 + Enum_ov003_0217daf0_24, 0, 0x18);
	*(int*)(arg0 + Enum_ov003_0217daf0_52) = 0;
	*(int*)(arg0 + Enum_ov003_0217daf0_56) = 0;
	func_0205a444(arg0 + Enum_ov003_0217daf0_60);
	*(int*)(arg0 + Enum_ov003_0217daf0_144) = 0;
	*(int*)(arg0 + Enum_ov003_0217daf0_148) = 0;
	*(int*)(arg0 + Enum_ov003_0217daf0_152) = 0;
	*(int*)(arg0 + Enum_ov003_0217daf0_156) = 0;
	*(int*)(arg0 + Enum_ov003_0217daf0_160) = 0;
	((SafeAllocator*)(arg0 + Enum_ov003_0217daf0_164))->ResetAllocatorPointer();
	((SafeAllocator*)(arg0 + Enum_ov003_0217daf0_184))->ResetAllocatorPointer();
	func_020dfc40((struct Struct_0201099c_14*)(arg0 + Enum_ov003_0217daf0_204));
}
