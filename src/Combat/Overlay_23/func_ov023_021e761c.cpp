#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

namespace {
struct Struct_ov023_021e761c {
    unsigned char unknown_0_[0x78];
    Struct_ov023_021d9c7c unknown_78_;
    unsigned char unknown_134_[0x5dc - 0x78 - sizeof(Struct_ov023_021d9c7c)];
    int unknown_5dc_;
};
}

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(Struct_0205d1e0*);

struct Struct_0205d228;
extern "C" void func_0205d228(Struct_0205d228*);

struct Struct_0205d274;
extern "C" void func_0205d274(Struct_0205d274*);

extern "C" int func_0205ac40(void*, void*);

#if defined(jpn)
#define func_ov023_021e761c func_ov023_021e7868
extern "C" void func_ov023_021e7868(void* arg0);
#endif

// USA: func_ov023_021e761c
// JPN: func_ov023_021e7868
extern "C" ARM void func_ov023_021e761c(void *arg0) {
	Struct_ov023_021e761c* var0 = static_cast<Struct_ov023_021e761c*>(arg0);
	if (var0->unknown_5dc_ == 0) return;

	func_0205d1e0(((Struct_0205d1e0*)(&var0->unknown_78_)));
	func_0205d228(((Struct_0205d228*)(&var0->unknown_78_)));
	func_0205d274(((Struct_0205d274*)(&var0->unknown_78_)));

#if !defined(jpn)
	char* var1 = static_cast<char*>(arg0);
	if (*(int*)(var1 + 0x3c) != 2) return;
	if (*(int*)(var1 + 0x604) == 0) return;

	char *var2 = *(char**)(var1 + 0x608);
	if (var2 == NULL) return;

	unsigned char var3 = *(unsigned char*)(var1 + 0x60d);
	int var4;
	if (var3 != 0) {
		unsigned char var5 = *(unsigned char*)(var1 + 0x60c);
		var2 = var2 + var5 * 0x28;
		var4 = var5 + 3;
	} else {
		var2 = var2 + 0x50;
		var4 = 5;
	}
	*(unsigned char*)(var2 + 0x22) = (unsigned char)var4;
	*(int*)(var2 + 0x14) = 0xd0000;
	*(int*)(var2 + 0x18) = 0x10000;

	func_0205ac40(*(void**)(var1 + 0x604), var2);
#endif
}

#if defined(jpn)
#undef func_ov023_021e761c
#endif
