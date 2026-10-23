#include <globaldefs.h>

extern void* data_ov031_0224e53c;
extern "C" void func_ov031_0220d9c8(short arg0, short arg1, int arg2, int arg3, int arg4);

// USA: func_ov031_0220d984
extern "C" ARM void func_ov031_0220d984(short arg0, int arg1, int arg2, int arg3) {
	short* var0 = (short*)((char*)data_ov031_0224e53c + 0x2280);
	short var1 = *var0;
	*var0 = 0;
	func_ov031_0220d9c8(var1, arg0, arg1, arg2, arg3);
}
