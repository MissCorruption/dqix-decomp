#include <globaldefs.h>

typedef void* (*Type_ov031_02218fa0)(void*, int);

struct Struct_ov031_02218fa0_2 { unsigned int unknown_0_[3]; };

struct Struct_ov031_02218fa0 {
    Struct_ov031_02218fa0_2 unknown_0_;
};

struct Struct_ov031_0224e60c {
    void* unknown_0_;
    int unknown_4_;
    char unknown_8_[0x14 - 8];
    void* unknown_14_;
};

extern Struct_ov031_0224e60c data_ov031_0224e60c;
extern unsigned char data_ov031_0224a038;
extern unsigned char data_ov031_0224a04c;
extern "C" void VectorizedMemset(void* dst, int val, int size);
struct Struct_01ffd34c;
struct Mutex;
void ZeroInitializeMutex(Mutex*);
extern "C" void func_ov031_02219238(void);

// USA: func_ov031_02218fa0
extern "C" ARM int func_ov031_02218fa0(Struct_ov031_02218fa0* arg0) {
    Type_ov031_02218fa0 var0 = (Type_ov031_02218fa0)arg0->unknown_0_.unknown_0_[0];
    if (data_ov031_0224e60c.unknown_0_ != NULL) {
        return 4;
    }
    void* var1 = var0(&data_ov031_0224a038, 0x11f4);
    data_ov031_0224e60c.unknown_0_ = var1;
    if (var1 == NULL) {
        return 4;
    }
    VectorizedMemset(var1, 0, 0x11f4);

    *(unsigned int*)((char*)data_ov031_0224e60c.unknown_0_ + 0x1000 + 4) = 0xfffe7961;
    *(Struct_ov031_02218fa0_2*)((char*)data_ov031_0224e60c.unknown_0_ + 0x1108) = arg0->unknown_0_;

    if (data_ov031_0224e60c.unknown_14_ != NULL) {
        return 4;
    }
    void* var2 = var0(&data_ov031_0224a04c, 0x1c14);
    data_ov031_0224e60c.unknown_14_ = var2;
    if (var2 == NULL) {
        return 4;
    }
    data_ov031_0224e60c.unknown_4_ = 0;
    ZeroInitializeMutex((Mutex*)((char*)data_ov031_0224e60c.unknown_0_ + 0x1dc + 0x1000));
    func_ov031_02219238();
    return 0;
}
