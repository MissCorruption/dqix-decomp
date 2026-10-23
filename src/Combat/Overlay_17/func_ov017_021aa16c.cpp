#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct ByteHeader0204693c;
extern "C" void func_0204693c(ByteHeader0204693c* p);

struct Obj021aa16c { unsigned char byte0; unsigned char pad[7]; unsigned char buf[8]; unsigned char b10; unsigned char b11; unsigned short h12; };

// USA: func_ov017_021aa16c
extern "C" ARM void func_ov017_021aa16c(Obj021aa16c* p) {
	GetGameResources();
	func_0204693c((ByteHeader0204693c*)p);
	p->byte0 = 0x3c;
	memset(p->buf, p->byte0 - 0x3d, 8);
	p->b10 = 0;
	p->b11 = 0;
	p->h12 = 0;
}
