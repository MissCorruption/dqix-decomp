#include <globaldefs.h>
#if defined(jpn)
#define data_0210cf84 data_0210cc3c
#define data_020f1ee8 data_020f2054
#define data_020f1eec data_020f2058
#endif

extern "C" void func_020bb444(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020bb514(void);
extern "C" int func_020bb6f8(void);
extern "C" void func_020bb588();

extern unsigned short data_0210cf84;
extern void* data_020f1ee8;
extern void* data_020f1eec;

// USA: func_020bb48c
extern "C" ARM void func_020bb48c(unsigned int arg0, int arg1) {
    if (arg0 <= 2) {
        func_020bb444(4, 3, 2, 0, 1);
    } else {
        func_020bb444(4, 3, 0, 2, 1);
    }
    data_0210cf84 = (unsigned short)arg0;
    func_020bb514();
    if (arg1 != 0) {
        data_020f1ee8 = (void*)&func_020bb588;
        data_020f1eec = (void*)&func_020bb6f8;
    }
}
