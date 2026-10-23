#include <globaldefs.h>
#include "std_library_functions.h"

extern int data_ov014_02189800;

struct Struct_ov014_021844c4;
extern "C" ARM int func_ov014_02188bd0(struct Struct_ov014_021844c4* arg0);
struct Struct_ov014_021845d4 {
	int unknown_0_;
	short unknown_4_;
	unsigned short unknown_6_;
};
extern "C" ARM void func_ov014_021845d4(struct Struct_ov014_021845d4* arg0);
extern "C" ARM void func_02096fb0(void* arg0);

struct Struct_ov014_021844c4_2 {
	unsigned char unknown_0_0_ : 1;
	unsigned char unknown_0_1_ : 1;
	unsigned char unknown_0_2_ : 1;
	unsigned char unknown_0_3_ : 1;
	unsigned char unknown_0_4_ : 4;
};

struct Struct_ov014_021844c4_3 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	char unknown_c_[0x10];
	char unknown_1c_[0x1e];
	char unknown_3a_[2];
	int unknown_3c_;
	int unknown_40_;
	int unknown_44_;
	int unknown_48_;
	int unknown_4c_;
	int unknown_50_;
	int unknown_54_;
	int unknown_58_;
	int unknown_5c_;
	int unknown_60_;
	int unknown_64_;
	int unknown_68_;
	int unknown_6c_;
	int unknown_70_;
	int unknown_74_;
	int unknown_78_;
	unsigned char unknown_7c_;
	unsigned char unknown_7d_;
	unsigned char unknown_7e_;
	unsigned char unknown_7f_;
	unsigned char unknown_80_;
	unsigned char unknown_81_;
	struct Struct_ov014_021844c4_2 unknown_82_;
	char unknown_83_[3];
	short unknown_86_[5];
	char unknown_90_[8];
	int unknown_98_;
	struct Struct_ov014_021845d4 unknown_9c_;
};

// USA: func_ov014_021844c4
extern "C" ARM void func_ov014_021844c4(struct Struct_ov014_021844c4_3* arg0) {
	*(int*)((char*)&data_ov014_02189800 + 0xc) = 0;
	arg0->unknown_0_ = 0;
	arg0->unknown_4_ = 0;
	arg0->unknown_8_ = 0;
	func_02096fb0(arg0->unknown_c_);
	func_ov014_02188bd0((struct Struct_ov014_021844c4*)arg0->unknown_1c_);
	arg0->unknown_3c_ = 0;
	arg0->unknown_40_ = 0;
	arg0->unknown_44_ = 0;
	arg0->unknown_48_ = 0;
	arg0->unknown_4c_ = 0;
	arg0->unknown_50_ = 0;
	arg0->unknown_54_ = 0;
	arg0->unknown_58_ = 0;
	arg0->unknown_5c_ = 0;
	arg0->unknown_60_ = 0;
	arg0->unknown_64_ = 0;
	arg0->unknown_68_ = 0;
	arg0->unknown_6c_ = -1;
	arg0->unknown_70_ = -1;
	arg0->unknown_78_ = -1;
	arg0->unknown_74_ = 0;
	arg0->unknown_7c_ = 0;
	arg0->unknown_7d_ = 0;
	arg0->unknown_7e_ = 0;
	arg0->unknown_7f_ = 0;
	arg0->unknown_80_ = 0;
	arg0->unknown_81_ = 0;
	arg0->unknown_82_.unknown_0_0_ = 0;
	arg0->unknown_82_.unknown_0_1_ = 0;
	arg0->unknown_82_.unknown_0_2_ = 0;
	arg0->unknown_82_.unknown_0_4_ = 0;
	arg0->unknown_82_.unknown_0_3_ = 0;
	for (int var0 = 0; var0 < 5; var0++) {
		arg0->unknown_86_[var0] = -1;
	}
	arg0->unknown_98_ = 0;
	func_ov014_021845d4(&arg0->unknown_9c_);
	memset((char*)arg0 + 0x90, 0, 3);
	((unsigned char*)arg0)[0x93] = 0;
	((unsigned char*)arg0)[0x94] = 0;
}
