#include <globaldefs.h>

extern "C" void* VectorizedInvertedMemcpy(void* dst, void* src, int n);
extern void* data_ov031_0224e580;

// USA: func_ov031_0220f770
extern "C" ARM int func_ov031_0220f770(int* arg0) {
	int var0 = 1;
	if (*(int*)((char*)arg0 + 8) == 0xcf) {
		void* var1 = *(void**)((char*)data_ov031_0224e580 + 0x24);
		int var2 = *(int*)((char*)var1 + 0x18);
		int var3 = *(int*)((char*)arg0 + 0x10);
		int var4 = *(int*)((char*)var1 + 0x14);
		int var5 = *(int*)((char*)var1 + 0xc);
		if ((unsigned int)var4 < (unsigned int)(var2 + var3)) {
			var3 = var4 - var2;
		}
		if (var5 != 0) {
			VectorizedInvertedMemcpy((char*)arg0 + 0x14, (void*)(var5 + var2), var3);
		}

		int var6 = var2 + var3;
		*(int*)((char*)(*(void**)((char*)data_ov031_0224e580 + 0x24)) + 0x18) = var6;

		if (*(int*)((char*)arg0 + 0xc) != 0) {
			var0 = 0;
		} else {
			*(int*)((char*)(*(void**)((char*)data_ov031_0224e580 + 0x24)) + 0x24) = var6;
			*(int*)((char*)(*(void**)((char*)data_ov031_0224e580 + 0x24)) + 0x20) = 1;
		}
	}
	return var0;
}
