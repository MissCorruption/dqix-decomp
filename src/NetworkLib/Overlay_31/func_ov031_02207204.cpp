#include <globaldefs.h>

extern "C" int func_ov031_022056bc(void*, unsigned short);

struct Struct_ov031_02207204 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
};

// USA: func_ov031_02207204
extern "C" ARM int func_ov031_02207204(void* arg0, struct Struct_ov031_02207204* arg1) {
	unsigned int var0 = arg1->unknown_2_;
	unsigned int var1 = ((int)var0 >> 8) & 0xff;
	unsigned int var2 = (var0 << 8) & 0xff00;
	unsigned short var3 = (unsigned short)(var1 | var2);
	return func_ov031_022056bc(arg0, var3);
}
