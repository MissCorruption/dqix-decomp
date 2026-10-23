#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Cache.h"
#include "std_library_functions.h"


struct Struct_0201099c_14;
extern "C" void func_020dfc6c(struct Struct_0201099c_14* arg0);

struct Struct_ov017_02199684 { unsigned char unknown_0_[0x14]; int unknown_14_; unsigned char unknown_18_[0x20 - 0x18]; };
extern "C" void func_ov017_02199684(Struct_ov017_02199684* arg0, int arg1, int arg2);
extern "C" void func_ov017_021996bc(Struct_ov017_02199684* arg0, int arg1);

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(Struct_0205d1e0*);
struct Struct_0205d274;
extern "C" void func_0205d274(Struct_0205d274*);
struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);
extern "C" void func_0205d048(void* arg0);

extern "C" void func_ov017_021996fc(unsigned char* arg0);

extern "C" int LoadToMainBG1CharacterData(int arg0, int arg1, unsigned int arg2);

extern "C" int func_ov017_02199964(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_ov017_02199998(int arg0);
extern "C" int func_ov017_021999b4(int arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov017_021999e0(int arg0);

struct Struct_ov017_02199780 {
	unsigned short unknown_0_0_ : 2;
	unsigned short unknown_0_2_ : 4;
	unsigned short unknown_0_6_ : 1;
	unsigned short unknown_0_7_ : 1;
	unsigned short unknown_1_0_ : 5;
	unsigned short unknown_1_5_ : 1;
	unsigned short unknown_1_6_ : 2;
};

// USA: func_ov017_02199780
extern "C" ARM void func_ov017_02199780(unsigned char* arg0) {
#if defined(jpn)
	if (*(int*)(arg0 + 0x3000 + 0xe60) == 0) {
#else
	if (*(int*)(arg0 + 0x4000 + 0x80) == 0) {
#endif
		return;
	}

#if defined(jpn)
	if (*(int*)(arg0 + 0x3000 + 0xe58) != 0) {
#else
	if (*(int*)(arg0 + 0x4000 + 0x78) != 0) {
#endif
		*(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | 0x100;

#if defined(jpn)
		int var0 = *(int*)(arg0 + 0x3000 + 0xe5c);
#else
		int var0 = *(int*)(arg0 + 0x4000 + 0x7c);
#endif
		if (var0 >= 0) {
			int var1 = (int)BackgroundLoader::GetInstance();
#if defined(jpn)
			((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(arg0 + 0x3000 + 0xe5c)));
#else
			((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(arg0 + 0x4000 + 0x7c)));
#endif
		}

		*(volatile unsigned short*)0x4000050 = 0;
		*(volatile unsigned short*)0x4000008 = (*(volatile unsigned short*)0x4000008 & ~3) | 1;

#if defined(jpn)
		Struct_ov017_02199780* var2 = *(Struct_ov017_02199780**)(arg0 + 0x3000 + 0xa88);
#else
		Struct_ov017_02199780* var2 = *(Struct_ov017_02199780**)(arg0 + 0x3000 + 0xca8);
#endif
		func_ov017_02199964(var2->unknown_1_6_, var2->unknown_0_7_, var2->unknown_1_0_, var2->unknown_0_2_, var2->unknown_1_5_);
		func_ov017_02199998(var2->unknown_0_0_);

#if defined(jpn)
		Struct_ov017_02199780* var3 = *(Struct_ov017_02199780**)(arg0 + 0x3000 + 0xa8c);
#else
		Struct_ov017_02199780* var3 = *(Struct_ov017_02199780**)(arg0 + 0x3000 + 0xcac);
#endif
		func_ov017_021999b4(var3->unknown_1_6_, var3->unknown_0_7_, var3->unknown_1_0_, var3->unknown_0_2_);
		func_ov017_021999e0(var3->unknown_0_0_);

#if defined(jpn)
		if (*(int*)(arg0 + 0x3000 + 0xe64) != 0) {
			func_020dfc6c((Struct_0201099c_14*)*(int*)(arg0 + 0x3000 + 0xe64));
			*(int*)(arg0 + 0x3000 + 0xe64) = 0;
#else
		if (*(int*)(arg0 + 0x4000 + 0x84) != 0) {
			func_020dfc6c((Struct_0201099c_14*)*(int*)(arg0 + 0x4000 + 0x84));
			*(int*)(arg0 + 0x4000 + 0x84) = 0;
#endif
		}

#if defined(jpn)
		if (*(int*)(arg0 + 0x3000 + 0xe54) != 0) {
			func_ov017_02199684((Struct_ov017_02199684*)(arg0 + 0x294 + 0x3800), 2, 0x800);
			func_0205d1e0(*(Struct_0205d1e0**)(arg0 + 0x3000 + 0xa90));
			func_0205d274(*(Struct_0205d274**)(arg0 + 0x3000 + 0xa90));
			func_0205d2bc(*(Struct_0205d2bc**)(arg0 + 0x3000 + 0xa90));
			func_ov017_021996bc((Struct_ov017_02199684*)(arg0 + 0x294 + 0x3800), 2);
			func_0205d048(*(void**)(arg0 + 0x3000 + 0xa90));
#else
		if (*(int*)(arg0 + 0x4000 + 0x74) != 0) {
			func_ov017_02199684((Struct_ov017_02199684*)(arg0 + 0xb4 + 0x3c00), 2, 0x800);
			func_0205d1e0(*(Struct_0205d1e0**)(arg0 + 0x3000 + 0xcb0));
			func_0205d274(*(Struct_0205d274**)(arg0 + 0x3000 + 0xcb0));
			func_0205d2bc(*(Struct_0205d2bc**)(arg0 + 0x3000 + 0xcb0));
			func_ov017_021996bc((Struct_ov017_02199684*)(arg0 + 0xb4 + 0x3c00), 2);
			func_0205d048(*(void**)(arg0 + 0x3000 + 0xcb0));
#endif

#if defined(jpn)
			memset(*(void**)(arg0 + 0x3000 + 0xe54), 0, 0x20);
			CleanInvalidateCacheRange(*(void**)(arg0 + 0x3000 + 0xe54), 0x20);
			LoadToMainBG1CharacterData(*(int*)(arg0 + 0x3000 + 0xe54), 0, 0x20);
#else
			memset(*(void**)(arg0 + 0x4000 + 0x74), 0, 0x20);
			CleanInvalidateCacheRange(*(void**)(arg0 + 0x4000 + 0x74), 0x20);
			LoadToMainBG1CharacterData(*(int*)(arg0 + 0x4000 + 0x74), 0, 0x20);
#endif
		}

		*(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | 0x1300;
	}

	func_ov017_021996fc(arg0);
}
