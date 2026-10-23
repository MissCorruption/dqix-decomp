#include <globaldefs.h>

extern "C" void func_ov031_0221038c(int arg0);
extern "C" void func_ov031_022103dc(void* arg0);
struct BlockedContextList;
void UnblockContexts(struct BlockedContextList*);

extern void* data_ov031_0224e588;

// USA: func_ov031_022103f8
extern "C" ARM void func_ov031_022103f8(void* arg0) {
	func_ov031_0221038c(0);
	func_ov031_022103dc(arg0);
	UnblockContexts((BlockedContextList*)((char*)data_ov031_0224e588 + 0xa04));
}
