#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

extern "C" void func_ov017_021acd7c(void* arg0);
struct Struct_02046a3c_2;
struct Struct_02046a3c;
extern "C" void func_02046a3c(Struct_02046a3c_2*, Struct_02046a3c*);

// USA: func_ov017_021acd30
extern "C" ARM void func_ov017_021acd30(char* arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3) {
	func_ov017_021acd7c(*(void**)(arg0 + 0x3000 + RG(0xb20, 0x900)));
	((unsigned char*)(*(void**)(arg0 + 0x3000 + RG(0xb20, 0x900))))[RG(0x27c, 0x20c)] = arg1;
	((unsigned char*)(*(void**)(arg0 + 0x3000 + RG(0xb20, 0x900))))[RG(0x27d, 0x20d)] = arg2;
	((unsigned char*)(*(void**)(arg0 + 0x3000 + RG(0xb20, 0x900))))[RG(0x27e, 0x20e)] = arg3;
	void* var0 = *(void**)(arg0 + 0x3000 + RG(0x6fc, 0x4ec));
	func_02046a3c((Struct_02046a3c_2*)var0, (Struct_02046a3c*)(*(void**)(arg0 + 0x3000 + RG(0xb20, 0x900))));
}
