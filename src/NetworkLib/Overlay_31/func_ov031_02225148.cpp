#include <globaldefs.h>

extern "C" void func_ov031_0222506c(void);
extern "C" void func_ov031_02236878(int index);

struct EntityStruct02225148 {
    unsigned char pad[0x120];
    signed char field120;   // 0x120
    signed char field121;   // 0x121
};

extern EntityStruct02225148* data_ov031_02250bfc;
extern signed char data_ov031_02248b9c[53][4];

// USA: func_ov031_02225148
extern "C" ARM void func_ov031_02225148(int dir) {
    signed char prev = data_ov031_02250bfc->field121;
    data_ov031_02250bfc->field121 = data_ov031_02248b9c[prev][dir];

    EntityStruct02225148* obj = data_ov031_02250bfc;
    signed char cur = obj->field121;
    if (cur == 0x2e && dir == 3) {
        obj->field120 = prev;
    } else if (cur == 0x33 && (dir == 1 || dir == 3)) {
        obj->field120 = prev;
    } else if (cur == 0x34 && (dir == 1 || dir == 3)) {
        if (prev != 0x2e) {
            obj->field120 = prev;
        }
    } else if (cur == -1) {
        if (obj->field120 == 0x23 || obj->field120 == 0x32) {
            obj->field121 = 0x23;
        } else {
            obj->field121 = 0x22;
        }
    } else if (cur == -2) {
        switch (obj->field120) {
        case 0:
        case 0x31:
            obj->field121 = 0x31;
            break;
        case 1:
        case 0x24:
            obj->field121 = 0x24;
            break;
        case 3:
        case 0x26:
            obj->field121 = 0x26;
            break;
        case 4:
        case 0x27:
            obj->field121 = 0x27;
            break;
        case 5:
        case 0x28:
            obj->field121 = 0x28;
            break;
        default:
            obj->field121 = 0x25;
            break;
        }
    } else if (cur == -3) {
        switch (obj->field120) {
        case 6:
        case 0x29:
            obj->field121 = 0x29;
            break;
        case 7:
        case 0x2a:
            obj->field121 = 0x2a;
            break;
        case 9:
        case 0x2c:
            obj->field121 = 0x2c;
            break;
        case 10:
        case 0x2d:
            obj->field121 = 0x2d;
            break;
        case 11:
        case 0x22:
        case 0x23:
        case 0x32:
            obj->field121 = 0x2e;
            break;
        default:
            obj->field121 = 0x2b;
            break;
        }
    } else if (cur == -4) {
        switch (obj->field120) {
        case 0:
        case 0x31:
            obj->field121 = 0;
            break;
        case 1:
        case 0x24:
            obj->field121 = 1;
            break;
        case 3:
        case 0x26:
            obj->field121 = 3;
            break;
        case 4:
        case 0x27:
            obj->field121 = 4;
            break;
        case 5:
        case 0x28:
            obj->field121 = 5;
            break;
        default:
            obj->field121 = 2;
            break;
        }
    } else if (cur == -5) {
        switch (obj->field120) {
        case 6:
        case 0x29:
            obj->field121 = 6;
            break;
        case 7:
        case 0x2a:
            obj->field121 = 7;
            break;
        case 9:
        case 0x2c:
            obj->field121 = 9;
            break;
        case 10:
        case 0x2d:
            obj->field121 = 10;
            break;
        case 11:
        case 0x22:
            obj->field121 = 11;
            break;
        case 0x23:
        case 0x32:
            obj->field121 = 0x32;
            break;
        default:
            obj->field121 = 8;
            break;
        }
    }
    func_ov031_0222506c();
    func_ov031_02236878(8);
}
