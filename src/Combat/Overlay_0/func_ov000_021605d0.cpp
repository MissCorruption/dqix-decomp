#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x218
#define REGION_OFFSET_1 0x21c
#define REGION_OFFSET_2 0x7000
#define REGION_OFFSET_3 0x2c
#define REGION_OFFSET_4 0x30
#else
#define REGION_OFFSET_0 0x29c
#define REGION_OFFSET_1 0x2a0
#define REGION_OFFSET_2 0x6000
#define REGION_OFFSET_3 0xe3c
#define REGION_OFFSET_4 0xe40
#endif

#include "Util/Random.h"

struct Struct_ov000_021605d0 {
	struct Random* unknown_0_;
	int unknown_4_;
	int unknown_8_;
};

// USA: func_ov000_021605d0
extern "C" ARM void func_ov000_021605d0(unsigned char* arg0, struct Struct_ov000_021605d0* arg1) {
	*(struct Random**)(arg0 + REGION_OFFSET_0) = arg1->unknown_0_;
	*(int*)(arg0 + REGION_OFFSET_1) = arg1->unknown_4_;
	*(int*)(arg0 + 0x4) = arg1->unknown_8_;

	struct Random* var0 = *(struct Random**)(arg0 + REGION_OFFSET_0);
	if (var0 == NULL) return;
	*(unsigned int*)(arg0 + REGION_OFFSET_2 + REGION_OFFSET_3) = GetRandomStateHi(var0);
	*(unsigned int*)(arg0 + REGION_OFFSET_2 + REGION_OFFSET_4) = GetRandomStateLo(var0);
}
