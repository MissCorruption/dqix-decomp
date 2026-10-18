#include <globaldefs.h>

struct Args0223d884 { int a, b, c, d; };
struct Args0223bf2c { int a, b, c, d; };
void ForwardFourArgsAsStruct_0223d884(Args0223d884);
void ForwardFourArgsAsStruct_0223bf2c(Args0223bf2c);
typedef void (*Release_0223e120)(int);

struct Slot_0223e120 {
	int slots;
	int entries;
	int node;
	unsigned char pad[0x34];
};

extern "C" void func_ov031_0223cf70(void** slot);
extern "C" Slot_0223e120* data_ov031_02290d9c;
namespace DuplicatePool {
    extern "C" Slot_0223e120* data_ov031_02290d9c;
}

// USA: func_ov031_0223e120
extern "C" ARM void func_ov031_0223e120(void) {
	for (int i = 0; i < 2; i++) {
		((Release_0223e120)ForwardFourArgsAsStruct_0223d884)(data_ov031_02290d9c[i].node);
		((Release_0223e120)ForwardFourArgsAsStruct_0223bf2c)(data_ov031_02290d9c[i].slots);
	}
	func_ov031_0223cf70((void**)&DuplicatePool::data_ov031_02290d9c);
}
