#include <globaldefs.h>
#if defined(jpn)
#define data_020f10f8 data_020f120c
#define data_020f1118 data_020f122c
#define data_020f1108 data_020f121c
#endif

extern int data_020f10f8;
extern int data_020f1118;
extern int data_020f1108;
extern "C" void func_0208af78(void*);

// USA: func_0208b508
extern "C" ARM void* func_0208b508(void* arg0) {
    *(int**)((char*)arg0 + 0x4)  = &data_020f10f8;
    *(int**)((char*)arg0 + 0x24) = &data_020f1118;
    *(int**)((char*)arg0 + 0x40) = &data_020f1118;
    *(int**)((char*)arg0 + 0x5c) = &data_020f1108;
    *(int**)((char*)arg0 + 0x78) = &data_020f1118;
    func_0208af78(arg0);
    return arg0;
}
