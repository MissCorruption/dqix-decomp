#include <globaldefs.h>

extern "C" void func_ov017_021a0790(char* arg0);
extern "C" void func_ov017_021a0964(char* arg0);
extern "C" void func_ov017_021a0ba8(char* arg0);
extern "C" void func_ov017_021a0f40(char* arg0);
extern "C" void func_ov017_021a1114(char* arg0);
extern "C" void func_ov017_021a0d6c(char* arg0);

extern "C" void func_ov017_021a0630(char* arg0);
extern "C" void func_ov017_021a07f4(char* arg0);
extern "C" void func_ov017_021a09c8(char* arg0);
extern "C" void func_ov017_021a0c0c(char* arg0);
extern "C" void func_ov017_021a0dd0(char* arg0);
extern "C" void func_ov017_021a0fa4(char* arg0);

extern "C" void func_020a1de4();
extern "C" void func_020a1edc();
extern "C" void func_020a1df8(int arg0);
extern "C" void func_020a1ef0(int arg0);

struct Struct_ov017_0219de70 {
	char unknown_0_[0xc];
	unsigned char unknown_c_0_:4;
	unsigned char unknown_c_4_:4;
};

// USA: func_ov017_0219de70
extern "C" ARM void func_ov017_0219de70(char* arg0, void* arg1, Struct_ov017_0219de70* arg2) {
	int var0 = arg2->unknown_c_0_;
	int var1;
	if ((unsigned int)(var0 - 2) <= 1) var1 = 0;
	else if (var0 == 5) var1 = 2;
	else if (var0 == 6) var1 = 3;
	else if (var0 == 7) var1 = 4;
	else if (var0 == 8) var1 = 5;
	else var1 = 1;

#if defined(jpn)
	if (*(int*)(arg0 + 0x2000 + 0x8f8) == var1) return;
#else
	if (*(int*)(arg0 + 0x2000 + 0xb08) == var1) return;
#endif

#if defined(jpn)
	switch (*(int*)(arg0 + 0x2000 + 0x8f8)) {
#else
	switch (*(int*)(arg0 + 0x2000 + 0xb08)) {
#endif
	case 0: func_ov017_021a0790(arg0); break;
	case 1: func_ov017_021a0964(arg0); break;
	case 3: func_ov017_021a0f40(arg0); break;
	case 4: func_ov017_021a1114(arg0); break;
	case 2: func_ov017_021a0ba8(arg0); break;
	case 5: func_ov017_021a0d6c(arg0); break;
	}

#if defined(jpn)
	*(int*)(arg0 + 0x2000 + 0x8f8) = var1;
#else
	*(int*)(arg0 + 0x2000 + 0xb08) = var1;
#endif

	switch (var1) {
	case 0: func_ov017_021a0630(arg0); break;
	case 1: func_ov017_021a07f4(arg0); break;
	case 3: func_ov017_021a0dd0(arg0); break;
	case 4: func_ov017_021a0fa4(arg0); break;
	case 2: func_ov017_021a09c8(arg0); break;
	case 5: func_ov017_021a0c0c(arg0); break;
	}

	func_020a1de4();
	func_020a1edc();

#if defined(jpn)
	int var2 = *(int*)(arg0 + 0x2000 + 0x8f8);
#else
	int var2 = *(int*)(arg0 + 0x2000 + 0xb08);
#endif
	if (var2 == 0 || var2 == 2 || var2 == 5) {
		func_020a1df8(3);
		func_020a1ef0(1);
	} else if (var2 == 1) {
		func_020a1df8(0);
		func_020a1ef0(1);
	}
}
