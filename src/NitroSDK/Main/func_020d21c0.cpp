#include <globaldefs.h>

struct Struct_01ffd34c;
struct Mutex;
void ZeroInitializeMutex(Mutex*);
extern "C" void func_020d2930();

extern "C" void func_020d2220(void);

extern int data_02112750;
extern Struct_01ffd34c data_02112754;

// USA: func_020d21c0
extern "C" ARM void func_020d21c0(void) {
    if (data_02112750 != 0) {
        return;
    }
    data_02112750 = 1;
    ZeroInitializeMutex((Mutex*)&data_02112754);
    func_020d2220();
    func_020d2930();
}
