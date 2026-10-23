#include <globaldefs.h>

extern "C" int func_020cf0fc(int arg0);
extern "C" int func_020cf1a8(int arg0);
extern "C" long long func_020cf990(int arg0, unsigned char* arg1);

// USA: func_ov031_02207c98
extern "C" ARM int func_ov031_02207c98(void) {
	char var0[0x1c];
	func_020cf0fc((int)(var0 + 0xc));
	func_020cf1a8((int)var0);
	return (int)func_020cf990((int)(var0 + sizeof(var0) - 0x10), (unsigned char*)var0) + 0x386d4380;
}
