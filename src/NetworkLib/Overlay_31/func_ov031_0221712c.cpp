#include <globaldefs.h>
#include "std_library_functions.h"

struct State0221712c {
    char padding_0x0[0x1008];
    int state;
    char code[4];
    char field_0x1010[0xf];
    char field_0x101f[0x33];
    char field_0x1052[0x12d];
    char field_0x117f[9];
    char field_0x1188[0x41];
    char padding_0x11c9[0x14b];
    void* field_0x1314;
};
struct Global0221712c { int field_0x0, field_0x4; State0221712c* object; char padding_0xc[8]; };
extern Global0221712c data_ov031_0224e5e8;
extern int data_020f3390;
extern char data_ov031_02249bf4[], data_ov031_02249bfc[], data_ov031_02249c08[];
extern char data_ov031_02249c14[], data_ov031_02249c1c[], data_ov031_02249c24[];
extern char data_ov031_02249c30[], data_ov031_02249c3c[];
extern "C" char* func_ov031_02218e2c(void*, const char*);
extern "C" void func_ov031_0221a218(void);
extern "C" int func_02005a94(const char*);
extern "C" int func_020059cc(const char*, char**, int);
int FindAndTerminate_02218e84(void*, int, char*, int);
extern "C" int func_ov031_02218ed8(void*, void*, char*, int);

// USA: func_ov031_0221712c
extern "C" ARM int func_ov031_0221712c() {
    char* end = NULL;
    end = func_ov031_02218e2c(data_ov031_0224e5e8.object->field_0x1314, data_ov031_02249bf4);
    if (end != NULL) func_ov031_0221a218();
    end = NULL;
    data_020f3390 = 0;
    int code = func_02005a94(func_ov031_02218e2c(data_ov031_0224e5e8.object->field_0x1314, data_ov031_02249bfc));
    if (data_020f3390 == 0x22) {
        data_ov031_0224e5e8.object->state = 0x4e85;
        return 12;
    }
    if (code != 200) {
        data_ov031_0224e5e8.object->state = code + 23000;
        return 18;
    }
    if (FindAndTerminate_02218e84(data_ov031_0224e5e8.object->field_0x1314, (int)data_ov031_02249c08,
                                  data_ov031_0224e5e8.object->code, 4) <= 0) {
        data_ov031_0224e5e8.object->state = 0x4e85;
        return 14;
    }
    code = func_020059cc(data_ov031_0224e5e8.object->code, &end, 10);
    State0221712c* object = data_ov031_0224e5e8.object;
    if (end != object->code + strlen(object->code)) {
        object->state = 0x4e85;
        return 12;
    }
    object->state = code + 20000;
    if (code < 100) {
    data_ov031_0224e5e8.object->field_0x1052[0] = 0;
    data_ov031_0224e5e8.object->field_0x101f[0] = 0;
    data_ov031_0224e5e8.object->field_0x117f[0] = 0;
    data_ov031_0224e5e8.object->field_0x1010[0] = 0;
    data_ov031_0224e5e8.object->field_0x1188[0] = 0;
    FindAndTerminate_02218e84(data_ov031_0224e5e8.object->field_0x1314, (int)data_ov031_02249c14,
                              data_ov031_0224e5e8.object->field_0x1052, 0x12d);
    FindAndTerminate_02218e84(data_ov031_0224e5e8.object->field_0x1314, (int)data_ov031_02249c1c,
                              data_ov031_0224e5e8.object->field_0x101f, 0x33);
    FindAndTerminate_02218e84(data_ov031_0224e5e8.object->field_0x1314, (int)data_ov031_02249c24,
                              data_ov031_0224e5e8.object->field_0x117f, 9);
    FindAndTerminate_02218e84(data_ov031_0224e5e8.object->field_0x1314, (int)data_ov031_02249c30,
                              data_ov031_0224e5e8.object->field_0x1010, 0xf);
    func_ov031_02218ed8(data_ov031_0224e5e8.object->field_0x1314, data_ov031_02249c3c,
                        data_ov031_0224e5e8.object->field_0x1188, 0x41);
    data_ov031_0224e5e8.object->field_0x1188[0x2b] = 0;
    if (code != 40) data_ov031_0224e5e8.field_0x0 = 1;
    else data_ov031_0224e5e8.field_0x0 = 2;
    }
    return 0;
}
