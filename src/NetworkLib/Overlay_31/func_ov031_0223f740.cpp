#include <globaldefs.h>

struct Struct_ov031_0223ea84;
extern "C" int func_ov031_022412e8(Struct_ov031_0223ea84*, int*);

struct Struct_ov031_0223ea84_2 {
	char unknown_0_[0x14];
	int unknown_14_;
};

// USA: func_ov031_0223f740
extern "C" ARM int func_ov031_0223f740(Struct_ov031_0223ea84* arg0, Struct_ov031_0223ea84_2* arg1) {
	int var0;
	int var1 = func_ov031_022412e8(arg0, &var0);
	return var1 == arg1->unknown_14_;
}
