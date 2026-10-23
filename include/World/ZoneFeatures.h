#pragma once

#include "../Graphics/Vector.h"
#include "../Memory/SafeAllocator.h"
#include "../NitroSDK/Memory.h"
#include "../Grotto/Main/TileFeatures.h"

union Struct_02014900
{
    fix32_t unknown_0_[3];
    Vector3fix unknown1_0_;
};

// I don't know what this is, but in practice it gets populated from a pair
// of vector3s (a, b). The resulting vector component is b - a normalized, and
// the scalar is the inner product of a with said normalized vector. The only
// thing I can think of that looks like this is a representation of a plane
// in 3D space...?
struct Struct_0201d044
{
    Struct_02014900 unknown_0_;
    fix32_t unknown_c_;

    // copy assignment operator, but it's explicitly defined?!
    // if we make it implicit, it gets placed too early in the TU
    // defining as operator= works but causes trouble on other compilers
    // when put in a union
    Struct_0201d044& func_0201d474(const Struct_0201d044& arg0);
};

class Struct_020134e0
{
public:
    struct Struct_020146fc
    {
        int unknown_0_;
        Struct_02014900 unknown_4_;
        char unknown_10_[0x10];
        char unknown_20_[0x10];
        char unknown_30_[0x10];
        int unknown_40_[6];
    };

    struct Struct_0201c96c
    {
        fix32_t unknown_0_[6];
        int unknown_18_[2];
        fix16_t unknown_20_; 
    };

    struct Struct_0201cb60_3
    {
        int unknown_0_;
        int unknown_4_[6];
        int unknown_1c_;
        Vector3fix unknown_20_[4];
        short unknown_50_;
        short unknown_52_;
        int unknown_54_;
        int unknown_58_[3];
        int unknown_64_[2];
        int unknown_6c_;

        void func_0201ce10();
    };

    // Used by opcodes 6a, 6b, 73, 74
    struct Struct_02018300
    {
        unsigned short unknown_0_;
        int unknown_4_;
        Struct_02014900 unknown_8_;
        Struct_02014900 unknown_14_;
        short unknown_20_;
        short unknown_22_;
        int unknown_24_;
        int unknown_28_;
        union
        {
            struct {
                unsigned char unknown_0_;
            } unknown_0_;
            struct {
                unsigned char unknown_0_;
                unsigned char unknown_1_;
                unsigned short unknown_2_0_ : 4;
                unsigned short unknown_2_4_ : 12;
                unsigned short unknown_4_;
                unsigned short unknown_6_;
                unsigned short unknown_8_;
                char unknown_a_[2];
                Vector3fix unknown_c_[4];
                fix16_t unknown_3c_;
                fix16_t unknown_3e_;
                fix32_t unknown_40_;
            } unknown1_0_;
            struct {
                unsigned char unknown_0_;
            } unknown2_0_;
            struct {
                unsigned char unknown_0_0_ : 7;
                unsigned char unknown_0_7_ : 1;
                char unknown_1_;
                char unknown_2_[2];
                Struct_0201d044 unknown_4_;
                fix32_t unknown_14_;
                Vector3fix unknown_18_;
                Vector3fix unknown_24_;
                Vector3fix unknown_30_;
            } unknown3_0_;
            struct {
                unsigned short unknown_0_;
                unsigned short unknown_2_;
                unsigned short unknown_4_;
            } unknown4_0_;
            struct {
                unsigned short unknown_0_;
                unsigned short unknown_2_;
                unsigned char unknown_4_;
                unsigned char unknown_5_;
                unsigned short unknown_6_;
                unsigned short unknown_8_;
                unsigned short unknown_a_;
                Vector3fix unknown_c_;
                Vector3fix unknown_18_;
                Vector3fix unknown_24_;
                Vector3fix unknown_30_;
                fix16_t unknown_3c_;
                fix16_t unknown_3e_;
                fix16_t unknown_40_;
                unsigned short unknown_42_;
            } unknown5_0_;
            struct {
                unsigned short unknown_0_;
                fix16_t unknown_2_;
                Vector3fix unknown_4_;
                fix32_t unknown_10_;
                Vector3fix unknown_14_;
                fix16_t unknown_20_;
            } unknown6_0_;
            struct {
                unsigned char unknown_0_;
                unsigned char unknown_1_;
                unsigned char unknown_2_;
                char unknown_3_;
                union
                {
                    struct {
                        unsigned char unknown_0_;
                        unsigned char unknown_1_;
                        unsigned char unknown_2_;
                        unsigned char unknown_3_;
                        unsigned char unknown_4_;
                        unsigned char unknown_5_;
                    } unknown_4_;
                    struct {
                        unsigned char unknown_0_;
                        fix32_t unknown_4_;
                        fix32_t unknown_8_;
                        fix32_t unknown_c_;
                        unsigned char unknown_10_;
                    } unknown1_4_;
                    struct {
                        unsigned char unknown_0_;
                        unsigned char unknown_1_;
                        fix32_t unknown_4_;
                        fix32_t unknown_8_;
                        fix32_t unknown_c_;
                        fix32_t unknown_10_;
                    } unknown2_4_;
                };
            } unknown7_0_;
        } unknown_2c_;
        Struct_02018300* unknown_70_;

