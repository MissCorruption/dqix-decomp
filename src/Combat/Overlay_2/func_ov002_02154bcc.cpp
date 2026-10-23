#include <globaldefs.h>

extern "C" void func_0205ac40(void* arg0, void* arg1);

// USA: func_ov002_02154bcc
extern "C" ARM void func_ov002_02154bcc(int arg0, int arg1, void* arg2, int arg3, unsigned char arg4, unsigned char arg5) {
    int var0 = *(int*)((char*)arg2 + 0x40);
    char* var1 = NULL;
    if (var0 != 0) {
        unsigned short var2 = *(unsigned short*)((char*)arg2 + 0x4e);
        if ((unsigned int)arg3 < var2) {
            var1 = (char*)var0 + arg3 * 0x28;
        }
    }
    if (var1 == NULL) {
        return;
    }
    *(int*)(var1 + 0x14) = arg0 << 12;
    *(int*)(var1 + 0x18) = arg1 << 12;
    if (arg5 != 0xff) {
        var1[0x25] = arg5;
    }
    if (arg4 != 0xff) {
        var1[0x22] = arg4;
    }
    func_0205ac40(arg2, var1);
}
