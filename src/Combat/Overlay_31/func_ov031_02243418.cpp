#include <globaldefs.h>

extern int data_ov031_02291e04;

#if defined(jpn)
enum { Enum_ov031_02243418_48 = 0x20 };
#else
enum { Enum_ov031_02243418_48 = 0x30 };
#endif

// USA: func_ov031_02243418
extern "C" ARM void func_ov031_02243418(void) {
	*(int*)((char*)&data_ov031_02291e04 + Enum_ov031_02243418_48) = 1;
}
