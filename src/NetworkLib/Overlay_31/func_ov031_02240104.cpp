#include <globaldefs.h>

extern "C" void* func_ov031_02240310(void);
extern "C" int func_ov031_022403f4(void);
extern "C" void func_ov031_02240324(void);
extern "C" ARM int func_ov031_02240104(void* obj);

struct Session02240ee8 {
    int field0;
    char pad4[0x34];
    int field38;
    char pad3c[4];
    int field40;
};

extern int data_ov031_02290fc0;

// USA: func_ov031_02240ee8
extern "C" ARM int func_ov031_02240ee8(Session02240ee8* obj) {
    int err;
    if (obj->field0 != 0) {
        err = 0xb;
        data_ov031_02290fc0 = err;
        return err - 0xc;
    }
    if (obj->field40 == 1 && obj->field38 == 0) {
        err = 0xb;
        data_ov031_02290fc0 = err;
        return err - 0xc;
    }
    func_ov031_02240310();
    int result = func_ov031_02240104(obj);
    if (result >= 0) {
        obj->field0 = 1;
        func_ov031_022403f4();
    } else {
        data_ov031_02290fc0 = 1;
    }
    func_ov031_02240324();
    return result;
}
