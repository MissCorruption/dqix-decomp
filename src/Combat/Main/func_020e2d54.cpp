#include <globaldefs.h>
#include "Graphics/Vector.h"
#include "NitroSDK/NSBXX/RenderCommandCallbacks.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "NitroSDK/NSBXX/RenderCommands_Common.h"

#if defined(jpn)
#define func_020ca430 func_020cbefc
#endif

#define REG_GXFIFO (*(volatile unsigned int*)0x04000400)
struct Struct_020e2d54 { unsigned short unknown_0_; char unknown_2_[0xa]; int unknown_c_; };
struct Struct_020f2c14 {
    union {
        Vector4fix unknown_0_[3];
        struct { int unknown1_0_[6]; Vector3fix unknown_18_; Vector3fix unknown_24_; };
    };
    Vector3fix unknown_30_;
    char unknown_3c_[0xc];
};
extern char data_020ee9b8[];
extern int data_020ef0e8;
extern "C" void func_020e2fa8(int*, int, int, int);
extern "C" void* func_020e2fb0(void*);
static inline int inline_020e2d54(Struct_020e2d54* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_c_; }
static inline int inline_020e2d54_2(Vector3fix* arg0) { SDK_NULL_ASSERT(arg0); return arg0->z; }
static inline int inline_020e2d54_3(int arg0, int arg1) { int var0 = fix32_Divide(arg0, arg1); return var0; }

// USA: func_020e2d54
extern "C" ARM void func_020e2d54(int arg0, RenderCommandHandler* arg1, Struct_020f2c14* arg2) {
    Matrix4x4 var0;
    Vector3fix var1;
    Vector3fix var2;
    if (!(arg1->flags_ & 0x100)) {
        SendQueuedDataToGeometryFifo();
        REG_GXFIFO = 0x151110;
        REG_GXFIFO = 0;
        while (func_020c54fc(&var0)) {}
        func_020e2fa8(&var1.x, 0x1000, 0x1000, 0x1000);
        int var3 = 0;
        if (arg0 == 1) {
            var1.x = Vector3fix_Length(&var0.rows[0].xyz);
            var1.y = Vector3fix_Length(&var0.rows[1].xyz);
            var1.z = Vector3fix_Length(&var0.rows[2].xyz);
        }
        if (arg0 == 1) {
            func_020e2fa8(&var2.x, 0, 0, 0);
            NSBXXInternalModel* var4 = arg1->modelContext_->internalModel_;
            NSBXXNameList* var5 = (NSBXXNameList*)func_020e2fb0(var4);
            int var6 = var5 ? NSBXXNameList_SearchIndex(var5, data_020ee9b8) : -1;
            if (var6 >= 0) {
                var5 = (NSBXXNameList*)func_020e2fb0(var4);
                Struct_020e2d54* var7;
                if (!var5) goto missingBone;
                {
                    unsigned int* var8;
                    if (var5 && (unsigned int)var6 < var5->numEntries_) {
                        unsigned char* var9 = (unsigned char*)var5 + var5->offsetToDataStart_;
                        unsigned short var10 = *(unsigned short*)var9;
                        var8 = (unsigned int*)(var9 + 4 + var10 * var6);
                    } else var8 = 0;
                    if (var8) {
                        var7 = (Struct_020e2d54*)((char*)var5 + *var8);
                        goto foundBone;
                    }
                }
            missingBone:
                var7 = 0;
            foundBone:
                if (!(var7->unknown_0_ & 1)) {
                    var2.z = FIX32_MULTIPLY(inline_020e2d54_2(&var1), inline_020e2d54(var7));
                }
                if (fix32abs(var0.rows[3].z) >= 4) {
                    var3 = FIX32_MULTIPLY(inline_020e2d54_2(&var2), inline_020e2d54_3(var0.rows[3].x, var0.rows[3].z));
                }
            }
        }
        arg2->unknown_30_.x = var0.rows[3].x + var3;
        arg2->unknown_30_.y = var0.rows[3].y;
        arg2->unknown_30_.z = var0.rows[3].z;
        if (arg0 == 1) {
            arg2->unknown_0_[0].w = var1.x;
            arg2->unknown_0_[1].w = var1.y;
            arg2->unknown_0_[2].w = var1.z;
        }
        if (arg0 == 0 && (var0.rows[1].y || var0.rows[1].z) && data_020ef0e8) {
            Vector3fix_Normalize(&var0.rows[1].xyz, &arg2->unknown_18_);
            arg2->unknown_24_.y = -arg2->unknown_18_.z;
            arg2->unknown_24_.z = arg2->unknown_18_.y;
            data_020ef0e8 = 0;
        }
        func_020ca430(arg2, (void*)0x04000400, 0x48);
    }
    arg1->flags_ |= 0x40;
}
