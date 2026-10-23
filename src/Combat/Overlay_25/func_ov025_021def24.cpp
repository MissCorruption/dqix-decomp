#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021def24_1804 = 0x8fc };
#else
enum { Enum_ov025_021def24_1804 = 0x70c };
#endif

// USA: func_ov025_021def24
extern "C" ARM int func_ov025_021def24(void* arg0) {
	unsigned char* var0 = (unsigned char*)arg0;
	return *(int*)(var0 + 0x7000 + Enum_ov025_021def24_1804);
}
