#include <globaldefs.h>

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
struct Struct_0205e00c;
extern "C" Struct_0205e00c* func_0205e00c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_02050400(unsigned char* arg0, int arg1);
extern "C" void func_0205042c(unsigned char* arg0, unsigned char arg1);
extern "C" void func_02050440(unsigned char* arg0, int arg1);

// USA: func_ov012_021842a0
extern "C" ARM void func_ov012_021842a0(void* arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_0205d81c((struct Struct_0205d81c*)((char*)arg0 + 0xac), arg1);
    if (var0 == 0) {
        var0 = func_0205e00c((struct Struct_0205d81c*)((char*)arg0 + 0xac), arg1);
        if (var0 == 0) return;
    }
    if (arg3 != 0) {
        func_02050400((unsigned char*)var0, 1);
        func_0205042c((unsigned char*)var0, (unsigned char)arg2);
        func_02050440((unsigned char*)var0, (unsigned char)arg3);
    } else {
        func_02050400((unsigned char*)var0, 0);
        func_0205042c((unsigned char*)var0, 0);
        func_02050440((unsigned char*)var0, 0);
    }
}
