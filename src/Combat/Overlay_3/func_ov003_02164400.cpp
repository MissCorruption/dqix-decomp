#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"
#include "Input/Input.h"

#if defined(jpn)
#define REGIONAL_OFFSET(jp, us) jp
#else
#define REGIONAL_OFFSET(jp, us) us
#endif
#define HI(x) REGIONAL_OFFSET((x) - 0x1d8, x)
#define LO(x) REGIONAL_OFFSET((x) - 0x118, x)
enum { kRec37 = REGIONAL_OFFSET(0x1b, 0x37) };

struct Obj2081 { char pad[REGIONAL_OFFSET(0x2a, 0x36)]; unsigned short field36; };

struct Cont0207fe44;
struct FlagWord020466f4;
struct Obj0208203c;
struct Struct020a9ea4;
struct StatusOwner02081198;
struct StatusOwner02081164;
struct Struct021aeedc;
struct HeadList020469f8;
struct HeadNode020469f8;
struct ElementArray0202bad4;
struct Element0202bad4;
struct Random;
struct Obj0205eaa0;

extern "C" void* func_020d6c00(void);
extern "C" int* func_020936f8(void);
extern "C" void* func_0202ae18(void);

extern "C" void func_ov003_021612c0(void* self);
extern "C" int func_ov003_02161344(void* self);
extern "C" int func_ov003_02160a68(void* self);
extern "C" int func_ov003_02160854(void* self);
extern "C" void func_ov003_0215f698(void* self, void* countPtr);
struct Record37;
extern "C" void* func_ov003_0215f650(struct Record37* dst, struct Record37* src);
extern "C" void func_ov003_021666c4(void* self);
extern "C" void func_ov003_0216664c(void* self);
extern "C" void func_ov003_02160344(void* self);
extern "C" void func_ov017_021c36a0(void);
extern "C" void func_ov017_021aeedc(struct Struct021aeedc* p);
extern "C" void func_020469f8(struct HeadList020469f8* list, struct HeadNode020469f8* node);

extern "C" void func_0207fe44(struct Cont0207fe44* obj);
extern "C" void func_020939fc(unsigned char* obj);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);
extern "C" void func_020a9ea4(struct Struct020a9ea4* p);
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);
extern "C" int func_020811e8(struct Obj2081* obj, int key);
extern "C" void func_0207fdcc(struct Obj2081* obj, int key);
extern "C" void func_02080cec(void* obj, int a, int b);
extern "C" void func_0208108c(void* obj, int id);
extern "C" void func_020813ec(void* obj, int key);
extern "C" void func_0208203c(struct Obj0208203c* obj);
extern "C" void func_020939dc(void* obj);
extern "C" void func_0202b0f4(int* obj);
extern "C" void* func_020421a0(void);
extern "C" int func_020aad1c(int a, int b, int c, int d);
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern "C" short func_02080468(void* obj, int id);
extern "C" void func_02081198(struct StatusOwner02081198* owner, int id, int enable);
extern "C" void func_02081164(struct StatusOwner02081164* obj, int id, int value);
extern "C" int func_0202bae4(void* obj);
extern "C" struct Element0202bad4* func_0202bad4(struct ElementArray0202bad4* base, int index);
extern "C" int func_02001aec(int val, int key, int field5);
struct Random* GetBTRandom(void);
int NextRandomMax(struct Random* random, int maximum);
extern "C" void func_02080b54(void* obj, int id);
extern "C" int func_02080b40(void* obj, int id);
extern "C" struct Elem2081* func_02081da8(struct Obj2081*, int);
extern "C" int func_0204c7cc(unsigned char* obj);

extern int data_0211e33c;
extern struct Obj0205eaa0 data_02108760;

struct GlobalBig1000 { char pad[REGIONAL_OFFSET(0x7fb, 0x9ca)]; unsigned char flag9ca; };

struct RecordByte0 { unsigned char used : 1; unsigned char rank : 6; unsigned char hi : 1; };
struct Record37 {
    unsigned char used : 1;
    unsigned char rank : 6;
    unsigned char hi : 1;
    char name[REGIONAL_OFFSET(0x14, 0x30)];
    unsigned char id[6];
};

static inline int IsStatusFlagSet(unsigned char* self, unsigned int mask) {
    return (*(unsigned int*)(self + HI(0x464)) & mask) != 0;
}

static inline void SwapRecords(struct Record37* a, struct Record37* b) {
    struct Record37 temp = *b;
    func_ov003_0215f650(b, a);
    func_ov003_0215f650(a, &temp);
}

