#include <globaldefs.h>
#include "NitroSDK/Timing.h"

extern "C" int func_ov031_0220d540(void);
struct Struct_ov031_02213dd8;
extern "C" unsigned int func_ov031_022140b0(Struct_ov031_02213dd8*);
struct Struct_ov031_02213dd8_2;
extern "C" unsigned int func_ov031_022140cc(Struct_ov031_02213dd8_2*);
extern "C" void func_ov031_0220d010(void*, void*, unsigned int);

// USA: func_ov031_02213dd8
extern "C" ARM int func_ov031_02213dd8(char* arg0) {
	int var0 = func_ov031_0220d540();
	char* var1 = arg0 + 0x470 + (*(unsigned char*)(arg0 + 0xd13)) * 0xc0;
	if (var0 == 3) {
		unsigned int var2 = func_ov031_022140b0((Struct_ov031_02213dd8*)arg0);
		int var3 = *(unsigned char*)(arg0 + 0xd15) + 1;
		*(unsigned char*)(arg0 + 0xd15) = var3;
		if (((unsigned)var3 & 0xff) > 3) {
			*(unsigned char*)(arg0 + 0xd15) = 0;
			*(char*)(arg0 + (*(unsigned char*)(arg0 + 0xd13)) * 4 + 0x444) = 1;
			return 9;
		}
		if (((unsigned)var3 & 0xff) != 1) {
			unsigned char var4 = *(unsigned char*)(arg0 + 0xd14);
			if (var4 == 1) {
				*(unsigned char*)(arg0 + 0xd0b) &= ~0xc;
			} else if (var4 == 2) {
				*(unsigned char*)(arg0 + 0xd15) = 0;
				*(char*)(arg0 + (*(unsigned char*)(arg0 + 0xd13)) * 4 + 0x444) = 3;
				return 9;
			} else if (var4 == 3) {
				*(unsigned char*)(arg0 + 0xd15) = 0;
				*(char*)(arg0 + (*(unsigned char*)(arg0 + 0xd13)) * 4 + 0x444) = 4;
				return 9;
			} else if (((unsigned)var3 & 0xff) == 3) {
				*(unsigned char*)(arg0 + 0xd0b) &= ~0xc;
			}
		}
		unsigned int var5 = func_ov031_022140cc((Struct_ov031_02213dd8_2*)arg0);
		func_ov031_0220d010(var1, arg0 + 0xcb8, var2 | var5);
	} else if (var0 == 9) {
		*(unsigned char*)(arg0 + 0xd15) = 0;
		*(unsigned long long*)(arg0 + 0xcb0) = GetCurrentTimestamp();
		return 0xa;
	}
	return 8;
}
