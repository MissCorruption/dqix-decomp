#include <globaldefs.h>

struct ByteHeader0204693c;
extern "C" void func_0204693c(ByteHeader0204693c* p);

struct Struct021ab250 {
	unsigned char byte0;
	unsigned char pad1[7];
	int w8;
	int wc;
	unsigned char pad2[4];
	int w14;
	int w18;
	int w1c;
};

// USA: func_ov017_021ab250
extern "C" ARM void func_ov017_021ab250(Struct021ab250* p) {
	func_0204693c((ByteHeader0204693c*)p);
	p->byte0 = 6;
	p->w8 = 0;
	p->wc = 0;
	p->w14 = 0;
	p->w18 = 0;
	p->w1c = 0;
}
