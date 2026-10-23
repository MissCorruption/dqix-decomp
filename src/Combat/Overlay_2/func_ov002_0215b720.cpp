#include "Resource/ActionDataTables.h"
#include <globaldefs.h>

#if defined(jpn)
enum { StateOffset = 0xa80, StateA = 7, StateB = 0x12, StateC = 8 };
#else
enum { StateOffset = 0xbb8, StateA = 6, StateB = 0x11, StateC = 7 };
#endif

extern "C" void* func_02079e2c(char* p, int key);
extern "C" void* func_020e2ff8(void);
extern "C" void func_020e3368(unsigned char* base, unsigned char val);

struct Field18_0215b720 {
    unsigned int field0 : 5;
    unsigned int field1 : 7;
    unsigned int rest : 20;
};

// USA: func_ov002_0215b720
extern "C" ARM int func_ov002_0215b720(unsigned char* obj, int key) {
    int result = 0;

    if (*(int*)(obj + 0x1000 + StateOffset) == StateA || *(int*)(obj + 0x1000 + StateOffset) == StateB) {
        if (key == 0x198 || key == 0x22 || key == 0x310) {
            result = 1;
        }
    } else {
        ActionDataTables* table = func_020797dc();
        void* entry = func_02079e2c((char*)table, key);
        if (entry != 0) {
            struct Field18_0215b720* f = (struct Field18_0215b720*)((char*)entry + 0x18);
            if (f->field1 == 2 || f->field1 == 7 || f->field1 == 0x4f || f->field1 == 0x50 || f->field1 == 0x12 || f->field1 == 0x1a) {
                result = 1;
            }
            if (f->field0 == 5 && *(int*)(obj + 0x1000 + StateOffset) == StateC) {
                result = 1;
            }
        }
    }

    if (result != 0) {
        void* ctx = func_020e2ff8();
        func_020e3368((unsigned char*)ctx, 1);
    }

    return result;
}
