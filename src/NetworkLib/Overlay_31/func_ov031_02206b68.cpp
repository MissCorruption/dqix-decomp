#include <globaldefs.h>

struct BlockedContextList;
void UnblockContexts(struct BlockedContextList*);

extern "C" ARM void func_ov031_02206b68(void*);
unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

struct Struct_ov031_0224e22c;
struct Struct_ov031_0224e230;
extern "C" ARM void* func_ov031_02207108(Struct_ov031_0224e22c* arg0);
extern "C" ARM void* func_ov031_02207168(Struct_ov031_0224e230* arg0);

struct Struct_ov031_02206a68 { Struct_ov031_02206a68* unknown_0_; };
struct Struct_ov031_02206a68_2 { char unknown_0_[0x1c]; void (*unknown_1c_)(Struct_ov031_02206a68*); };
extern Struct_ov031_02206a68_2* data_ov031_022496a4;

struct Struct_ov031_02206a68_3 {
	char unknown_0_[0x100];
	int unknown_100_;
	Struct_ov031_02206a68* unknown_104_;
	unsigned short unknown_108_;
};

struct Struct_ov031_02206a68_4 {
	char unknown_0_[0x64];
	Struct_ov031_02206a68_3* unknown_64_;
	void* unknown_68_;
	char unknown_6c_[4];
	unsigned short unknown_70_;
	char unknown_72_;
	signed char unknown_73_;
};

// USA: func_ov031_02206a68
extern "C" ARM void func_ov031_02206a68(Struct_ov031_02206a68_4* arg0) {
	if (arg0 == NULL) return;
	arg0->unknown_70_ = 0;
	int var0 = 1;
	signed char var1 = arg0->unknown_73_;
	if (var1 != 0 && var1 != 4) var0 = 0;
	if (var0) {
		func_ov031_02206b68(arg0->unknown_68_);
		func_ov031_02206b68(arg0->unknown_64_);
	} else if (var1 == 1) {
		if (arg0->unknown_64_->unknown_104_ != NULL) {
			Struct_ov031_02206a68* var2 = arg0->unknown_64_->unknown_104_;
			do {
				Struct_ov031_02206a68* var3 = var2->unknown_0_;
				data_ov031_022496a4->unknown_1c_(var2);
				var2 = var3;
			} while (var2 != NULL);
		}
		arg0->unknown_64_->unknown_108_ = 0;
		arg0->unknown_64_->unknown_100_ = 0;
		arg0->unknown_64_->unknown_104_ = NULL;
		UnblockContexts((struct BlockedContextList*)((char*)arg0->unknown_64_ + 0x10c));
		func_ov031_02206b68(arg0->unknown_64_);
	} else if (var1 == 2) {
		func_ov031_02206b68(arg0->unknown_68_);
	}

	unsigned int var4 = DisableIRQInterrupts();
	func_ov031_02207108((Struct_ov031_0224e22c*)arg0);
	func_ov031_02207168((Struct_ov031_0224e230*)arg0);
	data_ov031_022496a4->unknown_1c_((Struct_ov031_02206a68*)arg0);
	SetIRQInterruptState(var4);
}
