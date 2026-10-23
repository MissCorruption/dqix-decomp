#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Matrix.h"

struct Flags0202ecfc;
extern "C" void func_0202ecfc(struct Flags0202ecfc* p);
extern "C" void func_0202e874(unsigned char* obj, unsigned short val);
struct AngleTrig0202e9a4;
extern "C" void func_0202e9a4(struct AngleTrig0202e9a4* obj, int angle);
extern "C" void func_0202e948(unsigned char* obj);
struct HalfwordTriple0202e98c;
extern "C" void func_0202e98c(struct HalfwordTriple0202e98c* p);
extern "C" void* func_0202ee84(char* obj);
extern "C" void* func_0202ee94(void* obj);
extern "C" void* func_0202eea4(void* obj);

// USA: func_ov000_0216d370
extern "C" ARM void func_ov000_0216d370(char* obj, int flagA, int flagB, int flagC) {
    *(unsigned char*)(obj + 0x220) = 0;
    if (*(int*)(obj + 0x224) >= 0) {
        Vector3i tmp1 = *(Vector3i*)(obj + 0x12c);
        Vector3i tmp2 = *(Vector3i*)(obj + 0x120);
        *(Vector3i*)(obj + 0x10) = tmp1;
        *(Vector3i*)(obj + 0x4) = tmp2;
    }

    *(int*)(obj + 0x224) = -1;
    *(int*)(obj + 0x238) = 0;
    *(int*)(obj + 0x23c) = 0;
    func_0202ecfc((struct Flags0202ecfc*)obj);
    *(unsigned char*)(obj + 0x260) = 0;

    if (flagA) {
        func_0202e874((unsigned char*)obj, 0);
    }

    if (flagB) {
        func_0202e9a4((struct AngleTrig0202e9a4*)obj, 0xf000);
    }

    if (flagC) {
        func_0202e948((unsigned char*)obj);
        func_0202e98c((struct HalfwordTriple0202e98c*)obj);
    }

    memset(obj + 0x264, 0, 0x14);
    func_0202ee84(obj);
    func_0202ee94(obj);
    func_0202eea4(obj);
}
