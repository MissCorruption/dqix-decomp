#include <globaldefs.h>

struct Struct_ov027_021da38c {
	char unknown_0_[0x4bc];
	struct Struct_ov027_021da38c *unknown_4bc_;
};

struct Struct_ov027_021dd940 {
	char unknown_0_[0x18];
	struct Struct_ov027_021da38c *unknown_18_;
};

extern struct Struct_ov027_021dd940 data_ov027_021dd940;

// USA: func_ov027_021dadac
extern "C" ARM void func_ov027_021dadac(struct Struct_ov027_021da38c *arg0) {
	struct Struct_ov027_021da38c *var0 = data_ov027_021dd940.unknown_18_;
	if (var0 == NULL) {
		data_ov027_021dd940.unknown_18_ = arg0;
	} else {
		struct Struct_ov027_021da38c *var1 = var0->unknown_4bc_;
		if (var1 != NULL) {
			do {
				var0 = var1;
				var1 = var0->unknown_4bc_;
			} while (var1 != NULL);
		}
		var0->unknown_4bc_ = arg0;
	}
	arg0->unknown_4bc_ = NULL;
}
