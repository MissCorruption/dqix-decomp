#include <globaldefs.h>

struct Struct_ov023_021e257c_2 {
	short unknown_0_;
	unsigned char unknown_2_;
	unsigned char unknown_3_0_ : 4;
	unsigned char unknown_3_4_ : 4;
	char unknown_4_[4];
	short unknown_8_;
	short unknown_a_;
	void* unknown_c_;
	unsigned char unknown_10_0_ : 4;
	unsigned char unknown_10_4_ : 1;
	unsigned char unknown_10_5_ : 1;
	unsigned char unknown_10_6_ : 1;
	unsigned char unknown_10_7_ : 1;
	char unknown_11_[3];
};

struct Struct_ov023_021e257c {
	char unknown_0_[4];
	void* unknown_4_;
	char unknown_8_[4];
	Struct_ov023_021e257c_2* unknown_c_;
	char unknown_10_[6];
	unsigned short unknown_16_;
	char unknown_18_[0x48 - 0x18];
	short unknown_48_;
	short unknown_4a_;
};

struct Struct_ov023_021e257c_3;
extern "C" ARM void* func_ov023_021e27f8(struct Struct_ov023_021e257c_3* arg0, int arg1);
extern "C" ARM void func_ov023_021e2030(int arg0, int arg1, int arg2, void* arg3);
extern "C" int func_ov023_021e2c38(void* arg0, int arg1);
extern "C" void func_ov023_021e2b5c(void* arg0, int arg1, short* arg2, short* arg3);
extern "C" void func_0204f914(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" void func_0204f41c(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8);
extern "C" void func_0204f7e8(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8, int arg9, bool arg10, bool arg11);

#if defined(jpn)
extern "C" void __clear(void*, int);
extern "C" int sprintf(char*,const char*,...);
extern char data_ov023_021fcf44[];
extern "C" void func_02050678(void*,int,int,void*,int,int,short*,short*);
extern "C" void func_02050cc0(void*,int,int,void*,int,int,short*,short*,int,int,bool,bool);
#endif

extern "C" ARM void func_ov023_021e257c(struct Struct_ov023_021e257c* arg0) {
	if (arg0->unknown_4_ == 0) return;
	unsigned short var0;
	for (var0 = 0; var0 < arg0->unknown_16_; var0++) {
		Struct_ov023_021e257c_2* var1 = &arg0->unknown_c_[var0];
		void* var2 = func_ov023_021e27f8((struct Struct_ov023_021e257c_3*)arg0, var1->unknown_0_);
		if (!var2) continue;
		if (!func_ov023_021e2c38(arg0, *(short*)var2)) continue;
		short var3, var4;
		func_ov023_021e2b5c(arg0, var1->unknown_0_, &var3, &var4);

#if defined(jpn)
		unsigned var6;
		short var5;
		var6=var1->unknown_3_0_;
		var5=(short)(var6+1);
		if(var6==0xc) var5=0x14;
		void* var7=arg0->unknown_4_;
#else
		short var5 = arg0->unknown_48_;
		int var6 = var1->unknown_3_0_;
		void* var7 = arg0->unknown_4_;
		if (var5 == 0) var5 = (short)(var6 + 1);
		if (var6 == 0xc) {
			var5 = arg0->unknown_4a_;
			if (var5 == 0) var5 = 0x14;
		}
#endif
		*(short*)((char*)var7 + 0xb4) = (short)var6;
		*(short*)((char*)var7 + 0xb6) = var5;

		switch (var1->unknown_2_) {
		case 0: {
			int var8 = (short)(var3 + var1->unknown_8_);
			int var9 = (short)(var4 + var1->unknown_a_);
			func_0204f914(arg0->unknown_4_, var1->unknown_3_4_, var3, var4, var8, var9);
			break;
		}
		case 1: {
#if defined(jpn)
			char var10[0x400];
			__clear(var10,0x400);
			sprintf(var10,data_ov023_021fcf44,*(short*)((char*)var2+0x14),var1->unknown_c_);
			func_02050678(arg0->unknown_4_,var3,var4,var10,var1->unknown_3_0_,var1->unknown_3_4_,&var1->unknown_8_,&var1->unknown_a_);
#else
			if (*((unsigned char*)var2 + 0x16) & 0x8) var3 -= func_020420e8(var1->unknown_c_, 0) >> 1;
			if (*((unsigned char*)var2 + 0x16) & 0x10) var3 -= func_020420e8(var1->unknown_c_, 0);
			func_0204f41c(arg0->unknown_4_, var3, var4, var1->unknown_c_, var1->unknown_3_0_, var1->unknown_3_4_, &var1->unknown_8_, &var1->unknown_a_, 0);
#endif
			break;
		}
		case 2: {
#if defined(jpn)
			func_02050cc0
#else
			func_0204f7e8
#endif
			(arg0->unknown_4_, var3, var4, var1->unknown_c_, var1->unknown_3_0_, var1->unknown_3_4_, &var1->unknown_8_, &var1->unknown_a_,
				var1->unknown_10_4_, var1->unknown_10_0_, var1->unknown_10_5_, var1->unknown_10_6_);
			break;
		}
#if !defined(jpn)
		case 3:
			func_ov023_021e2030((int)arg0->unknown_4_, var3, var4, var1->unknown_c_);
			break;
#endif
		}
	}
}
