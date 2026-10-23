#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

void InitializeCardReading(void);
void SetReadContextPriority(unsigned int priority);
int GenerateLockOwnerID(void);
extern "C" void func_020c9be0(void);
extern "C" void func_020d0040(int arg0);
extern "C" int func_020d06fc(void* arg0);
extern "C" void func_020d0050(int arg0);

struct Struct_02108dfc {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
};

extern struct Struct_02108dfc data_02108dfc;
extern unsigned char data_020f0dc8;

// USA: func_020758a8
extern "C" ARM void func_020758a8(void) {
    int var0;

    InitializeCardReading();
    SetReadContextPriority(8);

    var0 = GenerateLockOwnerID();
    if (var0 == -3) {
        func_020c9be0();
    }

    data_02108dfc.unknown_2_ = (unsigned short)var0;
    func_020d0040((int)data_02108dfc.unknown_2_);
    func_020d06fc((void*)0x1001);
    func_020d0050((int)data_02108dfc.unknown_2_);
    data_020f0dc8 = 1;
}
