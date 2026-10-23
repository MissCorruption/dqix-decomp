#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_02197e2c(void* arg0);
struct Struct_02046b1c;
extern "C" int func_02046b1c(struct Struct_02046b1c* arg0);
extern "C" void func_ov017_021975e4(void* arg0);
extern "C" void func_ov017_02197a64(void* arg0);
extern "C" void func_ov017_0219814c(void* arg0);
extern "C" void func_ov017_021982ac(void* arg0);
extern "C" void func_ov017_021983e0(void* arg0);
extern "C" void func_ov017_021984f4(void* arg0);
extern "C" void func_ov017_02198618(void* arg0);
extern "C" void func_ov017_021986fc(void* arg0);
extern "C" void func_ov017_02198aa0(void* arg0);
extern "C" void func_ov017_02198e30(void* arg0);

#if defined(jpn)
struct Struct_ov017_0219755c { unsigned char unknown_0_[0x444]; int unknown_424_; };
#else
struct Struct_ov017_0219755c { unsigned char unknown_0_[0x424]; int unknown_424_; };
#endif

// USA: func_ov017_0219755c
extern "C" ARM void func_ov017_0219755c(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_0219755c_1788=0x4ec};
#else
 enum {Enum_ov017_0219755c_1788=0x6fc};
#endif
	if (((Struct_ov017_0219755c*)func_02012fe4())->unknown_424_ != 0) return;

	func_ov017_02197e2c(arg0);
	if (func_02046b1c((struct Struct_02046b1c*)*(void**)(arg0 + 0x3000 + Enum_ov017_0219755c_1788)) != 0) return;

	func_ov017_021975e4(arg0);
	func_ov017_02197a64(arg0);
	func_ov017_0219814c(arg0);
	func_ov017_021982ac(arg0);
	func_ov017_021983e0(arg0);
	func_ov017_021984f4(arg0);
	func_ov017_02198618(arg0);
	func_ov017_021986fc(arg0);
	func_ov017_02198aa0(arg0);
	func_ov017_02198e30(arg0);
}
