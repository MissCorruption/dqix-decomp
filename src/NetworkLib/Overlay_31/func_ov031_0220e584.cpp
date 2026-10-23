#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" void func_ov031_0220da1c(int arg0);
extern "C" void func_ov031_0220db6c(void);
extern "C" void func_ov031_0220d984(int arg0, void* arg1, int arg2, int arg3);
extern "C" void func_ov031_0220f394(int arg0);
extern "C" void func_ov031_0220ef9c(char* arg0);

extern void* data_ov031_0224e53c;

struct Struct_ov031_0220e584 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	void* unknown_8_;
};

// USA: func_ov031_0220e584
extern "C" ARM void func_ov031_0220e584(Struct_ov031_0220e584* arg0) {
	switch (arg0->unknown_2_) {
	case 0:
		switch (arg0->unknown_4_) {
		case 0xe: {
			unsigned char* var0 = (unsigned char*)data_ov031_0224e53c;
			int var1 = *(int*)(var0 + 0x2000 + 0x260);
			if (var1 == 0xc) {
				func_ov031_0220da1c(8);
				func_ov031_0220db6c();
			} else {
				func_ov031_0220da1c(9);
				unsigned char* var2 = (unsigned char*)data_ov031_0224e53c;
				func_ov031_0220d984(0, var2 + 0x2140, 0, 0x872);
			}
			break;
		}
		case 0xf: {
			unsigned short var3 = *(unsigned short*)((unsigned char*)arg0->unknown_8_ + 0xe);
			int var4 = var3;
			func_ov031_0220f394((var4 >> 8) & 0xff);
			InvalidateDataCacheRange(arg0->unknown_8_, 0x620);
			func_ov031_0220ef9c((char*)arg0->unknown_8_);
			break;
		}
		default: {
			func_ov031_0220da1c(0xb);
			unsigned char* var5 = (unsigned char*)data_ov031_0224e53c;
			int var6 = arg0->unknown_4_;
			func_ov031_0220d984(7, var5 + 0x2140, var6, 0x881);
			break;
		}
		}
		break;
	case 4:
	default: {
		func_ov031_0220da1c(0xb);
		unsigned char* var7 = (unsigned char*)data_ov031_0224e53c;
		func_ov031_0220d984(7, var7 + 0x2140, 0, 0x88c);
		break;
	}
	}
}
