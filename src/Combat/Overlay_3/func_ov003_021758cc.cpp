#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021758cc_4154 = 0xfb6 };
enum { Enum_ov003_021758cc_2164 = 0x7f0 };
#else
enum { Enum_ov003_021758cc_4154 = 0x103a };
enum { Enum_ov003_021758cc_2164 = 0x874 };
#endif

#include "GameState/GameState.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" unsigned int func_ov003_02175898(char* arg0, void* arg1);
extern "C" void* func_02010828(GameState* arg0);

// USA: func_ov003_021758cc
extern "C" ARM int func_ov003_021758cc(char* arg0, int arg1) {
	short var0 = *(short*)(arg0 + Enum_ov003_021758cc_4154);
	struct Struct_0201099c_9* var1 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + Enum_ov003_021758cc_2164), var0);
	if (var1 == NULL)
		return 0;
	unsigned int var2 = arg1 * func_ov003_02175898(arg0, var1);
	int var3 = 0;
	if (var2 <= *(unsigned int*)((char*)func_02010828(GameState::GetInstance()) + 0xf6c))
		var3 = 1;
	return var3;
}
