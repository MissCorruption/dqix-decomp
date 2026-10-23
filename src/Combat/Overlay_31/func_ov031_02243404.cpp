#include <globaldefs.h>

extern int data_ov031_02291e04;

#if defined(jpn)
enum { Enum_ov031_02243404_28 = 0x24 };
#else
enum { Enum_ov031_02243404_28 = 0x1c };
#endif

// USA: func_ov031_02243404
extern "C" ARM void func_ov031_02243404(void) {
	*(int*)((char*)&data_ov031_02291e04 + Enum_ov031_02243404_28) = 1;
}
