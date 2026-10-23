#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov027_021dd3f8 {
	Struct_ov027_021dd3f8* unknown_0_;
	union {
		unsigned int unknown_4_;
		struct {
			unsigned int unknown_4_0_ : 1;
			unsigned int unknown_4_1_ : 31;
		};
	};
	unsigned int unknown_8_;
	unsigned int unknown_c_;
};

struct Struct_ov027_021e3420_3 { void* unknown_0_; };
extern Struct_ov027_021e3420_3 data_ov027_021e3420;

extern "C" int func_ov027_021dd3b0(void);

// USA: func_ov027_021dd3f8
extern "C" ARM void func_ov027_021dd3f8(void* arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	Struct_ov027_021dd3f8* var0 = (Struct_ov027_021dd3f8*)arg0;
	ProcessorContext* var1 = (ProcessorContext*)data_ov027_021e3420.unknown_0_;
	if (!func_ov027_021dd3b0()) return;
	if (var0->unknown_4_0_) return;

	unsigned int var2 = arg3;
	if (var2 > 0x1f) {
		unsigned int var3 = GetContextPriority(var1);
		if (var2 == 0x20) {
			var2 = (var3 != 0) ? (var3 - 1) : 0;
		} else if (var2 == 0x21) {
			var2 = (var3 < 0x1f) ? (var3 + 1) : 0x1f;
		} else if (var2 == 0x22) {
			var2 = var3;
		} else {
			var2 = 0x1f;
		}
	}

	int var4 = DisableIRQInterrupts();
	var0->unknown_4_0_ = 1;
	var0->unknown_4_1_ = var2;
	var0->unknown_8_ = arg1;
	var0->unknown_c_ = arg2;

	Struct_ov027_021dd3f8** var5 = (Struct_ov027_021dd3f8**)((char*)var1 + 0xc0);
	Struct_ov027_021dd3f8* var6 = *var5;
	if (var6 == 0) {
		if (var0 == (Struct_ov027_021dd3f8*)((char*)var1 + 0xc4)) {
			data_ov027_021e3420.unknown_0_ = 0;
		}
		*var5 = var0;
		MarkContextReadyAndSwitch(var1);
	} else {
		Struct_ov027_021dd3f8* var7 = *(Struct_ov027_021dd3f8* volatile*)var5;
		if (var0 == (Struct_ov027_021dd3f8*)((char*)var1 + 0xc4)) {
			Struct_ov027_021dd3f8* var8 = var7;
			Struct_ov027_021dd3f8* var9 = var8->unknown_0_;
			if (var9 != 0) {
				do {
					var8 = var9;
					var9 = var8->unknown_0_;
				} while (var9 != 0);
			}
			var8->unknown_0_ = var0;
			data_ov027_021e3420.unknown_0_ = 0;
		} else {
			if (var2 < var7->unknown_4_1_) {
				*var5 = var0;
				var0->unknown_0_ = var7;
			} else {
				Struct_ov027_021dd3f8* var10 = var7;
				Struct_ov027_021dd3f8* var11;
				goto test_cur;
				do {
					var10 = var11;
				test_cur:
					var11 = var10->unknown_0_;
				} while (var11 != 0 && var2 >= var11->unknown_4_1_);
				var0->unknown_0_ = var11;
				var10->unknown_0_ = var0;
			}
		}
	}
	SetIRQInterruptState(var4);
}
