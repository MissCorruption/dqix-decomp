#include <globaldefs.h>

struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);

struct Struct_0205d81c;
struct Struct_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
    unsigned char unknown_b0_[0xc];
    short unknown_bc_;
    short unknown_be_;
    unsigned char unknown_c0_[0x5];
    unsigned char unknown_c5_;
};
extern "C" struct Struct_0205d0e0* func_0205d8c4(struct Struct_0205d81c* arg0);
extern "C" int func_0204c7e0(unsigned char* arg0);

struct Struct_0205a254;
struct Struct_0205a254_2 {
    unsigned char unknown_0_[0x15];
    unsigned char unknown_15_;
};
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);
extern "C" void func_0205a42c(struct Struct_0205a254* arg0, int arg1, int arg2);

struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);

extern "C" void func_0205ae8c(void* arg0);

// USA: func_ov003_0215c32c
extern "C" ARM void func_ov003_0215c32c(char* arg0) {
	struct Struct_0205a254_2* var0;

	if (*(unsigned char*)(arg0 + 0x59f) & 1) {
		struct Struct_020e28dc* var1 = *(struct Struct_020e28dc**)(arg0 + 0x570);
		if (var1 != NULL && func_020e28dc(var1)) {
			func_0205ae8c(arg0 + 0x98);
			return;
		}

		struct Struct_0205d0e0* var2 = func_0205d8c4((struct Struct_0205d81c*)(arg0 + 0xf4));
		if (var2 == NULL) return;
		if (!func_0204c7e0((unsigned char*)var2)) return;
		if (var2->unknown_c5_ & 0x20) return;

		short var3 = (short)(var2->unknown_ac_ * 8);
		short var4 = (short)(var2->unknown_ae_ * 8);
		var3 += var2->unknown_bc_;
		var4 += var2->unknown_be_;
		struct Struct_0205a254* var5 = *(struct Struct_0205a254**)(arg0 + 0xd4);
		if (var5 != NULL) {
			func_0205a370(var5, 0);
			var0 = func_0205a3d0(var5, 0);
			if (var0 != NULL) {
				var0->unknown_15_ |= 8;
			}
			func_0205a330((struct Struct_0205a330*)var5, *(int*)(arg0 + 0x574));
			func_020e27ec(var5, 0, var3 - 8, var4 - 2);
			func_0205a42c(var5, 0, 0);
		}
		func_0205ae8c(arg0 + 0x98);
		return;
	}

	{
		struct Struct_0205a254* var6 = *(struct Struct_0205a254**)(arg0 + 0xd4);
		if (var6 == NULL) return;
		var0 = func_0205a3d0(var6, 0);
		if (var0 != NULL) {
			var0->unknown_15_ &= ~8;
		}
	}
}
