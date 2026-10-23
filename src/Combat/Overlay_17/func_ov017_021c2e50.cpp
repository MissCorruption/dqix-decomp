#include <globaldefs.h>

extern "C" void func_0205ebec(void* obj);
extern "C" void func_0205ebc0(void* obj, int arg1, int arg2);
extern "C" void func_0205ebfc(void* obj, int a, int b);
unsigned long long GetCurrentTimestamp(void);
extern "C" void* func_0208a9b4(void);

struct Obj0208b494;
extern "C" void func_0208b494(struct Obj0208b494* obj);

extern int data_02108760;

// USA: func_ov017_021c2e50
extern "C" ARM void func_ov017_021c2e50(char* self) {
    func_0205ebec((void*)&data_02108760);
    func_0205ebc0((void*)&data_02108760, 0xb3, 0xb3);
    func_0205ebfc((void*)&data_02108760, 0, 0);
    *(unsigned long long*)(self + 0x98) = GetCurrentTimestamp();
    func_0208b494((struct Obj0208b494*)func_0208a9b4());
    self[0x8c] = 3;
}
