#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xc8
#else
#define REGION_OFFSET_0 0x88
#endif


// USA: func_ov000_0217c4e8
extern "C" ARM int func_ov000_0217c4e8(void* arg0, int arg1) {
	unsigned char* var0 = (unsigned char*)arg0 + ((arg1 >> 3) & 0xff);
	unsigned char var1 = (unsigned char)(1 << (arg1 & 7));
	return (var0[REGION_OFFSET_0] & var1) != 0;
}
