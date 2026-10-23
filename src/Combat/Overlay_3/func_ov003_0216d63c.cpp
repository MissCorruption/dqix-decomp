#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"
#include "World/Object3D.h"

#if defined(jpn)
enum { Enum_ov003_0216d63c_1040 = 0x428 };
enum { Enum_ov003_0216d63c_2016 = 0x768 };
enum { Enum_ov003_0216d63c_3848 = 0xd8c };
enum { Enum_ov003_0216d63c_4708 = 0x10f4 };
enum { Enum_ov003_0216d63c_3852 = 0xd90 };
enum { Enum_ov003_0216d63c_4800 = 0x1150 };
enum { Enum_ov003_0216d63c_4716 = 0x10fc };
enum { Enum_ov003_0216d63c_5128 = 0x1298 };
enum { Enum_ov003_0216d63c_5119 = 0x128f };
#else
enum { Enum_ov003_0216d63c_1040 = 0x410 };
enum { Enum_ov003_0216d63c_2016 = 0x7e0 };
enum { Enum_ov003_0216d63c_3848 = 0xf08 };
enum { Enum_ov003_0216d63c_4708 = 0x1264 };
enum { Enum_ov003_0216d63c_3852 = 0xf0c };
enum { Enum_ov003_0216d63c_4800 = 0x12c0 };
enum { Enum_ov003_0216d63c_4716 = 0x126c };
enum { Enum_ov003_0216d63c_5128 = 0x1408 };
enum { Enum_ov003_0216d63c_5119 = 0x13ff };
#endif

struct Struct_0201099c_14 {
	char unknown_0_[0x18];
};
struct Struct_020a9ea4 {
	char unknown_0_[8];
};

extern "C" void func_0205a444(char* arg0);
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);
extern "C" void func_020a9ea4(struct Struct_020a9ea4* arg0);
extern "C" void func_ov003_0215c650(void* arg0);
extern "C" void func_ov003_0216ffbc(void* arg0);
extern "C" void func_ov003_02170b74(void* arg0);

struct Struct_ov003_0216d63c {
	unsigned int unknown_0_;
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
	unsigned short unknown_a_;
	int unknown_c_;
	int unknown_10_;
	char unknown_14_[Enum_ov003_0216d63c_1040 - 0x14];
	char unknown_410_[Enum_ov003_0216d63c_2016 - Enum_ov003_0216d63c_1040];
	char unknown_7e0_[Enum_ov003_0216d63c_3848 - Enum_ov003_0216d63c_2016];
	void* unknown_f08_;
	char unknown_f0c_[Enum_ov003_0216d63c_4708 - Enum_ov003_0216d63c_3852];
	int unknown_1264_;
	int unknown_1268_;
	char unknown_126c_[Enum_ov003_0216d63c_4800 - Enum_ov003_0216d63c_4716];
	int unknown_12c0_;
	int unknown_12c4_;
	int unknown_12c8_;
	int unknown_12cc_;
	int unknown_12d0_;
	SafeAllocator unknown_12d4_[4];
	struct Struct_0201099c_14 unknown_1324_;
	Object3D unknown_133c_;
	unsigned char unknown_13e8_;
	unsigned char unknown_13e9_;
	unsigned char unknown_13ea_;
	unsigned char unknown_13eb_;
	unsigned char unknown_13ec_;
	unsigned char unknown_13ed_;
	unsigned char unknown_13ee_;
	unsigned char unknown_13ef_;
	int unknown_13f0_;
	int unknown_13f4_;
	char unknown_13f8_[4];
	signed char unknown_13fc_[3];
	char unknown_13ff_[Enum_ov003_0216d63c_5128 - Enum_ov003_0216d63c_5119];
	int unknown_1408_;
	struct Struct_020a9ea4 unknown_140c_;
};

// USA: func_ov003_0216d63c
extern "C" ARM void func_ov003_0216d63c(struct Struct_ov003_0216d63c* arg0) {
	arg0->unknown_0_ = (DISPCNT & 0x1f00) >> 8;
	arg0->unknown_4_ = 0;
	arg0->unknown_6_ = 0;
	arg0->unknown_8_ = 0;
	arg0->unknown_13ec_ = 0;
	arg0->unknown_a_ = 0;
	arg0->unknown_c_ = 0;
	arg0->unknown_10_ = 0;
	func_ov003_0215c650(arg0->unknown_14_);
	func_ov003_0216ffbc(arg0->unknown_410_);
	func_ov003_02170b74(arg0->unknown_7e0_);
	arg0->unknown_f08_ = arg0->unknown_410_;
	arg0->unknown_1264_ = 0;
	arg0->unknown_1268_ = 0;
	func_0205a444(arg0->unknown_126c_);
	arg0->unknown_12c0_ = 0;
	arg0->unknown_12c4_ = 0;
	arg0->unknown_12c8_ = 0;
	arg0->unknown_12cc_ = 0;
	arg0->unknown_12d0_ = 0;
	arg0->unknown_12d4_[0].ResetAllocatorPointer();
	arg0->unknown_12d4_[1].ResetAllocatorPointer();
	arg0->unknown_12d4_[2].ResetAllocatorPointer();
	arg0->unknown_12d4_[3].ResetAllocatorPointer();
	func_020dfc40(&arg0->unknown_1324_);
	arg0->unknown_133c_.Initialize();
	arg0->unknown_13e8_ = 0;
	arg0->unknown_13e9_ = 0;
	arg0->unknown_13ea_ = 0;
	arg0->unknown_13eb_ = 1;
	arg0->unknown_13ef_ = 0;
	arg0->unknown_13f0_ = 0;
	arg0->unknown_13ee_ = 0;
	arg0->unknown_13f4_ = -1;
	memset(arg0->unknown_13fc_, -1, 3);
	arg0->unknown_1408_ = 0;
	arg0->unknown_13ed_ = 0;
	func_020a9ea4(&arg0->unknown_140c_);
}
