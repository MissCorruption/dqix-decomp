#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" int func_ov031_02239be8(void);
extern "C" int func_ov031_02239bfc(void);
extern "C" int func_ov031_02239e68(void);
extern "C" int func_ov031_0223a358(void);
extern "C" int func_020c9be0(void);

struct Struct_ov031_0223ab6c {
	unsigned char unknown_0_[0x64a];
	unsigned short unknown_64a_;
	unsigned char unknown_64c_[0x444];
	unsigned char unknown_a90_;
	unsigned char unknown_a91_[7];
	int unknown_a98_;
};
extern struct Struct_ov031_0223ab6c* data_ov031_02290d20;

// USA: func_ov031_0223ab6c
extern "C" ARM void func_ov031_0223ab6c(void) {
	switch (func_ov031_02239be8()) {
	case 1:
		func_ov031_02239bfc();
		break;
	case 7: {
		int var0 = func_ov031_02239e68();
		data_ov031_02290d20->unknown_64a_ = (unsigned short)var0;
		data_ov031_02290d20->unknown_a98_ = 0;
		data_ov031_02290d20->unknown_a90_ = 3;
		break;
	}
	case 0:
		data_ov031_02290d20->unknown_a98_ = 0;
		data_ov031_02290d20->unknown_a90_ = 3;
		break;
	case 9:
		func_ov031_0223a358();
		break;
	case 3:
		break;
	default:
		func_020c9be0();
		break;
	}
}
