#include <globaldefs.h>

struct NitroVM;
int NitroVM_Seek(struct NitroVM* vm, int position, int whence);
int NitroVM_ReadSync(struct NitroVM* vm, void* dst, int capacity);

struct Struct_020c00c8 {
    char unknown_0_[0xa4];
    int unknown_a4_;
};

// USA: func_020c00c8
extern "C" ARM int func_020c00c8(struct Struct_020c00c8* arg0, int arg1, int arg2, int arg3) {
    NitroVM_Seek((struct NitroVM*)((char*)arg0 + 0x5c), arg0->unknown_a4_ + arg3, 0);
    return NitroVM_ReadSync((struct NitroVM*)((char*)arg0 + 0x5c), (void*)arg1, arg2);
}
