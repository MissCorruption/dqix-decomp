#include <globaldefs.h>

extern "C" void func_020d8654();
extern "C" void func_0202dd28();
extern "C" int func_0202b1f4(int* arg0, int arg1);
extern "C" void func_0202aec0(void* arg0);
extern "C" void func_020d8694(void);
void SleepCurrentContext(unsigned int);
extern "C" int func_0202d6a8(void);
extern "C" void func_0202dd98(void);
extern "C" int func_0202df10();

// USA: func_0202b0f4
extern "C" ARM unsigned char func_0202b0f4(int* arg0) {
    int var0 = 0;
    func_020d8654();
    if (*arg0 != 0) {
        int var1 = 0;
        while (func_0202d6a8() == 3) {
            var1++;
            if (var1 > 5000) {
                func_0202dd28();
                var0 = func_0202b1f4(arg0, 1);
                if (var0 == 3) {
                    func_0202aec0(arg0);
                    func_020d8694();
                    return (unsigned char)var0;
                }
                break;
            }
            SleepCurrentContext(1);
        }

        func_0202dd98();
        var0 = func_0202b1f4(arg0, 1);
        if (var0 == 3) {
            func_0202aec0(arg0);
            func_020d8694();
            return (unsigned char)var0;
        }
        if (var0 != 0) {
            func_0202dd28();
            var0 = func_0202b1f4(arg0, 1);
            if (var0 == 3) {
                func_0202aec0(arg0);
                func_020d8694();
                return (unsigned char)var0;
            }
        }
        func_0202df10();
    }
    func_0202aec0(arg0);
    func_020d8694();
    return (unsigned char)var0;
}
