#include <globaldefs.h>

extern "C" char* func_ov031_022133f8(int);
extern int data_ov031_0224e5c4;

typedef void (*Type_ov031_022132d4)(int, void*, int);

// USA: func_ov031_022132d4
extern "C" ARM void* func_ov031_022132d4(void) {
	char* var0 = func_ov031_022133f8(1);
	if (var0 == 0) return var0;

	if ((*(unsigned char*)(var0+8)) & 0x10) {
		void* var1 = func_ov031_022133f8(0x10);
		(*(unsigned char*)(var0+8)) = (*(unsigned char*)(var0+8)) & ~0x10;
		(*(Type_ov031_022132d4*)(var0 + 4))(0x10, var1, 0xd18);
	}

	if ((*(unsigned char*)(var0+8)) & 0x8) {
		void* var2 = func_ov031_022133f8(0x8);
		(*(unsigned char*)(var0+8)) = (*(unsigned char*)(var0+8)) & ~0x8;
		(*(Type_ov031_022132d4*)(var0 + 4))(0x8, var2, 0xc);
	}

	if ((*(unsigned char*)(var0+8)) & 0x4) {
		void* var3 = func_ov031_022133f8(0x4);
		(*(unsigned char*)(var0+8)) = (*(unsigned char*)(var0+8)) & ~0x4;
		(*(Type_ov031_022132d4*)(var0 + 4))(0x4, var3, 0x58);
	}

	if ((*(unsigned char*)(var0+8)) & 0x2) {
		void* var4 = func_ov031_022133f8(0x2);
		(*(unsigned char*)(var0+8)) = (*(unsigned char*)(var0+8)) & ~0x2;
		(*(Type_ov031_022132d4*)(var0 + 4))(0x2, var4, 0x2300);
	}

	if (!((*(unsigned char*)(var0+8)) & 0x1)) return (void*)(int)(*(unsigned char*)(var0+8));
	(*(unsigned char*)(var0+8)) = (*(unsigned char*)(var0+8)) & ~0x1;
	(*(Type_ov031_022132d4*)(var0 + 4))(0x1, var0, 0x24);
	*(int*)((char*)&data_ov031_0224e5c4 + 0xc) = 0;
	return &data_ov031_0224e5c4;
}
