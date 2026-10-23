#include <globaldefs.h>

extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" void func_ov002_0215b918(unsigned char* arg0, int arg1, int arg2, int arg3);

// USA: func_ov002_0215ece4
extern "C" ARM void func_ov002_0215ece4(void* arg0, char* arg1, int arg2, int arg3, int arg4) {
    char* var0 = (char*)arg0;
    char* var1;
    int var2;
    int var3 = 0;
    int var4 = (arg2 >= 0) && (arg2 <= 3);

    if (var4) {
        int var5;
        var2 = arg4 - 1;
        var1 = var0 + 0x1000;
        for (var5 = arg3; var5 < arg4; var5++) {
            void* var6 = *(void**)(var0 + (var5 << 2) + 0x2000 + 0x4a0);
            if (var6 != 0) {
                const char* var7 = *(const char**)var6;
                func_02041b70(arg1, var3, var7);
                if (var5 != var2) {
                    func_02042058(arg1, *(char**)(var1 + 0xbdc));
                }
                var3++;
            }
        }
    }

    unsigned char var8 = *(unsigned char*)(var0 + 0x2000 + 0x520);
    if (var8 == 0) {
        func_ov002_0215b918((unsigned char*)var0, 0x11, 0, 0);
        return;
    }
    func_ov002_0215b918((unsigned char*)var0, 0x11, arg3 / 8, (var8 + 7) / 8);
}
