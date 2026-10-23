#include <globaldefs.h>

struct Struct_020b0e48 {
    unsigned int unknown_0_[2];
};

struct Struct_ov031_0223c308 {
    Struct_020b0e48 unknown_0_[2];
    unsigned char unknown_10_[0x660];
    void* unknown_670_;
    void* unknown_674_[2];
};

extern "C" void* func_ov031_0223cf4c(int arg0, int arg1);
extern "C" int func_ov031_0223beec(int arg0, int arg1, int arg2);
extern "C" int func_ov031_02227548(void);
extern "C" void* func_ov031_0223b61c(int arg0, int arg1, int arg2);
extern "C" void func_020b0e48(Struct_020b0e48* arg0, void* arg1);

extern Struct_ov031_0223c308* data_ov031_02290d38;
extern int data_ov031_0224c570[];
extern int data_ov031_0224c578[];

// USA: func_ov031_0223c308
extern "C" ARM void func_ov031_0223c308(void) {
    Struct_ov031_0223c308* var0 = (Struct_ov031_0223c308*)func_ov031_0223cf4c(0x680, 4);

    data_ov031_02290d38 = var0;
    data_ov031_02290d38->unknown_670_ = (void*)func_ov031_0223beec(0x20, (int)var0->unknown_10_, 0x30);

    switch (func_ov031_02227548()) {
    case 6: {
        int var1 = 0;
        int var2 = 0;
        do {
            data_ov031_02290d38->unknown_674_[var1] = func_ov031_0223b61c(data_ov031_0224c570[var1], 0, 4);
            func_020b0e48((Struct_020b0e48*)((char*)data_ov031_02290d38 + var2),
                               data_ov031_02290d38->unknown_674_[var1]);
            var1++;
            var2 += 8;
        } while (var1 < 2);
        break;
    }
    default: {
        int var3;
        int var4 = 0;
        var3 = 0;
        do {
            data_ov031_02290d38->unknown_674_[var4] = func_ov031_0223b61c(data_ov031_0224c578[var4], 0, 4);
            func_020b0e48((Struct_020b0e48*)((char*)data_ov031_02290d38 + var3),
                               data_ov031_02290d38->unknown_674_[var4]);
            var4++;
            var3 += 8;
        } while (var4 < 2);
        break;
    }
    }
}
