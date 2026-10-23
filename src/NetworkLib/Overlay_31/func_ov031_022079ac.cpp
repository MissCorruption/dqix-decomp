#include <globaldefs.h>

struct Mutex;
void* LockMutex(Mutex*);
extern "C" void func_ov031_0220aa68(unsigned char arg0);
struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

// USA: func_ov031_022079ac
extern "C" ARM int func_ov031_022079ac(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 4);
    void* var1 = *(void**)((char*)var0 + 0x64);
    void* var2 = *(void**)((char*)var1 + 0xc4);
    LockMutex((Mutex*)((char*)var1 + 0xe0));
    int var3 = *(int*)((char*)arg0 + 0x10);
    if (var3 != 0) {
        *(int*)((char*)var2 + 0xc) = var3;
        func_ov031_0220aa68(1);
        *(unsigned char*)((char*)var0 + 0x73) = 4;
    } else {
        *(unsigned char*)((char*)var0 + 0x73) = 0;
        func_ov031_0220aa68(0);
        *(int*)((char*)var2 + 0xc) = 0;
    }
    UnlockMutex((Mutex*)((char*)var1 + 0xe0));
    return 0;
}
