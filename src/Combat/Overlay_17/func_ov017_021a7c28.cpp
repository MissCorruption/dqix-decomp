#include <globaldefs.h>

#if defined(jpn)
#define func_ov017_021a7c28 func_ov017_021a85b8
#endif

// USA: func_ov017_021a7c28
extern "C" ARM void func_ov017_021a7c28(unsigned char* arg0, unsigned char* arg1) {
	arg0[0xc] = arg1[0];
	arg0[0xd] = arg1[1];
	*(unsigned short*)(arg0+0xe) = *(unsigned short*)(arg1+2);
	*(unsigned short*)(arg0+0x10) = *(unsigned short*)(arg1+4);
	*(int*)(arg0+0x14) = *(int*)(arg1+8);
	arg0[0x18] = arg1[0xc];
	arg0[0x19] = arg1[0xd];
	arg0[0x1a] = arg1[0xe];
	arg0[0x1b] = arg1[0xf];
	*(short*)(arg0+0x1c) = *(short*)(arg1+0x10);
	arg0[0x1e] = arg1[0x12];
	*(int*)(arg0+0x20) = *(int*)(arg1+0x14);
}
