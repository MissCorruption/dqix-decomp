#pragma once

class SafeAllocator;



struct Struct_0206ef40 {
    union { char* unknown1_0_; unsigned int unknown_0_; };
    union { char* unknown_4_; unsigned int unknown1_4_; };
    short unknown_8_;
    unsigned short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    unsigned int unknown_10_;
#if !defined(jpn)
    union { char* unknown_14_; unsigned int unknown1_14_; };
    int unknown_18_;
#endif
};

struct Struct_0206f01c {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
};


struct Struct_0206f01c_2 {
    Struct_0206f01c unknown_0_;
    Struct_0206ef40* unknown_4_;
};

struct Struct_0206ef48 {
    Struct_0206f01c_2 unknown_0_;
    char* unknown_8_;
};

struct Struct_0206efd8 {
    Struct_0206f01c unknown_0_;

};


typedef int (*Type_0206f110)(Struct_0206ef48*, Struct_0206ef40*);
typedef int (*Type_0206f470)(void*);

#if defined(jpn)
#define func_0206f0f8 func_02070248
#define func_0206f110 func_02070260
#define func_0206f170 func_020702c0
#define func_0206f470 func_02070530
#define func_0206ef48 func_020700ac
#define func_0206ef94 func_020700e4
#endif
extern "C" {
int func_0206f0f8(Struct_0206f01c*);
int func_0206f110(Struct_0206ef48*, Type_0206f110);
int func_0206f170(Struct_0206ef48*, Struct_0206efd8*, unsigned char*, Type_0206f110);
void* func_0206f470(Struct_0206f01c_2*, int, Type_0206f470);
int func_0206ef48(Struct_0206ef48*, Struct_0206ef40*);
}




extern "C" char* func_0206ef94(Struct_0206ef48*, char*, char*);
extern "C" void func_0206f01c(Struct_0206ef48*, SafeAllocator*, Struct_0206efd8*, unsigned int);
extern "C" int func_0206ef40(void*);
