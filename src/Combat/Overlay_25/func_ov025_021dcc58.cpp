#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021dcc58_24576 = 0x7000, Enum_ov025_021dcc58_3659 = 0x3b };
#else
enum { Enum_ov025_021dcc58_24576 = 0x6000, Enum_ov025_021dcc58_3659 = 0xe4b };
#endif

// USA: func_ov025_021dcc58
extern "C" ARM void func_ov025_021dcc58(void* arg0, unsigned char arg1) {
	unsigned char* var0 = (unsigned char*)arg0;
	(var0 + Enum_ov025_021dcc58_24576)[Enum_ov025_021dcc58_3659] = arg1;
}
