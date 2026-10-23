#include <globaldefs.h>

extern "C" void func_020c83b0(void);
void InitializeInterProcessorCommunication(void);
void InitializeGamecardBusOwnership(void);
extern "C" void func_020c84b4(void);
void InitializeInterruptContextBlock_020c6ad4(void);
extern "C" void func_020c6d48(void);
extern "C" void func_020c8a3c(void);
extern "C" void func_020cad00(void);
extern "C" void func_020c9288(void);
extern "C" void func_020c9a54(void);
extern "C" void func_020c745c(void);
extern "C" void func_020c983c(void);
extern "C" void func_020d15fc(void);
void InitializeCardReading(void);
extern "C" void func_020ce270(void);
extern "C" void func_020c8348(void);

// USA: func_020c8368
extern "C" ARM void func_020c8368(void) {
    func_020c83b0();
    InitializeInterProcessorCommunication();
    InitializeGamecardBusOwnership();
    func_020c84b4();
    InitializeInterruptContextBlock_020c6ad4();
    func_020c6d48();
    func_020c8a3c();
    func_020cad00();
    func_020c9288();
    func_020c9a54();
    func_020c745c();
    func_020c983c();
    func_020d15fc();
    InitializeCardReading();
    func_020ce270();
    func_020c8348();
}
