#include <globaldefs.h>

extern "C" int func_020becd4(void* obj);
extern "C" int func_0203ad88(void* obj, void* target, int arg2);
extern "C" int func_0203ad14(void* obj, int key, void* target, int arg3);
typedef int (*SetKeyAndApplyRecord0203ad14ShortFn)(void*, short, void*, int);

// USA: func_0203ae4c
extern "C" ARM void func_0203ae4c(void* obj, int doScale, void* target) {
    char* p = (char*)obj;

    if (*(void**)p == NULL) {
        return;
    }

    {
        short keySigned = *(short*)(p + 0xa4);
        if (keySigned < 0) {
            return;
        }

        if (doScale != 0) {
            int scaled;
            short savedKey;
            int result;

            if (target != NULL) {
                scaled = func_020becd4(target);
            } else {
                scaled = func_020becd4(p + 0x9c);
            }

            savedKey = *(short*)(p + 0xa4);
            result = func_0203ad88(obj, target, 0);
            *(int*)(p + 0xa8) = result;
            *(short*)(p + 0xa4) = savedKey;

            if (*(int*)(p + 0xa8) == scaled) {
                *(short*)(p + 0xa4) = -1;
            }
        } else {
            int rec = *(int*)(p + 0xa8);
            if (rec != 0) {
                ((SetKeyAndApplyRecord0203ad14ShortFn)func_0203ad14)(obj, keySigned, target, rec);
            }
        }
    }
}
