#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct ByteHeader0204693c;
extern "C" void func_0204693c(ByteHeader0204693c* p);

struct List020727d8 { void* entries; short capacity; short count; };
extern "C" void func_020727d8(List020727d8* list);

struct Obj021befe4 {
	unsigned char byte0;
	unsigned char pad1[7];
	int f8;
	List020727d8 listAtC;
	SafeAllocator alloc;
};

// USA: func_ov017_021befe4
extern "C" ARM void func_ov017_021befe4(Obj021befe4* p) {
	func_0204693c((ByteHeader0204693c*)p);
	p->byte0 = 0x35;
	p->f8 = 0;
	func_020727d8(&p->listAtC);
	p->alloc.ResetAllocatorPointer();
}
