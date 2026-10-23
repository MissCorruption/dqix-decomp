#include <globaldefs.h>

struct Struct_ov016_0218f088_2 {
	char* unknown_0_;
	char unknown_4_[0x3b0];
	int unknown_3b4_;
};

struct Struct_ov016_0218f088 {
	char unknown_0_[8];
	signed char unknown_8_;
	signed char unknown_9_;
	char unknown_a_[0x2a];
	Struct_ov016_0218f088_2* unknown_34_;
	int (*unknown_38_)(Struct_ov016_0218f088_2*);
	char unknown_3c_[0x28];
	int* unknown_64_;
	char unknown_68_[0x34];
	unsigned int unknown_9c_;
	unsigned int unknown_a0_;
	#if !defined(jpn)
	int unknown_a4_;
#endif
	unsigned int unknown_a8_;
	int unknown_ac_[6];
	char unknown_c4_[8];
	int unknown_cc_;
	int unknown_d0_;
};

// USA: func_ov016_0218f088
extern "C" ARM int func_ov016_0218f088(Struct_ov016_0218f088* arg0) {
	int var0;
	int var1;

	if (arg0->unknown_9c_ > arg0->unknown_a0_) {
		return 0;
	}

	if ((*(unsigned short*)arg0->unknown_34_->unknown_0_ & 0x8000) != 0) {
#if !defined(jpn)
		arg0->unknown_a4_ = 1;
#endif
		var0 = 4;
	} else {
#if !defined(jpn)
		arg0->unknown_a4_ = 0;
#endif
		var0 = 0;
	}

	arg0->unknown_34_->unknown_0_ += arg0->unknown_38_(arg0->unknown_34_);

	if (arg0->unknown_8_ == 0x4e && arg0->unknown_9_ == 0x33) {
		arg0->unknown_34_->unknown_0_ += var0;
	}

	arg0->unknown_64_[arg0->unknown_ac_[0]] = arg0->unknown_34_->unknown_3b4_;

	arg0->unknown_cc_ = 0;
	arg0->unknown_d0_ = 0;

	for (var1 = 0; var1 < 6; var1++) {
		arg0->unknown_ac_[var1]++;
		if (arg0->unknown_a8_ == arg0->unknown_ac_[var1]) {
			arg0->unknown_ac_[var1] = 0;
		}
	}

	arg0->unknown_a0_ = arg0->unknown_a0_ + 1;
	return 1;
}
