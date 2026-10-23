#include <globaldefs.h>

struct ByteHeader0204693c;
extern "C" void func_0204693c(ByteHeader0204693c* p);

struct Obj02046e08;
extern "C" void func_02046e08(struct Obj02046e08* obj);

struct Struct021b61e4 {
	unsigned char byte0;
	unsigned char pad1[0xfb];
	unsigned char byte_fc;
	unsigned char byte_fd;
	unsigned short half_fe;
	unsigned short half_100;
};

// USA: func_ov017_021b61e4
extern "C" ARM void func_ov017_021b61e4(struct Struct021b61e4* p) {
	func_0204693c((ByteHeader0204693c*)p);
	p->byte0 = 0x16;
	func_02046e08((struct Obj02046e08*)((char*)p + 0xc));
	p->byte_fc = 0;
	p->half_fe = 0;
	p->half_100 = 0;
	p->byte_fd = 0;
}
