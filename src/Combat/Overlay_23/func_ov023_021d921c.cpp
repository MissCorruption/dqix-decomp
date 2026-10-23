#include <globaldefs.h>

#if defined(jpn)
extern "C" void func_0205d304(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif


// USA: func_ov023_021d921c
extern "C" ARM void func_ov023_021d921c(void* arg0, int arg1, int arg2, int arg3) {
	*(short*)((char*)arg0 + 0xc0) = (short)arg2;
	*(short*)((char*)arg0 + 0xc2) = (short)arg3;
	*(short*)((char*)arg0 + 0xc4) = (short)((0x20 - arg2) >> 1);
	*(short*)((char*)arg0 + 0xc6) = (short)((0x18 - arg3) >> 1);
	*(short*)((char*)arg0 + 0xc8) = 0;
	*(short*)((char*)arg0 + 0xca) = 5;
	*(short*)((char*)arg0 + 0xcc) = 0xa;
	*(short*)((char*)arg0 + 0xce) = 0xa;
	*(unsigned char*)((char*)arg0 + 0xd1) = 0;
	*(unsigned char*)((char*)arg0 + 0xd5) = 0;
#if defined(jpn)
	func_0205d304((char*)arg0 + 0x20, arg1, 0, 0, 0, 1, 0);
#else
	func_0205d304((char*)arg0 + 0x20, arg1, 0, 0, 0, 1, 0, 0);
#endif

}
