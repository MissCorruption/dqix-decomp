#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov003_0215e4e4;
extern "C" void func_ov003_0215e750(struct Struct_ov003_0215e4e4* arg0, SafeAllocator* arg1, int arg2);

extern int data_ov003_02180cb8;

// USA: func_ov003_0215e4e4
extern "C" ARM int func_ov003_0215e4e4(struct Struct_0201c1c8* arg0) {
	int var0 = ((Script::Parameter*)arg0)->ToInt();
	SafeAllocator* var1 = (SafeAllocator*)*(int*)&data_ov003_02180cb8;
	struct Struct_ov003_0215e4e4* var2 = (struct Struct_ov003_0215e4e4*)*(int*)((char*)&data_ov003_02180cb8 + 4);
	func_ov003_0215e750(var2, var1, (short)var0);
	return 1;
}
