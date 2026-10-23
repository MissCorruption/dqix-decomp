#include <globaldefs.h>

struct Struct_ov017_021d4a38_2 {
	int unknown_0_;
	union { int unknown_4_; float unknown1_4_; };
};

struct Struct_ov017_021d4e38 {
	int unknown_0_;
	int unknown_4_;
	union { int unknown_8_; float unknown1_8_; };
};

struct Struct_ov017_021d4e38_2 {
	unsigned char unknown_0_[0x14];
	Struct_ov017_021d4a38_2* unknown_14_;
	unsigned char unknown_18_[4];
	int unknown_1c_;
	unsigned char unknown_20_[4];
	int unknown_24_;
	int unknown_28_;
	unsigned char unknown_2c_[4];
	int unknown_30_;
	void* unknown_34_;
	Struct_ov017_021d4e38* unknown_38_;
	int unknown_3c_;
	int unknown_40_;
	unsigned char unknown_44_[4];
	int unknown_48_;
	int unknown_4c_;
	int unknown_50_;
};

struct Struct_ov017_021d4a38;
struct Struct_ov017_021d4a78_2;
struct Struct_ov017_021d4a98_2;
struct Struct_ov017_021d4ab8_2;
struct Struct_ov017_021d4b9c_2;
struct Struct_ov017_021d4bc8_2;
struct Struct_ov017_021d4bc8;
struct Struct_ov017_021d4af8_2;
struct Struct_ov017_021d4af8;

extern "C" void func_ov017_021d4a38(Struct_ov017_021d4a38* arg0, Struct_ov017_021d4a38_2 arg1);
extern "C" void func_ov017_021d4a64(Struct_ov017_021d4a38_2* arg0, Struct_ov017_021d4a38_2* arg1);
extern "C" void func_ov017_021d4a78(Struct_ov017_021d4a78_2* arg0, int arg1);
extern "C" void func_ov017_021d4a98(Struct_ov017_021d4a98_2* arg0, int arg1);
extern "C" void func_ov017_021d4ab8(Struct_ov017_021d4ab8_2* arg0, int arg1);
extern "C" int func_ov017_021d4b9c(Struct_ov017_021d4b9c_2* arg0);
extern "C" void func_ov017_021d4bc8(Struct_ov017_021d4bc8_2* arg0, Struct_ov017_021d4bc8* arg1, int arg2);
extern "C" int func_ov017_021d4af8(Struct_ov017_021d4af8_2* arg0, Struct_ov017_021d4af8* arg1, int arg2);

extern "C" int func_ov017_021d49ac(Struct_ov017_021d4a38_2 arg0);
extern "C" int func_ov017_021d4980(Struct_ov017_021d4a38_2 arg0, void* arg1);
extern "C" void func_ov017_021d4ad8(Struct_ov017_021d4e38_2* arg0, float arg1);

extern "C" void func_0200159c(int arg0) __attribute__((noreturn));
extern "C" void func_02001878(void* arg0);
extern "C" float _d2f(double v);
extern "C" double func_02009424(double arg0);
extern "C" double func_02008dcc(double arg0);
extern int data_020eec2c;

#define IsTruthy func_ov017_021d49ac
#define Resolve func_ov017_021d4980
#define PushFloat func_ov017_021d4ad8
#define PushInt(s, v) func_ov017_021d4a78((Struct_ov017_021d4a78_2*)(s), (v))
#define PushCode(s, v) func_ov017_021d4a98((Struct_ov017_021d4a98_2*)(s), (v))
#define PushRef(s, v) func_ov017_021d4ab8((Struct_ov017_021d4ab8_2*)(s), (v))
#define Push(s, v) func_ov017_021d4a38((Struct_ov017_021d4a38*)(s), (v))

#define SlotPtr(base, idx) (((Struct_ov017_021d4a38_2*)(base)) + (idx))
#define Slot(base, idx) (*SlotPtr((base), (idx)))

