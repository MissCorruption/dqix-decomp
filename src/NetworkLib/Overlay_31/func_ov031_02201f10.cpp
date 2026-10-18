#include <globaldefs.h>
#include "System/ProcessorContext.h"

typedef unsigned long CPSInAddr;

struct CpsSocket02201f10 {
    char padding[0x1c];
    CPSInAddr remoteIp;
};

extern ProcessorContext data_ov031_0224cbe8;
int CheckOrDispatch_02201ef4(CPSInAddr);
extern "C" void func_ov031_02201550(unsigned char*, unsigned int, CpsSocket02201f10*, int, int);
extern "C" CPSInAddr func_ov031_02200730(CPSInAddr);
extern "C" void func_ov031_02200ccc(CPSInAddr);

// USA: func_ov031_02201f10
extern "C" ARM void func_ov031_02201f10(CpsSocket02201f10* socket, int type, int flags) {
    if (CheckOrDispatch_02201ef4(socket->remoteIp) ||
        data_02111304.activeContext != &data_ov031_0224cbe8) {
        func_ov031_02201550(0, 0, socket, type, flags);
    } else {
        func_ov031_02200ccc(func_ov031_02200730(socket->remoteIp));
    }
}
