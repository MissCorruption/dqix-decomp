#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_022077cc(int arg0, unsigned int* arg1);
struct Mutex;
void* LockMutex(Mutex*);
struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

struct Struct_ov031_02210f78 {
	char unknown_0_[0xa];
	short unknown_a_;
	void** unknown_c_;
};
extern "C" Struct_ov031_02210f78* func_ov031_02207440(int arg0);

extern void* data_ov031_0224e588;

// USA: func_ov031_02210f78
extern "C" ARM int func_ov031_02210f78(int arg0, int arg1, void* arg2) {
	unsigned char* var0 = (unsigned char*)arg2;
	var0[0] = 8;
	var0[1] = 2;
	*(short*)(var0 + 2) = (short)(((arg1 >> 8) & 0xff) | ((arg1 << 8) & 0xff00));
	if (func_ov031_022077cc(arg0, (unsigned int*)(var0 + 4)) == 0) {
		LockMutex((Mutex*)((char*)data_ov031_0224e588 + 0x1bc));
		Struct_ov031_02210f78* var1 = func_ov031_02207440(arg0);
		if (var1 != NULL) {
			VectorizedInvertedMemcpy(*var1->unknown_c_, var0 + 4, var1->unknown_a_);
		}
		UnlockMutex((Mutex*)((char*)data_ov031_0224e588 + 0x1bc));
		if (var1 == NULL) {
			return 0;
		}
	}
	return 1;
}
