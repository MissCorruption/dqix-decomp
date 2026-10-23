#include <globaldefs.h>

extern "C" void func_020d8654();
extern "C" void func_0202dd28();
extern "C" int func_0202b1f4(int* outPtr, int unused);
extern "C" void func_0202aec0(void* obj);
extern "C" void func_020d8694(void);
void SleepCurrentContext(unsigned int);
extern "C" int func_0202d6a8(void);
extern "C" void func_0202dd98(void);
extern "C" int func_0202df10();

// USA: func_0202b0f4
extern "C" ARM unsigned char func_0202b0f4(int* obj) {
    int result = 0;
    func_020d8654();
    if (*obj != 0) {
        int count = 0;
        while (func_0202d6a8() == 3) {
            count++;
            if (count > 5000) {
                func_0202dd28();
                result = func_0202b1f4(obj, 1);
                if (result == 3) {
                    func_0202aec0(obj);
                    func_020d8694();
                    return (unsigned char)result;
                }
                break;
            }
            SleepCurrentContext(1);
        }

        func_0202dd98();
        result = func_0202b1f4(obj, 1);
        if (result == 3) {
            func_0202aec0(obj);
            func_020d8694();
            return (unsigned char)result;
        }
        if (result != 0) {
            func_0202dd28();
            result = func_0202b1f4(obj, 1);
            if (result == 3) {
                func_0202aec0(obj);
                func_020d8694();
                return (unsigned char)result;
            }
        }
        func_0202df10();
    }
    func_0202aec0(obj);
    func_020d8694();
    return (unsigned char)result;
}
