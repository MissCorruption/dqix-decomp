#include <globaldefs.h>

struct Struct_ov031_02245548 {
	char unknown_0_[0x34];
	unsigned char unknown_34_;
	unsigned char unknown_35_;
	char unknown_36_[0x374 - 0x35 - 1];
	unsigned char unknown_374_;
	char unknown_375_[0x384 - 0x374 - 1];
	int unknown_384_;
};

// USA: func_ov031_02245548
extern "C" ARM void func_ov031_02245548(Struct_ov031_02245548* arg0) {
	if (arg0->unknown_374_ & 1) {
		switch (arg0->unknown_34_) {
		case 2:
			if (arg0->unknown_384_ < 0x3c000) arg0->unknown_384_ = arg0->unknown_384_ + 0x28;
			if (arg0->unknown_35_ == 6) arg0->unknown_384_ = 0x3c000;
			break;
		case 3:
			if (arg0->unknown_384_ < 0x46000) arg0->unknown_384_ = arg0->unknown_384_ + 0x51;
			if (arg0->unknown_35_ == 6) arg0->unknown_384_ = 0x46000;
			break;
		case 4:
			if (arg0->unknown_384_ < 0x77f33) arg0->unknown_384_ = arg0->unknown_384_ + 0xcc;
			if (arg0->unknown_35_ == 5) arg0->unknown_384_ = 0x78000;
			break;
		}
	} else if (arg0->unknown_374_ & 4) {
		switch (arg0->unknown_34_) {
		case 2:
			if (arg0->unknown_384_ < 0x64000) arg0->unknown_384_ = arg0->unknown_384_ + 0x51;
			if (arg0->unknown_35_ == 6) arg0->unknown_384_ = 0x64000;
			break;
		case 3:
			if (arg0->unknown_384_ < 0x77f85) arg0->unknown_384_ = arg0->unknown_384_ + 0x7a;
			if (arg0->unknown_35_ == 6) arg0->unknown_384_ = 0x78000;
			break;
		}
	} else if (arg0->unknown_374_ & 2) {
		switch (arg0->unknown_34_) {
		case 2:
			if (arg0->unknown_384_ < 0x3c000) arg0->unknown_384_ = arg0->unknown_384_ + 0x28;
			if (arg0->unknown_35_ == 6) arg0->unknown_384_ = 0x3c000;
			break;
		case 3:
			if (arg0->unknown_384_ < 0x46000) arg0->unknown_384_ = arg0->unknown_384_ + 0x51;
			if (arg0->unknown_35_ == 6) arg0->unknown_384_ = 0x46000;
			break;
		case 5:
			if (arg0->unknown_384_ < 0x77f33) arg0->unknown_384_ = arg0->unknown_384_ + 0xcc;
			if (arg0->unknown_35_ == 5) arg0->unknown_384_ = 0x78000;
			break;
		}
	}
}
