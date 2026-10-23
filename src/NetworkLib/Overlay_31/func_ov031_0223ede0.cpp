#include <globaldefs.h>

extern "C" {
    int func_ov031_0223e9d4(void*, void*, int, int);
    int func_ov031_02240074(void*, void*, int);
    void func_ov031_0223e454(void*, void*, int);
    int func_ov031_0223fb48(const char*);
    void func_ov031_0223ea84(void);
    int func_ov031_02240890(int, int, void*, int, void*, void*);
}

extern "C" int func_ov031_0223fa60(void);
extern "C" void func_ov031_0223faa8(void);
extern "C" void func_ov031_0223fb60(void*, unsigned int);

struct Struct_ov031_0223edb4;
extern "C" void func_ov031_0223edb4(void* arg0, struct Struct_ov031_0223edb4* arg1);

struct Struct_ov031_0223ede0;
extern "C" int func_ov031_022400e8(Struct_ov031_0223ede0*, int, int);

struct Struct_ov031_0223ede0_2;
extern "C" int func_ov031_02240050(Struct_ov031_0223ede0_2*, int, int);

typedef void* (*Type_ov031_02212c3c)(int, int);
extern Type_ov031_02212c3c data_ov031_02290dac;
extern void (*data_ov031_02290dc0)(void*);
extern int data_ov031_02290dbc;
extern int data_ov031_02290db8;
extern int data_ov031_02290db0;
extern int data_ov031_02290e88;
extern int data_ov031_02290e94;
extern int data_ov031_0224c6b0;
extern int data_ov031_0224c6d0;
extern int data_ov031_02290e28;
extern int data_ov031_0224c6dc;
extern int data_ov031_02290dd4;
extern int data_ov031_0224c6e4;
extern int data_ov031_0224c6f0;
extern int data_ov031_02290e0c;
extern int data_ov031_02290da8;
extern int data_ov031_0224c6f8;
extern int data_ov031_0224c700;
extern int data_ov031_0224c708;
extern int data_ov031_02290de0;
extern int data_ov031_0224c710;
struct Struct_ov031_02290dc8 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern Struct_ov031_02290dc8 data_ov031_02290dc8;
extern int data_ov031_0224c718;
extern int data_ov031_0224c720;
extern int data_ov031_0224c728;
extern int data_ov031_02290da4;
extern int data_ov031_0224c730;
extern int data_ov031_02290df4;
extern char data_ov031_02290eac[0x59];
extern int data_ov031_0224c738;

// USA: func_ov031_0223ede0
extern "C" ARM int func_ov031_0223ede0(void** arg0, void** arg1, void* arg2, void* arg3, int arg4, const char* arg5) {
    if (!func_ov031_0223e9d4(&data_ov031_02290e88, &data_ov031_02290e94, (int)arg2, (int)arg3)) {
        data_ov031_02290dbc = 8;
        return 0;
    }
    void* var0 = data_ov031_02290dac(0x24, 4);
    if (!var0) {
        data_ov031_02290dbc = 1;
        return 0;
    }
    *(int*)((char*)var0 + 8) = data_ov031_02290db8;
    *(int*)((char*)var0 + 0xc) = 0;
    if (!func_ov031_0223fa60()) {
        data_ov031_02290dc0(var0);
        data_ov031_02290dbc = 2;
        return 0;
    }
    int var1 = func_ov031_02240890(data_ov031_02290db0, 1, arg3, arg4, (void*)func_ov031_0223ea84, var0);
    if (!var1) {
        func_ov031_0223faa8();
        data_ov031_02290dc0(var0);
        data_ov031_02290dbc = 3;
        return 0;
    }
    *arg0 = var0;
    *arg1 = (void*)var1;
    if (!func_ov031_022400e8((Struct_ov031_0223ede0*)var1, (int)&data_ov031_0224c6b0, 1)) goto fail;
    if (!func_ov031_02240050((Struct_ov031_0223ede0_2*)var1, (int)&data_ov031_0224c6d0, (int)&data_ov031_02290e28)) goto fail;
    if (!func_ov031_02240074((void*)var1, &data_ov031_0224c6dc, (int)&data_ov031_02290dd4)) goto fail;
    if (!func_ov031_02240074((void*)var1, &data_ov031_0224c6e4, (int)&data_ov031_02290e88)) goto fail;
    if (!func_ov031_02240074((void*)var1, &data_ov031_0224c6f0, (int)&data_ov031_02290e0c)) goto fail;
    if (!func_ov031_02240074((void*)var1, &data_ov031_0224c6f8, data_ov031_02290da8)) goto fail;
    if (!func_ov031_02240074((void*)var1, &data_ov031_0224c700, (int)&data_ov031_02290e94)) goto fail;
    if (!func_ov031_02240074((void*)var1, &data_ov031_0224c708, (int)&data_ov031_02290de0)) goto fail;
    if (!func_ov031_02240074((void*)var1, &data_ov031_0224c710, (int)arg2)) goto fail;
    if (data_ov031_02290dc8.unknown_0_) {
        if (!func_ov031_02240074((void*)var1, &data_ov031_0224c718, data_ov031_02290dc8.unknown_0_)) goto fail;
    }
    if (data_ov031_02290dc8.unknown_4_) {
        if (!func_ov031_02240074((void*)var1, &data_ov031_0224c720, data_ov031_02290dc8.unknown_4_)) goto fail;
    }
    if (data_ov031_02290dc8.unknown_8_) {
        if (!func_ov031_02240074((void*)var1, &data_ov031_0224c728, data_ov031_02290dc8.unknown_8_)) goto fail;
    }
    if (data_ov031_02290da4) {
        if (!func_ov031_02240074((void*)var1, &data_ov031_0224c730, (int)&data_ov031_02290df4)) goto fail;
    }
    if (arg5) {
        int var2 = func_ov031_0223fb48(arg5);
        if (var2 > 0x40) {
            data_ov031_02290dbc = 7;
            func_ov031_0223edb4(var0, (struct Struct_ov031_0223edb4*)var1);
            return 0;
        }
        func_ov031_0223fb60(data_ov031_02290eac, 0x59);
        func_ov031_0223e454(data_ov031_02290eac, (void*)arg5, var2);
        if (!func_ov031_02240074((void*)var1, &data_ov031_0224c738, (int)&data_ov031_02290eac)) goto fail;
    }
    return 1;
fail:
    func_ov031_0223edb4(var0, (struct Struct_ov031_0223edb4*)var1);
    data_ov031_02290dbc = 1;
    return 0;
}