        void func_0201d424();
    };

    struct Struct_0201dfcc
    {
        Struct_02014900 unknown_0_;
        Struct_02014900 unknown_c_;
        fix16_t unknown_18_;
        char unknown_1a_[2];
        fix32_t unknown_1c_;
        fix32_t unknown_20_;
        fix32_t unknown_24_;
        fix32_t unknown_28_;
    };

    Struct_020146fc* unknown_0_;
    int unknown_4_;
    int unknown_8_;

    Struct_0201c96c* unknown_c_;
    int unknown_10_;
    int unknown_14_;

    Struct_0201cb60_3* unknown_18_;
    int unknown_1c_;
    int unknown_20_;

    Struct_02018300* unknown_24_;
    int unknown_28_;
    int unknown_2c_;

    TileFeaturePlacementData* unknown_30_;
    int unknown_34_;
    int unknown_38_;

    Struct_02018300* unknown_3c_[13];

    Vector3fix unknown_70_;
    fix16_t unknown_7c_;
    // not sure what this is used for. In outdoor areas it tends to be blue
    // (0, 5, 30) but in caves it's black. It isn't background color though
    uint16_t unknown_7e_;

    unsigned short unknown_80_;
    unsigned short unknown_82_;
    Struct_0201dfcc* unknown_84_;

    void func_0201e248();

    void func_0201e25c(int arg0, SafeAllocator* arg1);
    void func_0201e288(int arg0, SafeAllocator* arg1);

    void func_0201e2b4(SafeAllocator* arg0, const void* arg1, unsigned int arg2);
    Struct_020146fc* func_0201e2d8(int arg0);

    void func_0201e304(const Struct_020146fc& arg0);
    void func_0201e3c4(const TileFeaturePlacementData& arg0);

    void func_0201e480(int arg0, SafeAllocator* arg1);
    void func_0201e4b0(const Struct_0201c96c& arg0);

    void func_0201e518(int arg0, SafeAllocator* arg1);
    void func_0201e574(const Struct_0201cb60_3& arg0);

    void func_0201e634(int arg0, SafeAllocator* arg1);
    Struct_02018300* func_0201e710(const Struct_02018300& arg0);
    // not real, just here for testing purposes
    Struct_02018300* func_0201e710(const Struct_02018300& arg0, int arg1);

    void func_0201e878(Struct_0201dfcc* arg0, unsigned short arg1);
    void func_0201e88c(const Struct_0201dfcc& arg0);
};

extern "C" Struct_020134e0::Struct_02018300* func_0201e6d4(Struct_020134e0* arg0, int arg1);
extern "C" Struct_020134e0::Struct_02018300* func_0201e664(Struct_020134e0* arg0, int arg1);
extern "C" void* func_0201e548(Struct_020134e0* arg0, int arg1);
