#include <globaldefs.h>

struct Cont0207fdf0;
struct Obj0205eaa0;
struct Obj0208203c;

extern "C" void func_0207fdf0(struct Cont0207fdf0* obj, int key);
extern "C" void func_020813ec(void* obj, int key);
extern "C" short func_02080468(void* obj, int id);
extern "C" void func_02080c68(void* obj, int id, int value);
extern "C" void func_0208203c(struct Obj0208203c* obj);
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern "C" int func_ov003_02175f90(void* self);
extern "C" void func_ov003_02177938(void* self);
extern "C" void func_ov003_021749c0(char* base);
extern "C" int func_ov003_021765b4(void* self);
extern "C" int func_ov003_021766e8(void* self);

extern struct Obj0205eaa0 data_02108760;

// USA: func_ov003_0217b214
#if defined(jpn)
extern "C" ARM void func_ov003_0217b214(char* self) {
    void* elemObj = *(void**)(self + 0x818);
    int state = *(unsigned char*)(self + 0xf00 + 0xbb);

    if (state == 0) {
        *(short*)(self + 0xf00 + 0x90) = 0;
        *(short*)(self + 0xf00 + 0x92) = 0;
        func_0207fdf0((struct Cont0207fdf0*)elemObj, 0);
        (*(unsigned char*)(self + 0xf00 + 0xbb))++;
        return;
    }

    if (state == 1) {
        func_020813ec(elemObj, 0x15);
        *(short*)(self + 0xf00 + 0x7a) = 0x1d;
        if (*(short*)(self + 0xf00 + 0x8e) < 0) {
            *(short*)(self + 0xf00 + 0x8e) = func_02080468(elemObj, *(short*)(self + 0xf00 + 0x7a));
        }
        *(short*)((char*)elemObj + 0x2a) = *(short*)(self + 0xf00 + 0x8e);
        func_02080c68(elemObj, *(short*)(self + 0xf00 + 0x7a), 0);
        func_020813ec(elemObj, *(short*)(self + 0xf00 + 0x7a));
        func_0208203c((struct Obj0208203c*)(self + 0x808));
        *(void**)(self + 0xf74) = 0;
        (*(unsigned char*)(self + 0xf00 + 0xbb))++;
        func_ov003_02177938(self);
        func_ov003_021749c0(self);
        return;
    }

    if (state == 2) {
        *(void**)(self + 0xf74) = self + 0xf00 + 0x8e;
        func_ov003_02177938(self);
        func_02080c68(elemObj, 0x15, 1);
        if (func_ov003_021765b4(self)) {
            func_0205eaa0(&data_02108760, 1, 0);
            func_0208203c((struct Obj0208203c*)(self + 0x808));
            *(void**)(self + 0xf74) = 0;
            if (func_ov003_02175f90(self) == 0) {
                *(short*)(self + 0xf00 + 0xb2) = 0x24;
                func_0207fdf0((struct Cont0207fdf0*)elemObj, 0);
                *(unsigned char*)(self + 0xf00 + 0xbb) = 0;
                *(unsigned short*)(self + 0xf00 + 0xc2) |= 0x20;
                return;
            }
            func_0207fdf0((struct Cont0207fdf0*)elemObj, 0);
            *(unsigned char*)(self + 0xf00 + 0xba) = 8;
            *(unsigned char*)(self + 0xf00 + 0xbb) = 0;
            func_02080c68(elemObj, *(short*)(self + 0xf00 + 0x7a), 1);
            *(short*)(self + 0xf00 + 0x78) = *(short*)(self + 0xf00 + 0x7a);
            *(short*)(self + 0xf00 + 0x8a) = -1;
            *(short*)(self + 0xf00 + 0xb6) = 1;
            return;
        }
        if (func_ov003_021766e8(self)) {
            func_0207fdf0((struct Cont0207fdf0*)elemObj, 0);
            *(unsigned char*)(self + 0xf00 + 0xba) = 3;
            *(unsigned char*)(self + 0xf00 + 0xbb) = 0;
        }
    }
}
#else
extern "C" ARM void func_ov003_0217b214(char* self) {
    void* elemObj = *(void**)(self + 0x89c);
    int state = *(unsigned char*)(self + 0x1000 + 0x3f);

    if (state == 0) {
        *(short*)(self + 0x1000 + 0x14) = 0;
        *(short*)(self + 0x1000 + 0x16) = 0;
        func_0207fdf0((struct Cont0207fdf0*)elemObj, 0);
        (*(unsigned char*)(self + 0x1000 + 0x3f))++;
        return;
    }

    if (state == 1) {
        func_020813ec(elemObj, 0x15);
        *(short*)(self + 0xf00 + 0xfe) = 0x1d;
        if (*(short*)(self + 0x1000 + 0x12) < 0) {
            *(short*)(self + 0x1000 + 0x12) = func_02080468(elemObj, *(short*)(self + 0xf00 + 0xfe));
        }
        *(short*)((char*)elemObj + 0x36) = *(short*)(self + 0x1000 + 0x12);
        func_02080c68(elemObj, *(short*)(self + 0xf00 + 0xfe), 0);
        func_020813ec(elemObj, *(short*)(self + 0xf00 + 0xfe));
        func_0208203c((struct Obj0208203c*)(self + 0x88c));
        *(void**)(self + 0xff8) = 0;
        (*(unsigned char*)(self + 0x1000 + 0x3f))++;
        func_ov003_02177938(self);
        func_ov003_021749c0(self);
        return;
    }

    if (state == 2) {
        *(void**)(self + 0xff8) = self + 0x1000 + 0x12;
        func_ov003_02177938(self);
        func_02080c68(elemObj, 0x15, 1);
        if (func_ov003_021765b4(self)) {
            func_0205eaa0(&data_02108760, 1, 0);
            func_0208203c((struct Obj0208203c*)(self + 0x88c));
            *(void**)(self + 0xff8) = 0;
            if (func_ov003_02175f90(self) == 0) {
                *(short*)(self + 0x1000 + 0x36) = 0x24;
                func_0207fdf0((struct Cont0207fdf0*)elemObj, 0);
                *(unsigned char*)(self + 0x1000 + 0x3f) = 0;
                *(unsigned short*)(self + 0x1000 + 0x46) |= 0x20;
                return;
            }
            func_0207fdf0((struct Cont0207fdf0*)elemObj, 0);
            *(unsigned char*)(self + 0x1000 + 0x3e) = 8;
            *(unsigned char*)(self + 0x1000 + 0x3f) = 0;
            func_02080c68(elemObj, *(short*)(self + 0xf00 + 0xfe), 1);
            *(short*)(self + 0xf00 + 0xfc) = *(short*)(self + 0xf00 + 0xfe);
            *(short*)(self + 0x1000 + 0xe) = -1;
            *(short*)(self + 0x1000 + 0x3a) = 1;
            return;
        }
        if (func_ov003_021766e8(self)) {
            func_0207fdf0((struct Cont0207fdf0*)elemObj, 0);
            *(unsigned char*)(self + 0x1000 + 0x3e) = 3;
            *(unsigned char*)(self + 0x1000 + 0x3f) = 0;
            *(void**)(self + 0xff8) = 0;
        }
    }
}
#endif
