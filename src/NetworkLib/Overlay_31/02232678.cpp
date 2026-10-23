#include <globaldefs.h>

extern "C" unsigned char func_ov031_0223607c(int);
extern "C" void* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
struct Obj0223bcc8;
extern "C" void func_ov031_0223bcc8(Obj0223bcc8*, int, int);
struct MenuItems02232678 {
    void* field0;
    void* primary[3];
    void* secondary[3];
};
struct MenuState02232678 {
    unsigned char index;
    char unknown[3];
    MenuItems02232678* items;
};
extern MenuState02232678 data_ov031_02290cc0;
extern const unsigned char data_ov031_02249060[4];
struct MenuCoordinate02232678 { unsigned short x, y; };
extern MenuCoordinate02232678 data_ov031_02249082[6];

// USA: func_ov031_02232678
extern "C" ARM void func_ov031_02232678(void) {
    int key;
    int index = 0;
    do {
        key = func_ov031_0223607c(index);
        if (key == 255) {
            key = 3;
        } else {
            int slot = index + 3;
            data_ov031_02290cc0.items->secondary[index] = func_ov031_0223be70(0, 17, 1);
            func_ov031_0223bbd8(data_ov031_02290cc0.items->secondary[index], -1,
                data_ov031_02249082[slot].x, data_ov031_02249082[slot].y);
            func_ov031_0223bcc8((Obj0223bcc8*)data_ov031_02290cc0.items->secondary[index], -1, 3);
        }
        data_ov031_02290cc0.items->primary[index] = func_ov031_0223be70(0, data_ov031_02249060[key], 1);
        func_ov031_0223bbd8(data_ov031_02290cc0.items->primary[index], -1,
            data_ov031_02249082[index].x, data_ov031_02249082[index].y);
        func_ov031_0223bcc8((Obj0223bcc8*)data_ov031_02290cc0.items->primary[index], -1, 3);
        ++index;
    } while (index < 3);
}