inline Struct_ov017_021d4a38_2 inline_ov017_021d4e38(Struct_ov017_021d4e38_2* arg0) {
	arg0->unknown_14_--;
	return *arg0->unknown_14_;
}

#pragma opt_dead_assignments off

// USA: func_ov017_021d4e38
extern "C" ARM void func_ov017_021d4e38(Struct_ov017_021d4e38_2* arg0, Struct_ov017_021d4e38* arg1) {
	Struct_ov017_021d4a38_2 var0, var1, var2;

	arg0->unknown_38_ = arg1;
	for (;;) {
		switch (arg0->unknown_38_->unknown_0_) {
		case 1:
			switch (arg0->unknown_38_->unknown_8_) {
			case 1:
				Push(arg0, Slot(arg0->unknown_30_, arg0->unknown_38_->unknown_4_));
				break;
			case 0x40:
				Push(arg0, Slot(arg0->unknown_1c_, arg0->unknown_38_->unknown_4_));
				break;
			case 2: {
				int var3 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
				Push(arg0, SlotPtr(arg0->unknown_30_, arg0->unknown_38_->unknown_4_)[var3]);
				break;
			}
			case 4: {
				int var4 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
				Push(arg0, Slot(Slot(arg0->unknown_30_, arg0->unknown_38_->unknown_4_).unknown_4_, var4));
				break;
			}
			case 8:
				Slot(arg0->unknown_30_, arg0->unknown_38_->unknown_4_).unknown_0_ = 1;
				Push(arg0, Slot(arg0->unknown_30_, arg0->unknown_38_->unknown_4_));
				break;
			case 0x200:
				Slot(arg0->unknown_1c_, arg0->unknown_38_->unknown_4_).unknown_0_ = 1;
				Push(arg0, Slot(arg0->unknown_1c_, arg0->unknown_38_->unknown_4_));
				break;
			case 0x10: {
				int var5 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
				SlotPtr(arg0->unknown_30_, arg0->unknown_38_->unknown_4_)[var5].unknown_0_ = 1;
				Push(arg0, SlotPtr(arg0->unknown_30_, arg0->unknown_38_->unknown_4_)[var5]);
				break;
			}
			case 0x20: {
				int var6 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
				Slot(Slot(arg0->unknown_30_, arg0->unknown_38_->unknown_4_).unknown_4_, var6).unknown_0_ = 1;
				Push(arg0, Slot(Slot(arg0->unknown_30_, arg0->unknown_38_->unknown_4_).unknown_4_, var6));
				break;
			}
			}
			break;

		case 2:
			switch (arg0->unknown_38_->unknown_8_) {
			case 1:
				PushRef(arg0, (int)SlotPtr(arg0->unknown_30_, arg0->unknown_38_->unknown_4_));
				break;
			case 0x40:
				PushRef(arg0, (int)SlotPtr(arg0->unknown_1c_, arg0->unknown_38_->unknown_4_));
				break;
			case 2: {
				int var7 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
				PushRef(arg0, (int)(SlotPtr(arg0->unknown_30_, arg0->unknown_38_->unknown_4_) + var7));
				break;
			}
			case 4: {
				int var8 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
				PushRef(arg0, (int)SlotPtr(Slot(arg0->unknown_30_, arg0->unknown_38_->unknown_4_).unknown_4_, var8));
				break;
			}
			case 8:
				PushRef(arg0, (int)SlotPtr(arg0->unknown_30_, arg0->unknown_38_->unknown_4_));
				break;
			case 0x200:
				PushRef(arg0, (int)SlotPtr(arg0->unknown_1c_, arg0->unknown_38_->unknown_4_));
				break;
			case 0x10: {
				int var9 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
				PushRef(arg0, (int)(SlotPtr(arg0->unknown_30_, arg0->unknown_38_->unknown_4_) + var9));
				break;
			}
			case 0x20: {
				int var10 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
				PushRef(arg0, (int)SlotPtr(Slot(arg0->unknown_30_, arg0->unknown_38_->unknown_4_).unknown_4_, var10));
				break;
			}
			}
			break;

		case 5:
			var0 = inline_ov017_021d4e38(arg0);
			func_ov017_021d4a64((Struct_ov017_021d4a38_2*)inline_ov017_021d4e38(arg0).unknown_4_, &var0);
			Push(arg0, var0);
			break;

		case 3:
			if (arg0->unknown_38_->unknown_4_ == 1) {
				PushInt(arg0, arg0->unknown_38_->unknown_8_);
			} else if (arg0->unknown_38_->unknown_4_ == 3) {
				PushCode(arg0, arg0->unknown_48_ + arg0->unknown_38_->unknown_8_);
			} else if (arg0->unknown_38_->unknown_4_ == 2) {
				PushFloat(arg0, arg0->unknown_38_->unknown1_8_);
			}
			break;

		case 4:
			arg0->unknown_14_--;
			break;

		case 16:
			if (arg0->unknown_40_ == 0) {
				arg0->unknown_38_ = (Struct_ov017_021d4e38*)(arg0->unknown_48_ + arg0->unknown_38_->unknown_4_);
				continue;
			}
			break;

		case 18:
			if (arg0->unknown_40_ != 0) {
				break;
			}
			if (IsTruthy(inline_ov017_021d4e38(arg0))) {
				if (arg0->unknown_38_->unknown_8_ != 0) {
					PushInt(arg0, 1);
				}
				arg0->unknown_38_ = (Struct_ov017_021d4e38*)(arg0->unknown_48_ + arg0->unknown_38_->unknown_4_);
				continue;
			}
			break;

		case 17:
			if (arg0->unknown_40_ != 0) {
				break;
			}
			if (!IsTruthy(inline_ov017_021d4e38(arg0))) {
				if (arg0->unknown_38_->unknown_8_ != 0) {
					PushInt(arg0, 0);
				}
				arg0->unknown_38_ = (Struct_ov017_021d4e38*)(arg0->unknown_48_ + arg0->unknown_38_->unknown_4_);
				continue;
			}
			break;

		case 14:
			var1 = inline_ov017_021d4e38(arg0);
			var2 = inline_ov017_021d4e38(arg0);
			if (var2.unknown_0_ == 0 && var1.unknown_0_ == 0) {
				switch (arg0->unknown_38_->unknown_4_) {
				case 0x28: PushInt(arg0, var1.unknown_4_ == var2.unknown_4_); break;
				case 0x29: PushInt(arg0, var1.unknown_4_ != var2.unknown_4_); break;
				case 0x2a: PushInt(arg0, var2.unknown_4_ < var1.unknown_4_); break;
				case 0x2b: PushInt(arg0, var2.unknown_4_ <= var1.unknown_4_); break;
				case 0x2c: PushInt(arg0, var2.unknown_4_ > var1.unknown_4_); break;
				case 0x2d: PushInt(arg0, var2.unknown_4_ >= var1.unknown_4_); break;
				}
			} else {
				float var11, var12;
				if (var2.unknown_0_ == 1 && var1.unknown_0_ == 1) {
					var11 = var1.unknown1_4_;
					var12 = var2.unknown1_4_;
				} else if (var2.unknown_0_ == 0 && var1.unknown_0_ == 1) {
					var11 = var1.unknown1_4_;
					var12 = (float)var2.unknown_4_;
				} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 0) {
					var11 = (float)var1.unknown_4_;
					var12 = var2.unknown1_4_;
				} else {
					func_0200159c(-1);
				}
				switch (arg0->unknown_38_->unknown_4_) {
				case 0x28: PushInt(arg0, var11 == var12); break;
				case 0x29: PushInt(arg0, var11 != var12); break;
				case 0x2a: PushInt(arg0, var12 < var11); break;
				case 0x2b: PushInt(arg0, var12 <= var11); break;
				case 0x2c: PushInt(arg0, var12 > var11); break;
				case 0x2d: PushInt(arg0, var12 >= var11); break;
				}
			}
			break;

		case 6:
			var1 = inline_ov017_021d4e38(arg0);
			var2 = inline_ov017_021d4e38(arg0);
			if (var2.unknown_0_ == 0 && var1.unknown_0_ == 0) {
				PushInt(arg0, var2.unknown_4_ + var1.unknown_4_);
			} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 1) {
				PushFloat(arg0, var2.unknown1_4_ + var1.unknown1_4_);
			} else if (var2.unknown_0_ == 0 && var1.unknown_0_ == 1) {
				PushFloat(arg0, (float)var2.unknown_4_ + var1.unknown1_4_);
			} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 0) {
				PushFloat(arg0, var2.unknown1_4_ + (float)var1.unknown_4_);
			} else {
				func_0200159c(-1);
			}
			break;

		case 7:
			var1 = inline_ov017_021d4e38(arg0);
			var2 = inline_ov017_021d4e38(arg0);
			if (var2.unknown_0_ == 0 && var1.unknown_0_ == 0) {
				PushInt(arg0, var2.unknown_4_ - var1.unknown_4_);
			} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 1) {
				PushFloat(arg0, var2.unknown1_4_ - var1.unknown1_4_);
			} else if (var2.unknown_0_ == 0 && var1.unknown_0_ == 1) {
				PushFloat(arg0, (float)var2.unknown_4_ - var1.unknown1_4_);
			} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 0) {
				PushFloat(arg0, var2.unknown1_4_ - (float)var1.unknown_4_);
			} else {
				func_0200159c(-1);
			}
			break;

		case 8:
			var1 = inline_ov017_021d4e38(arg0);
			var2 = inline_ov017_021d4e38(arg0);
			if (var2.unknown_0_ == 0 && var1.unknown_0_ == 0) {
				PushInt(arg0, var2.unknown_4_ * var1.unknown_4_);
			} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 1) {
				PushFloat(arg0, var2.unknown1_4_ * var1.unknown1_4_);
			} else if (var2.unknown_0_ == 0 && var1.unknown_0_ == 1) {
				PushFloat(arg0, (float)var2.unknown_4_ * var1.unknown1_4_);
			} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 0) {
				PushFloat(arg0, var2.unknown1_4_ * (float)var1.unknown_4_);
			} else {
				func_0200159c(-1);
			}
			break;

		case 9:
			var1 = inline_ov017_021d4e38(arg0);
			var2 = inline_ov017_021d4e38(arg0);
			if (var2.unknown_0_ == 0 && var1.unknown_0_ == 0) {
				PushInt(arg0, var2.unknown_4_ / var1.unknown_4_);
			} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 1) {
				PushFloat(arg0, var2.unknown1_4_ / var1.unknown1_4_);
			} else if (var2.unknown_0_ == 0 && var1.unknown_0_ == 1) {
				PushFloat(arg0, (float)var2.unknown_4_ / var1.unknown1_4_);
			} else if (var2.unknown_0_ == 1 && var1.unknown_0_ == 0) {
				PushFloat(arg0, var2.unknown1_4_ / (float)var1.unknown_4_);
			} else {
				func_0200159c(-1);
			}
			break;

		case 10: {
			int var13 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
			int var14 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
			PushInt(arg0, var14 % var13);
			break;
		}

		case 24: {
			int var15 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
			int var16 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
			PushInt(arg0, var15 & var16);
			break;
		}

		case 25: {
			int var17 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
			int var18 = Resolve(inline_ov017_021d4e38(arg0), arg0->unknown_34_);
			PushInt(arg0, var17 | var18);
			break;
		}

		case 11:
			var1 = inline_ov017_021d4e38(arg0);
			if (var1.unknown_0_ == 0) {
				PushInt(arg0, -var1.unknown_4_);
			} else if (var1.unknown_0_ == 1) {
				PushFloat(arg0, -var1.unknown1_4_);
			} else {
				func_0200159c(-1);
			}
			break;

		case 29:
			var1 = inline_ov017_021d4e38(arg0);
			if (var1.unknown_0_ == 0) {
				PushFloat(arg0, _d2f(func_02009424((double)((float)var1.unknown_4_))));
			} else if (var1.unknown_0_ == 1) {
				PushFloat(arg0, _d2f(func_02009424((double)(var1.unknown1_4_))));
			} else {
				func_0200159c(-1);
			}
			break;

		case 30:
			var1 = inline_ov017_021d4e38(arg0);
			if (var1.unknown_0_ == 0) {
				PushFloat(arg0, _d2f(func_02008dcc((double)((float)var1.unknown_4_))));
			} else if (var1.unknown_0_ == 1) {
				PushFloat(arg0, _d2f(func_02008dcc((double)(var1.unknown1_4_))));
			} else {
				func_0200159c(-1);
			}
			break;

		case 26:
			var1 = inline_ov017_021d4e38(arg0);
			if (var1.unknown_0_ == 0) {
				PushInt(arg0, var1.unknown_4_ == 0);
			} else {
				func_0200159c(-1);
			}
			break;

		case 12:
			var1 = inline_ov017_021d4e38(arg0);
			if (var1.unknown_0_ == 0) {
				PushFloat(arg0, (float)var1.unknown_4_);
			} else if (var1.unknown_0_ == 1) {
				PushFloat(arg0, var1.unknown1_4_);
			} else {
				func_0200159c(-1);
			}
			break;

		case 13:
			var1 = inline_ov017_021d4e38(arg0);
			if (var1.unknown_0_ == 0) {
				PushInt(arg0, var1.unknown_4_);
			} else if (var1.unknown_0_ == 1) {
				PushInt(arg0, (int)var1.unknown1_4_);
			} else {
				func_0200159c(-1);
			}
			break;

		case 20: {
			arg0->unknown_14_ -= arg0->unknown_38_->unknown_4_;
			Struct_ov017_021d4a38_2* var19 = arg0->unknown_14_;
			int var20 = arg0->unknown_38_->unknown_4_;
			for (int var21 = 0; var21 < var20; var21++, var19++) {
				func_02001878(&data_020eec2c);
			}
			break;
		}

		case 21:
			arg0->unknown_14_ -= arg0->unknown_38_->unknown_4_;
			if (arg0->unknown_40_ == 0) {
				func_ov017_021d4bc8((Struct_ov017_021d4bc8_2*)arg0, (Struct_ov017_021d4bc8*)arg0->unknown_14_,
				                                arg0->unknown_38_->unknown_4_);
			}
			break;

		case 27:
			arg0->unknown_3c_ = 1;
			arg0->unknown_38_ = NULL;
			return;

		case 19:
			arg0->unknown_38_ = (Struct_ov017_021d4e38*)(func_ov017_021d4af8((Struct_ov017_021d4af8_2*)arg0,
			                                               (Struct_ov017_021d4af8*)(arg0->unknown_48_ + arg0->unknown_38_->unknown_8_),
			                                               (int)arg0->unknown_38_) - 0xc);
			break;

		case 15:
			var0 = inline_ov017_021d4e38(arg0);
			if (arg0->unknown_28_ != arg0->unknown_24_) {
				arg0->unknown_14_ = (Struct_ov017_021d4a38_2*)arg0->unknown_30_;
				arg0->unknown_38_ = (Struct_ov017_021d4e38*)func_ov017_021d4b9c((Struct_ov017_021d4b9c_2*)arg0);
			} else {
				arg0->unknown_4c_ = var0.unknown_4_;
				Push(arg0, var0);
				arg0->unknown_38_ = NULL;
				arg0->unknown_3c_ = 1;
				return;
			}
			Push(arg0, var0);
			break;

		case 23:
			if (arg0->unknown_40_ != 0) {
				break;
			}
			arg0->unknown_38_ = arg0->unknown_38_ + 1;
			return;

		case 28:
			arg0->unknown_50_++;
			if (arg0->unknown_40_ != 0) {
				arg0->unknown_40_ = 0;
				arg0->unknown_38_ = arg0->unknown_38_ + 1;
				return;
			}
			break;
		}
		arg0->unknown_38_++;
	}
}

#pragma opt_dead_assignments reset
