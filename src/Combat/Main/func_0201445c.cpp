#include <globaldefs.h>

#include "World/Zone3D.h"
#include "Filesystem/FileIO.h"
#include "std_library_functions.h"

extern "C" void func_0207df90(char*);
extern "C" void func_0207dfac(char*);

// USA: func_0201445c
ARM bool Zone3D::func_0201445c(const void* arg0, unsigned int arg1, const char* arg2)
{
    SafeAllocator* var0 = pAllocator_68_;
    char* var1 = (char*)unknown_ptr_50_;
    unsigned int var2;
    void* var3;
    Zone3D::Model3DListNode* var4 =
        (Zone3D::Model3DListNode*)var0->Allocate(sizeof(Zone3D::Model3DListNode));
    Model3D* var5;

    if (var4) {
        var5 = &var4->model_;
        var5->Clear();
        var4->filename_ = 0;
        var4->pNext_ = 0;
        var4->filename_ = (char*)var0->Allocate(strlen(arg2) + 1);
        if (var4->filename_) {
            strcpy((char*)var4->filename_, arg2);
            var4->pNext_ = firstModel_418_;
            firstModel_418_ = var4;
            var3 = DecompressLZ77FileIntoScratchSpace(*var0, arg0, var2);
            if (var3) {
                func_0207df90(var1);
                var5->SetRawFile(var3, var2);
                var5->ClearRawFileCache();
                var5->ProcessRawFile(Model3D::TextureStagingMode_Immediate);
                func_0207dfac(var1);

                NSBXXTex* var6 = var5->GetTEX0();
                if (var6) {
                    textureImageMemory_ += NSBXX_Tex_GetBlock1Length(var6);
                    texturePaletteMemory_ += NSBXX_Tex_GetBlock4Length(var6);
                }
                bool var7 = false;
                if (var6) {
                    unsigned int var8 = var6->block1Offset_;
                    void* var9 = var0->Allocate(var8);
                    if (var9) {
                        memcpy(var9, var6, var8);
                        var5->SetTEX0((NSBXXTex*)var9);
                        var7 = true;
                    }
                }
                if (!var7) {
                    var5->Clear();
                }
            }
        }
    }
    return true;
}
