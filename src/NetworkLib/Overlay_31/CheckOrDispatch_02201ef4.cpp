#include <globaldefs.h>

typedef unsigned long CPSInAddr;

extern "C" CPSInAddr func_ov031_02200730(CPSInAddr);
extern "C" unsigned char* func_ov031_02200bfc(CPSInAddr);

// USA: func_ov031_02201ef4
ARM int CheckOrDispatch_02201ef4(CPSInAddr address) {
    CPSInAddr targetAddress = func_ov031_02200730(address);
    if (targetAddress == 0) return 1;
    return (int)func_ov031_02200bfc(targetAddress);
}
