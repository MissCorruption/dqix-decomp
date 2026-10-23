#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_022188e4 {
	unsigned char unknown_0_[0x1024];
	char unknown_1024_[0x100];
	char* unknown_1124_;
	char* unknown_1128_;
	unsigned char unknown_112c_[4];
	int unknown_1130_;
	unsigned short unknown_1134_;
};

extern int data_ov031_02249f24;
extern int data_ov031_02249f2c;
extern int data_ov031_02249f38;
extern int data_ov031_02249f3c;

extern "C" int func_02005a94(char* arg0);

// USA: func_ov031_022188e4
extern "C" ARM int func_ov031_022188e4(void* arg0, const char* arg1) {
	Struct_ov031_022188e4* var0 = (Struct_ov031_022188e4*)arg0;
	char* var1 = NULL;
	if (strlen(arg1) >= 0x100) {
		return 0;
	}
	strncpy(var0->unknown_1024_, arg1, 0x100);
	if (strlen(arg1) != strlen(var0->unknown_1024_)) {
		return 0;
	}
	if (strstr(var0->unknown_1024_, (const char*)&data_ov031_02249f24) != NULL) {
		var0->unknown_1124_ = var0->unknown_1024_ + 7;
		var0->unknown_1130_ = 0;
		var0->unknown_1134_ = 0x50;
	} else {
		char* var2 = strstr(var0->unknown_1024_, (const char*)&data_ov031_02249f2c);
		if (var2 == NULL) {
			return 0;
		}
		var0->unknown_1124_ = var2 + 8;
		var0->unknown_1130_ = 1;
		var0->unknown_1134_ = 0x1bc - var0->unknown_1130_;
	}
	char* var3 = strstr(var0->unknown_1124_, (const char*)&data_ov031_02249f38);
	if (var3 != NULL) {
		*var3 = 0;
		var1 = var3 + 1;
	}
	char* var4 = strstr(var0->unknown_1124_, (const char*)&data_ov031_02249f3c);
	if (var4 == NULL) {
		var0->unknown_1128_ = NULL;
	} else {
		*var4 = 0;
		var0->unknown_1128_ = var4 + 1;
	}
	if (var1 != NULL) {
		var0->unknown_1134_ = func_02005a94(var1);
	}
	return 1;
}
