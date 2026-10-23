#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

typedef void (*Type_ov031_02227898)(int);

extern "C" void func_ov031_0223a794(void);
extern "C" void func_ov031_0223ab18(unsigned char* arg0, unsigned char* arg1);
extern "C" void* func_ov031_0223ab5c(void);
extern "C" void func_020ca3b8(const void* src, void* dst, unsigned long size);
extern "C" void func_ov031_0223e2c0(int arg0, void* arg1);
extern "C" unsigned int func_ov031_0223cf70(void** arg0);
extern "C" char* data_ov031_02290c44;
namespace DuplicatePool {
	extern "C" char* data_ov031_02290c44;
}

static inline void inline_ov031_02227898(int arg0) {
	Type_ov031_02227898 var0 = *(Type_ov031_02227898*)(data_ov031_02290c44 + 0x1e000 + 0x298);
	if (var0 == NULL) {
		*(unsigned char*)(data_ov031_02290c44 + 0x1e000 + 0x2a0) = 1;
	} else {
		var0(arg0);
	}
}

// USA: func_ov031_02227898
extern "C" ARM void func_ov031_02227898(void* arg0) {
	unsigned char var0;
	unsigned char var1;

	func_ov031_0223a794();
	if (*(unsigned char*)(data_ov031_02290c44 + 0x1e000 + 0x2a0) != 0 &&
	    *(unsigned char*)(data_ov031_02290c44 + 0x1e000 + 0x2a1) == 0) {
		Type_ov031_02227898 var2 = *(Type_ov031_02227898*)(data_ov031_02290c44 + 0x1e000 + 0x298);
		if (var2 != NULL) {
			var2(0);
		}
		return;
	}

	func_ov031_0223ab18(&var0, &var1);
	switch (var0) {
	case 1:
	case 2:
	case 3:
	case 4:
		break;
	case 5:
		if (var1) {
			char* var3 = data_ov031_02290c44 + 0x1e280;
			void* var4 = func_ov031_0223ab5c();
			func_020ca3b8(var4, var3, 0x16);
			inline_ov031_02227898(0);
		}
		break;
	case 13:
		if (var1) {
			inline_ov031_02227898(1);
		}
		break;
	case 20:
	case 23:
		if (var1) {
			inline_ov031_02227898(3);
		}
		break;
	case 26:
	case 29:
		if (var1) {
			inline_ov031_02227898(4);
		}
		break;
	case 12:
		if (var1) {
			inline_ov031_02227898(2);
		}
		break;
	case 34:
		func_ov031_0223e2c0(0, arg0);
		func_ov031_0223cf70((void**)&DuplicatePool::data_ov031_02290c44);
		break;
	}
}
