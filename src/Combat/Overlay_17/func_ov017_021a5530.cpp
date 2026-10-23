#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x4ec
#define REGION_FIELD_1 0x50c
#else
#define REGION_FIELD_0 0x6fc
#define REGION_FIELD_1 0x71c
#endif

#include "GameState/GameState.h"

struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);

extern "C" void func_ov017_021a5568(void* arg0);
struct Struct_02046a3c_2;
struct Struct_02046a3c;
extern "C" void func_02046a3c(Struct_02046a3c_2*, Struct_02046a3c*);

// USA: func_ov017_021a5530
extern "C" ARM void func_ov017_021a5530(char* arg0) {
	func_020397cc((struct Struct_02018300_3*)GameState::GetInstance()->GetUnknownGameObject(), 1);
	func_ov017_021a5568(*(void**)(arg0 + 0x3000 + REGION_FIELD_1));
	void* var0 = *(void**)(arg0 + 0x3000 + REGION_FIELD_0);
	func_02046a3c((Struct_02046a3c_2*)var0, (Struct_02046a3c*)(*(void**)(arg0 + 0x3000 + REGION_FIELD_1)));
}
