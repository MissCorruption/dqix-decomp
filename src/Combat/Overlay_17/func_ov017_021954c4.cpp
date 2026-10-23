#include <globaldefs.h>

#if defined(jpn)
static const int kSearch=0x16c, kOther=0x910, kFlags=0xfe;
#else
static const int kSearch=0x41c, kOther=0xb30, kFlags=0x31e;
#endif

// USA: func_ov017_021954c4
extern "C" ARM void func_ov017_021954c4(void* arg0, int arg1) {
	unsigned char* var0 = *(unsigned char**)((char*)arg0 + 0x4000 + kSearch);
	if (var0[0] != 0) {
		if (var0[2] == arg1) {
			var0[0] = 0;
			var0[1] = 0;
			{
				unsigned char* var1 = *(unsigned char**)((char*)arg0 + 0x3000 + kOther);
				if (var1[3] != 0) var1[8] = 1;
			}
		}
	}
	*((unsigned char*)arg0 + 0x4000 + kFlags) |= (1 << arg1);
}
