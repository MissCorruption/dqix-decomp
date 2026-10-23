#include <globaldefs.h>
#if defined(jpn)
#define data_020f1ef0 data_020f205c
#define data_020f1ef4 data_020f2060
#endif

extern char data_0210cf88;
extern "C" void func_020bb948(void);
extern "C" int func_020bb908(void);
extern "C" void func_020bb7cc(void);
extern void* data_020f1ef0;
extern void* data_020f1ef4;

// USA: func_020bb780
extern "C" ARM void func_020bb780(void* arg0, int arg1) {
    *(int*)(&data_0210cf88 + 0x8) = (int)arg0;
    func_020bb948();
    if (arg1) {
        data_020f1ef0 = (void*)func_020bb7cc;
        data_020f1ef4 = (void*)func_020bb908;
    }
}
