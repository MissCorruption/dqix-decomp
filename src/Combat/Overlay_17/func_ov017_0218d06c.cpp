#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

struct HeadNode02046b24;
extern "C" int func_02046b24(struct HeadNode02046b24** obj);
extern "C" void func_ov017_0218e674(GameResources* ov);
extern "C" void func_ov017_021a1ad0(GameResources* ov);
extern "C" void func_ov017_02197394(GameResources*);

struct EventAdvanceGate {
    unsigned char unknown0[0xb];
    unsigned char flag;
};

// USA: func_ov017_0218d06c
extern "C" ARM void func_ov017_0218d06c(GameResources* resources) {
    if (TestFlags00(resources, 0x800) != 0) return;
    int shouldAdvance = 0;
    if (func_02046b24((HeadNode02046b24**)resources->unknown_ptr_array_36fc[0]) != 0x26) {
        func_ov017_0218e674(resources);
        shouldAdvance = 1;
    }
    if (func_02046b24((HeadNode02046b24**)resources->unknown_ptr_array_36fc[0]) != 0x26 ||
        ((EventAdvanceGate*)resources->unknown_ptr_array_3afc[13])->flag == 0) {
        func_ov017_021a1ad0(resources);
    }
    if (shouldAdvance != 0) {
        func_ov017_02197394(resources);
    }
}
