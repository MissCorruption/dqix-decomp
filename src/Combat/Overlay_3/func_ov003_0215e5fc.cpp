#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov003_0215e5fc;
extern "C" void func_ov003_0215e85c(struct Struct_ov003_0215e5fc* arg0, class SafeAllocator* arg1, int arg2);

extern int data_ov003_02180cb8;

// USA: func_ov003_0215e5fc
extern "C" ARM int func_ov003_0215e5fc(struct Struct_0201c1c8* arg0) {
	int var0 = ((Script::Parameter*)arg0)->ToInt();
	SafeAllocator* var1 = (SafeAllocator*)*(int*)&data_ov003_02180cb8;
	struct Struct_ov003_0215e5fc* var2 = (struct Struct_ov003_0215e5fc*)*(int*)((char*)&data_ov003_02180cb8 + 4);
	func_ov003_0215e85c(var2, var1, (short)var0);
	return 1;
}
