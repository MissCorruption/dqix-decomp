#if defined(jpn)
enum {Enum_ov017_0218d818_859=0x13b, Enum_ov017_0218d818_17238=0x4136, Enum_ov017_0218d818_17239=0x4137, Enum_ov017_0218d818_17240=0x4138, Enum_ov017_0218d818_17242=0x413a};
#else
enum {Enum_ov017_0218d818_859=0x35b, Enum_ov017_0218d818_17238=0x4356, Enum_ov017_0218d818_17239=0x4357, Enum_ov017_0218d818_17240=0x4358, Enum_ov017_0218d818_17242=0x435a};
#endif
#include <globaldefs.h>

extern "C" void* func_020e2ff8(void);
struct Struct_0208ab34;
extern "C" int func_020e34bc(struct Struct_0208ab34* arg0, int arg1);
extern "C" void func_020e3428(void* arg0, int arg1);
extern "C" void func_ov017_0218d7fc(unsigned char* arg0);
struct Struct_0208ab34_2;
extern "C" void func_020e3468(struct Struct_0208ab34_2* arg0, int arg1);
extern "C" void func_ov017_0218d7b0(unsigned char* arg0, char* arg1);

extern "C" void func_ov017_0218d2f0(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov017_0218d818
extern "C" ARM void func_ov017_0218d818(unsigned char* arg0) {
	if (arg0[0x4000 + Enum_ov017_0218d818_859] != 1) return;
	void* var0 = func_020e2ff8();
	int var1 = func_020e34bc((struct Struct_0208ab34*)var0, 1);
	if (var1 == 1) {
		func_ov017_0218d2f0(arg0[Enum_ov017_0218d818_17238], arg0[Enum_ov017_0218d818_17239], *(unsigned short*)(arg0 + Enum_ov017_0218d818_17240), arg0[Enum_ov017_0218d818_17242]);
		func_020e3428(var0, 1);
		func_ov017_0218d7fc(arg0 + Enum_ov017_0218d818_17238);
	} else if ((unsigned int)(var1 - 3) <= 2) {
		func_020e3468((struct Struct_0208ab34_2*)var0, 1);
		unsigned short var2[3];
		var2[0] = *(unsigned short*)(arg0 + Enum_ov017_0218d818_17238);
		var2[1] = *(unsigned short*)(arg0 + Enum_ov017_0218d818_17240);
		var2[2] = *(unsigned short*)(arg0 + Enum_ov017_0218d818_17242);
		func_ov017_0218d7b0(arg0, (char*)var2);
	}
}
