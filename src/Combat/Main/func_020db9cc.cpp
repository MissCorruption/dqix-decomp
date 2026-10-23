#include <globaldefs.h>

#if defined(jpn)
#define func_020db9cc func_020dd3d4
#endif

extern "C" void func_020d8654(void);
extern "C" void func_020db264(void* arg0, int arg1, int arg2, int arg3, int arg4);
struct Struct_020db264;
extern "C" void func_020db360(struct Struct_020db264* arg0, int arg1);
struct Struct_020db3f4_3;
extern "C" void func_020db844(struct Struct_020db3f4_3* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020db894(void* arg0);
extern "C" void func_020d8694(void);

// USA: func_020db9cc
extern "C" ARM int func_020db9cc(void* arg0, int arg1, int arg2, int arg3) {
    char* var0 = (char*)arg0;
    if (*(int*)(var0 + 0x40) == 0) return 1;
    if (*(unsigned char*)(var0 + 0x50) == 0) return 1;
    if (*(unsigned char*)(var0 + 0x6c) == 0) return 1;

    int var1 = 1;
    func_020d8654();

    if (arg2 == -16 || arg2 == 0x10) {
        if (*(unsigned char*)(var0 + 0x3c) != arg1) {
            var1 = 1;
        } else {
            *(short*)(var0 + 0x66) = (short)arg2;
            *(short*)(var0 + 0x68) = (arg3 << 1) + 4;
            if (*(short*)(var0 + 0x68) >= 0 && *(short*)(var0 + 0x6a) == arg2) {
                func_020db264(arg0, 1, *(unsigned char*)(var0 + 0x52), *(unsigned char*)(var0 + 0x53), *(unsigned char*)(var0 + 0x54));
                var1 = 0;
                *(short*)(var0 + 0x68) = 0;
            }
        }
    } else {
        func_020db894(arg0);
        func_020db264(arg0, 0, 0, 0, 0);
        func_020db844((struct Struct_020db3f4_3*)arg0, arg1, arg2, arg3);
        func_020db360((struct Struct_020db264*)arg0, var1);
        var1 = 0;
    }

    func_020d8694();
    return var1;
}
