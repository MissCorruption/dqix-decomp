#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Memory.h"
#include "Resource/Script.h"
#include "World/ZoneFeatures.h"
#include "Combat/Main/ElementLookup.h"

struct Vector3i;

struct Struct_0201d638 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void __clear(void* arg0, int arg1);

struct Struct_020fdc20_9 { unsigned char* unknown_0_; };
extern struct Struct_020fdc20_9 data_020fdc20;

#define REC ((unsigned char*)data_020fdc20.unknown_0_)
#define B(off) (*(unsigned char*)(REC + (off)))
#define H(off) (*(short*)(REC + (off)))
#define W(off) (*(int*)(REC + (off)))

struct Struct_0201d638_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
#define BITS2C (*(struct Struct_0201d638_2*)(REC + 0x2c))

struct Struct_0201d638_3 { unsigned short unknown_0_0_ : 4; unsigned short unknown_0_4_ : 12; };
#define BITS2E (*(struct Struct_0201d638_3*)(REC + 0x2e))

// USA: func_0201d638
extern "C" ARM int func_0201d638(Script::Parameter* arg0, int arg1) {
    if (data_020fdc20.unknown_0_ == 0) return 0;

    void* var0 = func_02011584((void*)GameState::GetInstance());

    switch (W(4)) {
    case 0:
        B(0x2c) = 0;
        if (arg1 != 0) {
            H(0) = arg0[0].ToInt();
        }
        goto ret1;

    case 6:
        W(4) = 0;
        B(0x2c) = 1;
        if (arg1 != 0) {
            H(0) = arg0[0].ToInt();
        }
        goto ret1;

    case 1:
        if (arg1 != 0) {
            H(0) = arg0[0].ToInt();
        }
        goto ret1;

    case 2: {
        if (arg1 == 3) {
            B(0x2c) = arg0[0].ToInt();
            B(0x2d) = arg0[1].ToInt();
            BITS2E.unknown_0_4_ = arg0[2].ToInt();
            BITS2E.unknown_0_0_ = 0;
            goto ret1;
        }

        int var1 = 0;
        B(0x2c) = arg0[0].ToInt();
        B(0x2d) = arg0[1].ToInt();
        BITS2E.unknown_0_4_ = arg0[2].ToInt();
        Script::Parameter* var2 = arg0 + 3;
        arg0 += 4;
        BITS2E.unknown_0_0_ = var2->ToInt();
        var1 += 4;

        if (BITS2E.unknown_0_4_ & 8) {
            if (arg0->type == 0) {
                const char* var3 = arg0->ToString();
                arg0 += 1;
                var1 += 1;
                struct Struct_0201cb60* var4 = func_0209998c((struct Struct_0201cb60_2*)var0, var3);
                if (var4 == 0) return 0;
                H(0x30) = var4->unknown_0_;
            } else {
                H(0x30) = arg0->ToInt();
                arg0 += 1;
                var1 += 1;
            }

            H(0x32) = arg0[0].ToInt();
            H(0x34) = arg0[1].ToInt();

            int var5[3];
            Script::Parameter* var6 = arg0[2].ToVec3fix((Vector3i*)var5);
            *(Vector3i*)((int*)(REC + 0x38)) = *(Vector3i const*)var5;
            int var7 = (int)(4096.0f * var6[0].ToFloat());
            arg0 = var6 + 2;
            H(0x68) = var7;
            int var8 = (int)(4096.0f * var6[1].ToFloat());
            H(0x6a) = var8;
            var1 += 7;

            int var9;
            for (var9 = 1; var9 < 4; var9++) {
                var6 = arg0->ToVec3fix((Vector3i*)var5);
                arg0 = var6;
                var1 += 3;
                *(Vector3i*)((int*)(REC + 0x38 + var9 * 0xc)) = *(Vector3i const*)var5;
            }
        }

        if (var1 < arg1) {
            arg0->ToFloat();
            arg0 += 1;
            var1 += 1;
        }
        if (var1 < arg1) {
            arg0->ToInt();
            arg0 += 1;
        }
        if (BITS2E.unknown_0_4_ & 0x20) {
            W(0x6c) = (int)(4096.0f * arg0->ToFloat());
        }
        goto ret1;
    }

    case 3:
        B(0x2c) = arg0[0].ToInt();
        goto ret1;

    case 4: {
        unsigned char var10 = arg0[0].ToInt();
        BITS2C.unknown_0_0_ = var10;
        B(0x2d) = arg0[1].ToInt();
        unsigned char var11 = arg0[2].ToInt();
        BITS2C.unknown_0_7_ = var11;

        int var12[3], var13[3];
        Script::Parameter* var14 = arg0[3].ToVec3fix((Vector3i*)var12);
        var14 = var14->ToVec3fix((Vector3i*)var13);
        arg0 = var14;

        Struct_0201d044 var15;
        Vector3fix_Subtract((const Vector3fix*)((struct Struct_0201d638*)var13), (const Vector3fix*)((struct Struct_0201d638*)var12), &var15.unknown_0_.unknown1_0_);
        int var16 = Vector3fix_Length(&var15.unknown_0_.unknown1_0_);
        Vector3fix_Normalize(&var15.unknown_0_.unknown1_0_, &var15.unknown_0_.unknown1_0_);
        var15.unknown_c_ = Vector3fix_InnerProduct(&var15.unknown_0_.unknown1_0_, (const Vector3fix*)var12);

        int var17[3];
        __clear(var17, 0xc);
        if (BITS2C.unknown_0_0_ == 4) {
            var14 = arg0->ToVec3fix((Vector3i*)var17);
            arg0 = var14;
        } else {
            var17[1] = (int)(4096.0f * arg0->ToFloat());
            Script::Parameter* var18 = arg0 + 1;
            arg0 += 2;
            var17[2] = (int)(4096.0f * var18->ToFloat());
        }

        int var19[3];
        var14 = arg0->ToVec3fix((Vector3i*)var19);

        ((Struct_0201d044*)(REC + 0x30))->func_0201d474(var15);
        W(0x40) = var16;
        *(Vector3i*)((int*)(REC + 0x44)) = *(Vector3i const*)var17;
        *(Vector3i*)((int*)(REC + 0x50)) = *(Vector3i const*)var19;
        goto ret1;
    }

    case 5:
        H(0x2c) = arg0[0].ToInt();
        H(0x2e) = arg0[1].ToInt();
        if (arg1 <= 2) goto ret1;
        H(0) = arg0[2].ToInt();
        goto ret1;

    case 8:
        if (arg1 != 0) {
            H(0) = arg0[0].ToInt();
        }
        goto ret1;

    case 9: {
        H(0x2c) = arg0[0].ToInt();
        H(0x2e) = arg0[1].ToInt();
        B(0x30) = arg0[2].ToInt();
        B(0x31) = arg0[3].ToInt();
        if ((B(0x31) & 2) == 0) goto ret1;

        if (arg0[4].type == 0) {
            Script::Parameter* var20 = arg0 + 4;
            arg0 += 5;
            const char* var21 = var20->ToString();
            struct Struct_0201cb60* var22 = func_0209998c((struct Struct_0201cb60_2*)var0, var21);
            if (var22 == 0) return 0;
            H(0x32) = var22->unknown_0_;
        } else {
            Script::Parameter* var23 = arg0 + 4;
            arg0 += 5;
            H(0x32) = var23->ToInt();
        }

        H(0x34) = arg0[0].ToInt();
        H(0x36) = arg0[1].ToInt();

        Script::Parameter* var24 = arg0[2].ToVec3fix((Vector3i*)(REC + 0x38));
        H(0x68) = (int)(4096.0f * var24[0].ToFloat());
        H(0x6a) = (int)(4096.0f * var24[1].ToFloat());
        var24 = var24[2].ToVec3fix((Vector3i*)(REC + 0x44));
        var24 = var24->ToVec3fix((Vector3i*)(REC + 0x50));
        var24 = var24->ToVec3fix((Vector3i*)(REC + 0x5c));
        H(0x6c) = (int)(4096.0f * var24[0].ToFloat());
        H(0x6e) = var24[1].ToInt();
        goto ret1;
    }

    case 10: {
        H(0x2c) = arg0[0].ToInt();
        Script::Parameter* var25 = arg0[1].ToVec3fix((Vector3i*)(REC + 0x30));
        H(0x2e) = (int)(4096.0f * var25[0].ToFloat());
        W(0x3c) = (int)(4096.0f * var25[1].ToFloat());
        if (arg1 <= 6) goto ret1;
        var25 = var25[2].ToVec3fix((Vector3i*)(REC + 0x40));
        H(0x4c) = (int)(4096.0f * var25[0].ToFloat());
        goto ret1;
    }

    case 12: {
        VectorizedMemset(REC + 0x2c, 0, 0x18);
        B(0x2c) = arg0[0].ToInt();
        B(0x2d) = arg0[1].ToInt();
        B(0x2e) = arg0[2].ToInt();

        unsigned char* var26 = REC;
        switch (var26[0x2c]) {
        case 1:
            var26[0x30] = 0;
            var26[0x31] = 0;
            var26[0x33] = 0;
            var26[0x34] = arg0[3].ToInt();
            var26[0x35] = arg0[4].ToInt();
            var26[0x32] = arg0[5].ToInt();
            goto ret1;

        case 2:
            var26[0x30] = 0;
            *(int*)(var26 + 0x34) = 0;
            *(int*)(var26 + 0x38) = (int)(4096.0f * arg0[3].ToFloat());
            *(int*)(var26 + 0x3c) = (int)(4096.0f * arg0[4].ToFloat());
            var26[0x40] = 0x19;
            goto ret1;

        case 3:
            var26[0x30] = 0;
            var26[0x31] = 0;
            *(int*)(var26 + 0x34) = 0x733;
            *(int*)(var26 + 0x38) = (int)(4096.0f * arg0[3].ToFloat());
            *(int*)(var26 + 0x3c) = (int)(4096.0f * arg0[4].ToFloat());
            *(int*)(var26 + 0x40) = (int)(4096.0f * arg0[5].ToFloat());
            *(int*)(var26 + 0x38) = 0x733;
            *(int*)(var26 + 0x40) = ~0x198;
            goto ret1;
        }
        goto ret1;
    }
    }

    goto ret1;
ret1:
    return 1;
}
