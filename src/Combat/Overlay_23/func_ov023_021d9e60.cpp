#if defined(jpn)
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/CharacterCreationUI.h"
#include "Combat/TryApplyElemFields.h"

struct Struct_0205d81c;
struct Struct_0205d0e0 {
    unsigned char unknown_0_[0xb8];
    unsigned short unknown_b8_;
    unsigned short unknown_ba_;
    unsigned char unknown_bc_[8];
    unsigned char unknown_c4_;
    unsigned char unknown_c5_[0xe0 - 0xc5];
};
extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c*, int);
extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" int func_02042058(char*, const char*);
extern "C" int func_02042428(char*, int);

// USA: 021d9e60; JPN: 021da6f0.
extern "C" ARM void func_ov023_021d9e60(char* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (!(var0->unknown_d9c_ & 0x8000)) return;
    memset(var0->unknown_f8_, 0, 0x800);
    if (var0->unknown_c58_ == 8) {
        Struct_0205d0e0* var1 = func_0205d81c((Struct_0205d81c*)&var0->unknown_1f8_[1], 3);
        var1->unknown_b8_ = 0x11;
        var1->unknown_ba_ = 0x10;
        func_02042428(var0->unknown_f8_, 12);
        func_02042058(var0->unknown_f8_, var0->unknown_d74_[var0->unknown_da3_]);
    } else {
        int var2 = func_020e0434(&var0->unknown_e0_, 0x4274);
        func_02042058(var0->unknown_f8_, (const char*)var2);
    }
    func_0205d5d0((Struct_0205d5d0*)&var0->unknown_1f8_[1], 3, (int)var0->unknown_f8_, 0);
    var0->unknown_d9c_ &= ~0x8000;
}
#else
#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c*, int);

struct Struct_0205d5d0;
extern "C" int func_0205d5d0(Struct_0205d5d0*, int, int, int, unsigned char);

struct Struct_0201099c_3;
extern "C" int func_020e0434(Struct_0201099c_3*, int);

extern "C" int func_02042058(char*, const char*);
extern "C" int func_02041a28(char*, int);

extern "C" void __clear(void*, int);
extern "C" int func_020426bc(void*, void*, int);
extern "C" void func_02042764(void*, void*, int);
extern "C" int func_020420e8(void*, int);

// USA: func_ov023_021d9e60
extern "C" ARM void func_ov023_021d9e60(char* arg0) {
	if (!(*(int*)(arg0 + 0xd9c) & 0x8000)) return;
	char* var3 = *(char**)(arg0 + 0xf8);
	memset(var3, 0, 0x960);
	if (*(signed char*)(arg0 + 0xc58) == 8) {
		Struct_0205d0e0* var4 = func_0205d81c((Struct_0205d81c*)(arg0 + 0x2b4), 3);
		*(unsigned short*)((char*)var4 + 0xb8) = 0x11;
		*(unsigned short*)((char*)var4 + 0xba) = 0x10;
		char var5[0x80];
		char var6[0x80];
		__clear(var5, 0x80);
		__clear(var6, 0x80);
		int var7 = *(unsigned char*)(arg0 + 0xda3);
		int* var8 = *(int**)(arg0 + 0xdb0);
		int var9 = func_020426bc((void*)var8[var7], var5, 0);
		for (; var9 < 8; var9++) var5[var9] = *(unsigned char*)(arg0 + 0xdb4);
		func_02042764(var5, var6, 0);
		int var10 = func_020420e8(var6, 0);
		func_02041a28(var3, (0x50 - var10) >> 1);
		func_02042058(var3, var6);
	} else {
		int var11 = func_020e0434((Struct_0201099c_3*)(arg0 + 0xe0), 0x4274);
		func_02042058(var3, (const char*)var11);
	}
	func_0205d5d0((Struct_0205d5d0*)(arg0 + 0x2b4), 3, (int)var3, 0, 0);
	*(int*)(arg0 + 0xd9c) &= ~0x8000;
}

#endif
