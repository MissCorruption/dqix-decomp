#include <globaldefs.h>

struct Struct_ov031_02222ce4;
extern Struct_ov031_02222ce4** data_ov031_02250bf0;
extern "C" void func_ov031_022238cc(void);
extern "C" void* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4*, int, int);

// USA: func_ov031_022237dc
extern "C" ARM void func_ov031_022237dc(int arg0, int arg1, int arg2, int arg3) {
    int var0 = 6;
    func_ov031_022238cc();
    int var1 = 0;
    do {
        data_ov031_02250bf0[var1] = (Struct_ov031_02222ce4*)func_ov031_0223be70(0, var0, 1);
        func_ov031_0223bcc8(data_ov031_02250bf0[var1], -1, 1);
        var1++;
        var0++;
    } while (var1 < 4);
    func_ov031_0223bbd8(data_ov031_02250bf0[0], -1, arg0, arg2);
    func_ov031_0223bbd8(data_ov031_02250bf0[1], -1, arg1, arg2);
    func_ov031_0223bbd8(data_ov031_02250bf0[2], -1, arg0, arg3);
    func_ov031_0223bbd8(data_ov031_02250bf0[3], -1, arg1, arg3);
}