// USA: func_ov003_02164400
extern "C" ARM void func_ov003_02164400(unsigned char* self) {
    unsigned char* cur;
    void* flagWord;
    int* globalPtr;
    void* r8val;
    struct Obj2081* elementObj;
    short* msg484;
    unsigned char state;
    int work;
    flagWord = func_020d6c00();
    globalPtr = func_020936f8();
    r8val = func_0202ae18();
    state = self[HI(0x4a4)];
    elementObj = *(struct Obj2081**)(self + LO(0x324));
    msg484 = (short*)(self + HI(0x484));

    if (state == 0) {
        func_ov003_021612c0(self);
        self[HI(0x4a4)] = 1;
        return;
    }
    if (state == 1) {
        int result = func_ov003_02161344(self);
        if (result != -1) {
            if (result == 1) {
                self[HI(0x4a4)] = 2;
                func_0207fe44((struct Cont0207fe44*)elementObj);
                func_020939fc((unsigned char*)globalPtr);
            }
        } else {
            *(short*)(self + HI(0x488)) = 0x19;
            *(short*)(self + HI(0x48a)) = 0xa6;
            *(short*)(self + HI(0x474)) = 0xa6;
            msg484[0] = 5;
            msg484[1] = 1;
            self[HI(0x4a3)] = 0xa;
            self[HI(0x4a4)] = 1;
        }
        return;
    }
    if (state == 2) {
        msg484[0] = 0x35;
        self[HI(0x4a4)] = 3;
        if (self[HI(0x4be)] == 0) return;
        *(short*)(self + HI(0x484)) = 6;
        self[HI(0x4a4)] = 5;
        return;
    }
    if (state == 3) {
        func_ov003_021612c0(self);
        self[HI(0x4a4)] = 4;
        return;
    }
    if (state == 4) {
        int result = func_ov003_02161344(self);
        if (result != -1) {
            if (result == 1) {
                msg484[0] = 0x1a;
                self[HI(0x4a4)] = 0xb;
            }
        } else {
            msg484[0] = 0x34;
            msg484[1] = 1;
            self[HI(0x4a3)] = 0xa;
            self[HI(0x4a4)] = 0;
        }
        return;
    }
    if (state == 0xb) {
        if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() != 0) return;
        func_020466e4((unsigned int*)func_020d6c00(), 0x80);
        func_020a9ea4((struct Struct020a9ea4*)(self + HI(0x4b4)));
        self[HI(0x4a4)] = 0xc;
        return;
    }
    if (state == 0xc) {
        *(unsigned int*)(self + HI(0x464)) |= 0x2000000;
        BackgroundLoader::AddLockGlobal();
        BackgroundLoader::FreeAllocationsGlobal();
        if (func_020aad1c((int)(self + HI(0x4b4)), (int)&data_0211e33c, 0xa, 0) == 1) {
            self[HI(0x4be)] = 1;
            *(unsigned int*)(self + HI(0x464)) &= ~0x2000000u;
            *(short*)(self + HI(0x484)) = 0x30;
            *(short*)(self + HI(0x486)) = 6;
            self[HI(0x4a4)] = 5;
            func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0x80);
        }
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    if (state == 5) {
        if (func_020811e8(elementObj, 0x10) != 0) {
            *(int*)(self + HI(0x45c)) = 0;
            func_0207fdcc(elementObj, 0x10);
            *(unsigned int*)(self + HI(0x464)) |= 0x180000;
        } else {
            memset(self, 0, LO(0x226));
            *(short*)(self + LO(0x226)) = 0;
            func_02080cec(elementObj, 0xf, 0xf);
#if !defined(jpn)
            func_0208108c(elementObj, 0x43);
            func_0208108c(elementObj, 0x44);
#endif
            func_020813ec(elementObj, 0xf);
            func_0208203c((struct Obj0208203c*)(self + LO(0x308)));
            *(void**)(self + HI(0x470)) = 0;
            self[HI(0x4a4)] = 6;
            func_0202b0f4((int*)r8val);
            func_020939fc((unsigned char*)globalPtr);
            func_ov017_021c36a0();
            *(short*)(self + HI(0x476)) = 0;
            *(short*)(self + HI(0x478)) = 0;
            func_020939dc((unsigned char*)globalPtr);
            func_020466f4((struct FlagWord020466f4*)flagWord, 0x20);
        }
        return;
    }
    if (state == 6) {
        *(void**)(self + HI(0x470)) = 0;
        func_ov003_0215f698(self, self + LO(0x226));
        if (*(short*)(self + LO(0x226)) != 0) {
            *(unsigned short*)(self + HI(0x476)) = *(unsigned short*)(self + HI(0x476)) + *(int*)(self + HI(0x460));
            *(short*)(self + HI(0x478)) = 0;
            if (*(unsigned short*)(self + HI(0x476)) > 0x3c) {
                msg484[0] = 0xa;
                func_0207fdcc(elementObj, 0xf);
                self[HI(0x4a4)] = 7;
                return;
            }
        } else {
            *(short*)(self + HI(0x476)) = 0;
            *(unsigned short*)(self + HI(0x478)) = *(unsigned short*)(self + HI(0x478)) + *(int*)(self + HI(0x460));
            if (*(unsigned short*)(self + HI(0x478)) > 0x12c) {
                func_02080cec(elementObj, 0xf, 2);
                func_020813ec(elementObj, 0xf);
                func_0207fe44((struct Cont0207fe44*)elementObj);
                *(unsigned int*)(self + HI(0x464)) |= 0x80000;
                msg484[0] = 7;
                msg484[1] = 1;
                self[HI(0x4a3)] = 0xa;
                self[HI(0x4a4)] = 0;
                func_0202b0f4((int*)r8val);
                func_020939fc((unsigned char*)globalPtr);
                return;
            }
        }
        if (func_ov003_02160a68(self) == 0) return;
        {
            ((struct GlobalBig1000*)((char*)func_020421a0() + 0x1000))->flag9ca = 1;
        }
        func_0207fe44((struct Cont0207fe44*)elementObj);
        *(unsigned int*)(self + HI(0x464)) |= 0x80000;
        msg484[0] = 9;
        msg484[1] = 1;
        self[HI(0x4a3)] = 0xa;
        self[HI(0x4a4)] = 0;
        func_0202b0f4((int*)r8val);
        func_020939fc((unsigned char*)globalPtr);
        return;
    }
    if (state == 7) {
        short* countPtr = (short*)(self + LO(0x226));
        while (*(short*)(self + LO(0x226)) > 8) {
            struct Random* random = GetBTRandom();
            int idx = NextRandomMax(random, *(short*)(self + LO(0x226)));
            int j;
            memset(self + idx * kRec37, 0, kRec37);
            *countPtr = *countPtr - 1;
            for (j = idx; j != *(short*)(self + LO(0x226)); ) {
                func_ov003_0215f650((struct Record37*)(self + j * kRec37), (struct Record37*)(self + (j + 1) * kRec37));
                j++;
                self[j * kRec37] &= ~0x80;
            }
        }

        {
            struct Record37* recs = (struct Record37*)self;
            short j;
            int i;
            for (i = 0; i < ((short*)self)[REGIONAL_OFFSET(0x87, 0x113)] - 1; i = (short)(i + 1)) {
                struct Record37* b;
                struct Record37* a = &recs[(short)i];
                for (j = i + 1; j < *(short*)(self + LO(0x226)); j++) {
                    b = &recs[j];
                    if (strcmp(a->name, b->name) == 1) {
                        SwapRecords(a, b);
                    }
                }
            }
            for (i = 0; i < ((short*)self)[REGIONAL_OFFSET(0x87, 0x113)] - 1; i = (short)(i + 1)) {
                struct Record37* b;
                struct Record37* a = &recs[(short)i];
                for (j = i + 1; j < *(short*)(self + LO(0x226)); j++) {
                    b = &recs[j];
                    if (strcmp(a->name, b->name) == 0 && a->rank < b->rank) {
                        struct Record37 temp = *b;
                        func_ov003_0215f650(b, a);
                        func_ov003_0215f650(a, &temp);
                    }
                }
            }
        }

        {
        short* idp = (short*)0 + 7;
        func_02081198((struct StatusOwner02081198*)elementObj, (int)idp, 1);
        func_02081164((struct StatusOwner02081164*)elementObj, (int)idp, 1);
        func_020813ec(elementObj, (int)idp);
        }
        *(unsigned int*)(self + HI(0x464)) |= 0x180000;
        *(short*)(self + HI(0x488)) = 0x10;
        {
            short id = func_02080468(elementObj, *(short*)(self + HI(0x488)));
            *(short*)(self + HI(0x496)) = id;
            *(short*)(self + HI(0x474)) = id;
        }
        elementObj->field36 = *(short*)(self + HI(0x496));
        self[HI(0x4a0)] = 0;
        func_ov003_021666c4(self);
        func_0208203c((struct Obj0208203c*)(self + LO(0x308)));
        *(void**)(self + HI(0x470)) = 0;
        self[HI(0x4a4)] = 8;
        *(short*)(self + HI(0x478)) = 0;
        return;
    }
    if (state == 8) {
        *(unsigned int*)(self + HI(0x464)) |= 1;
        *(void**)(self + HI(0x470)) = self + HI(0x496);
        func_ov003_0216664c(self);
        *(unsigned short*)(self + HI(0x478)) = *(unsigned short*)(self + HI(0x478)) + *(int*)(self + HI(0x460));
        work = 0;
        if (*(unsigned short*)(self + HI(0x478)) > 0x3c) {
            func_ov003_021666c4(self);
            *(unsigned short*)(self + HI(0x478)) = *(unsigned short*)(self + HI(0x478)) - 0x3c;
            work = 1;
        }
        func_ov003_0215f698(self, self + LO(0x226));
        if (work == 0 && IsStatusFlagSet(self, 0x1000000)) {
            func_ov003_021666c4(self);
        }
        if (func_ov003_02160854(self) != 0) {
            int idx = func_02080468(elementObj, *(short*)(self + HI(0x488)));
            *(short*)(self + HI(0x498)) = *(short*)(self + HI(0x496)) - idx;
            *(short*)(self + HI(0x498)) = *(short*)(self + HI(0x498)) + (((signed char)self[HI(0x4a0)]) << 2);
            if (*(short*)(self + HI(0x498)) < *(short*)(self + LO(0x226))) {
                func_0205eaa0(&data_02108760, 1, 0);
                func_0208203c((struct Obj0208203c*)(self + LO(0x308)));
                *(void**)(self + HI(0x470)) = 0;
                struct RecordByte0* rb = (struct RecordByte0*)(self + (*(short*)(self + HI(0x498))) * kRec37);
                int inv = 4 - rb->rank;
                if (rb->used == 0) {
                    msg484[0] = 0x37;
                    self[HI(0x4a4)] = 5;
                } else if (inv == 0) {
                    msg484[0] = 0x33;
                    self[HI(0x4a4)] = 5;
                } else {
                    ((struct GlobalBig1000*)((char*)func_020421a0() + 0x1000))->flag9ca = 0;
                    msg484[0] = 0xb;
                    self[HI(0x4a4)] = 9;
                }
                *(unsigned int*)(self + HI(0x464)) |= 4;
                return;
            }
        }
        if (func_ov003_02160a68(self) == 0) return;
        func_0207fe44((struct Cont0207fe44*)elementObj);
        msg484[0] = 1;
        self[HI(0x4a3)] = 0xa;
        self[HI(0x4a4)] = 0;
        *(unsigned int*)(self + HI(0x464)) = (*(unsigned int*)(self + HI(0x464)) | 0x80000) & ~0xf00000u;
        func_0202b0f4((int*)r8val);
        func_020939fc((unsigned char*)globalPtr);
        return;
    }
    if (state == 9) {
        func_ov003_021612c0(self);
        self[HI(0x4a4)] = 0xa;
        return;
    }
    if (state == 0xa) {
        int result = func_ov003_02161344(self);
        if (result != -1) {
            if (result == 1) {
                *(short*)(self + HI(0x47a)) = 0;
                self[HI(0x4a4)] = 0xd;
                msg484[0] = 0x38;
                *(unsigned int*)(self + HI(0x464)) |= 4;
                func_0207fdcc(elementObj, 0x10);
                func_0207fdcc(elementObj, 0xe);
                *(unsigned int*)(self + HI(0x464)) |= 0x80000;
            }
        } else {
            msg484[0] = 0xc;
            self[HI(0x4a4)] = 5;
        }
        return;
    }
    if (state == 0xd) {
        if (*(unsigned short*)(self + HI(0x47a)) == 0) {
            *(short*)(self + HI(0x488)) = 0x11;
            func_02080b54(elementObj, 0x11);
            func_02080b40(elementObj, 0x51);
#if !defined(jpn)
            func_0208108c(elementObj, 0x51);
#endif
            func_020813ec(elementObj, *(short*)(self + HI(0x488)));
            func_0208203c((struct Obj0208203c*)(self + LO(0x308)));
            *(void**)(self + HI(0x470)) = 0;
            *(unsigned short*)(self + HI(0x47a)) = *(unsigned short*)(self + HI(0x47a)) + 1;
        }
        void* found = func_02081da8(elementObj, 0x11);
        if (found == 0) {
            *(short*)(self + HI(0x484)) = 0x30;
            self[HI(0x4a4)] = self[HI(0x4a4)] + 1;
            *(short*)(self + HI(0x47a)) = 0;
            self[HI(0x4a4)] = 0xe;
        }
        if (func_0204c7cc((unsigned char*)found) == 0) return;
        *(short*)(self + HI(0x47a)) = 0;
        self[HI(0x4a4)] = 0xe;
        return;
    }
    if (state == 0xe) {
        int flag = 0;
        if (*(unsigned short*)(self + HI(0x47a)) > 0x78 || func_ov003_02160a68(self) != 0 ||
            g_touchInput.pressed_ != 0) {
            flag = 1;
        }

        void* arr;
        int idx;
        int count;
        cur = self + (*(short*)(self + HI(0x498))) * kRec37;
        arr = func_0202ae18();
        count = func_0202bae4(arr);
        for (idx = 0; idx < count; idx++) {
            struct Element0202bad4* elem = func_0202bad4((struct ElementArray0202bad4*)arr, idx);
            if (func_02001aec((int)(cur + REGIONAL_OFFSET(0x15, 0x31)), (int)((char*)elem + 4), 6) == 0) goto found;
        }
        idx = -1;
    found:
        {
        if (idx < 0 || ((struct RecordByte0*)(self + (*(short*)(self + HI(0x498))) * kRec37))->used == 0) {
            if (flag != 0) {
                func_0207fdcc(elementObj, 0x11);
                ((struct GlobalBig1000*)((char*)func_020421a0() + 0x1000))->flag9ca = 1;
                msg484[0] = 0x37;
                *(unsigned int*)(self + HI(0x464)) |= 4;
                *(short*)(self + HI(0x47a)) = 0;
                self[HI(0x4a4)] = 5;
                func_ov003_02160344(self);
            } else {
                *(unsigned short*)(self + HI(0x47a)) = *(unsigned short*)(self + HI(0x47a)) + 1;
            }
            return;
        }

        *(int*)(self + HI(0x4b0)) = 0;
        func_020466e4((unsigned int*)func_020d6c00(), 0x80000);
        {
            char* ov = (char*)GetGameResources() + 0x3000;
            struct Struct021aeedc* p4 = *(struct Struct021aeedc**)(ov + REGIONAL_OFFSET(0x90c, 0xb2c));
            struct HeadList020469f8* p5 = *(struct HeadList020469f8**)(ov + REGIONAL_OFFSET(0x4ec, 0x6fc));
            func_ov017_021aeedc(p4);
            memcpy((char*)p4 + 9, self + (*(short*)(self + HI(0x498))) * kRec37 + REGIONAL_OFFSET(0x15, 0x31), 6);
            {
                int i;
                for (i = 0; i < 6; i++) { }
            }
            func_020469f8(p5, (struct HeadNode020469f8*)p4);
        }
        *(short*)(self + HI(0x47a)) = 0;
        self[HI(0x4a4)] = 0xf;
        return;
        }
    }
    if (state == 0xf) {
        char* ov = (char*)GetGameResources() + 0x3000;
        void* p = *(void**)(ov + REGIONAL_OFFSET(0x90c, 0xb2c));
        signed char v = *((signed char*)p + 0xf);
        if (v == 1) {
            func_0207fdcc(elementObj, 0x11);
            self[HI(0x4a4)] = 0x11;
        } else if (v == -1) {
            func_0207fe44((struct Cont0207fe44*)elementObj);
            *(short*)(self + HI(0x47a)) = 0;
            self[HI(0x4a4)] = 5;
            func_ov003_02160344(self);
        } else if (v == 0) {
            func_0207fe44((struct Cont0207fe44*)elementObj);
            msg484[0] = 0x37;
            *(short*)(self + HI(0x47a)) = 0;
            self[HI(0x4a4)] = 5;
            *(unsigned int*)(self + HI(0x464)) |= 4;
        }
        *(short*)(self + HI(0x47a)) = 0;
        return;
    }
    if (state == 0x11) {
        ((struct GlobalBig1000*)((char*)func_020421a0() + 0x1000))->flag9ca = 0;
        msg484[0] = 0x36;
        *(unsigned int*)(self + HI(0x464)) |= 0x0c004042;
        self[HI(0x4a3)] = 6;
        self[HI(0x4a4)] = 0;
        return;
    }
}
