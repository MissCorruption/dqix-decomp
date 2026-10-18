#include <globaldefs.h>

void SetField1e_0223521c();
void ClearField1e_02235204();
extern "C" void func_ov031_022238cc();
extern "C" int FastIntModulus(int, int);
extern "C" void func_ov031_02230120();
extern "C" void func_ov031_0222f9ec();
extern "C" void func_ov031_022351f8(int);
extern "C" void func_ov031_022308d4();
extern "C" void func_ov031_0223e2c0(int, void*);

struct TimerWork { char pad[0x38]; int field38; };
struct TimerContext { unsigned char state, field1, field2, field3; unsigned short timer; unsigned short field6; TimerWork* work; };
extern TimerContext data_ov031_02290ca0;

// USA: func_ov031_022306d4
extern "C" ARM void func_ov031_022306d4(void* argument) {
    SetField1e_0223521c();
    func_ov031_022238cc();
    data_ov031_02290ca0.timer += 6;
    int remainder = FastIntModulus(data_ov031_02290ca0.timer, 29);
    if (remainder >= 6) {
        func_ov031_02230120();
        return;
    }
    data_ov031_02290ca0.timer -= remainder;
    func_ov031_0222f9ec();
    func_ov031_022351f8(data_ov031_02290ca0.timer * 55 / 145);
    ClearField1e_02235204();
    func_ov031_022308d4();
    data_ov031_02290ca0.work->field38 = 0;
    func_ov031_0223e2c0(0, argument);
}
