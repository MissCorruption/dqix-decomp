#include <globaldefs.h>

extern int data_ov031_02291e04;

#if defined(jpn)
enum { Enum_ov031_022433d0_20 = 0x28, Enum_ov031_022433d0_36 = 0x1c };
#else
enum { Enum_ov031_022433d0_20 = 0x14, Enum_ov031_022433d0_36 = 0x24 };
#endif

// USA: func_ov031_022433d0
extern "C" ARM void func_ov031_022433d0(int arg0, int arg1) {
    switch (arg1) {
    case 0:
        if (arg0 == 3) {
            *(int*)((char*)&data_ov031_02291e04 + Enum_ov031_022433d0_20) = 1;
        }
        break;
    }
    *(int*)((char*)&data_ov031_02291e04 + 0xc) = 1;
    if (arg1 != 0) {
        *(int*)((char*)&data_ov031_02291e04 + Enum_ov031_022433d0_36) = 1;
    }
}
