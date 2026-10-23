#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Graphics/Model3D.h"
#include "World/Object3D.h"

struct Struct_0203d028;
extern "C" void func_0207df50(struct Struct_0203d028* arg0);

#if defined(jpn)
static const int kModel=0x34b8, kObject=0x34bc, kFields=0x51c;
#else
static const int kModel=0x36c8, kObject=0x36cc, kFields=0x56c;
#endif

// USA: func_ov017_0219bc50
extern "C" ARM void func_ov017_0219bc50(unsigned char* arg0) {
	((Model3D*)(*(unsigned char**)(arg0 + kModel)))->Clear();
	((Object3D*)(*(void**)(arg0 + kObject)))->Initialize();
	((SafeAllocator*)(arg0 + 0xb0))->Reset();
	func_0207df50((struct Struct_0203d028*)(arg0 + kFields));
}
