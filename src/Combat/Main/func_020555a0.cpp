#include <globaldefs.h>

extern "C" void func_0207df90(char* obj);
extern "C" void func_0207dfac(char* obj);
extern "C" void func_020553ec(void* obj, int a, int b, int c, int d);

struct Obj020555a0 {
    int field0;
    int field4;
    char* field8;
    int fieldc;
    int field10;
};

// USA: func_020555a0
extern "C" ARM void func_020555a0(struct Obj020555a0* obj) {
    if (obj->field4 != 0 && obj->fieldc != 0 && obj->field10 != 0 && obj->field8 != 0) {
        func_0207df90(obj->field8);
        func_020553ec(obj, obj->field0, obj->field4, obj->fieldc, obj->field10);
        func_0207dfac(obj->field8);
    }
    obj->field8 = 0;
    obj->fieldc = 0;
    obj->field10 = 0;
}
