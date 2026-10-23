#include <globaldefs.h>

#if defined(jpn)
#define SUB_POINTER_OFFSET 0x144
#define INDEX_OFFSET 0x8b8
#else
#define SUB_POINTER_OFFSET 0x150
#define INDEX_OFFSET 0x950
#endif

// USA: func_ov023_021e4250
extern "C" ARM unsigned char func_ov023_021e4250(char* arg0) {
	char* var0 = *(char**)(arg0 + SUB_POINTER_OFFSET);
	return *(unsigned char*)(var0 + *(int*)(var0 + INDEX_OFFSET) + 0x186);
}
