#include <globaldefs.h>
#include "World/Zone3D.h"
#include "World/ZoneFeatures.h"
#include "Filesystem/FileIO.h"

struct Struct_02013fb4;
extern "C" void func_0201f040(void*, void*, Struct_02013fb4*, unsigned int);

// USA: func_02014900
// KEEP-NAME: exported Zone3D member ABI, with an explicit receiver here.
extern "C" ARM int _ZN6Zone3D13func_02014900EPKvjPN12ZoneFeatures13Opcode64EntryE(
    Zone3D* arg0, const void* arg1, unsigned int arg2, Struct_020134e0::Struct_020146fc* arg3) {
    SafeAllocator* var0 = arg0->pAllocator_68_;
    Struct_02013454* var1 = (Struct_02013454*)var0->Allocate(sizeof(Struct_02013454));
    if (var1 == NULL) return 0;
    func_02013454(var1);
    var1->unknown_0_ = arg3->unknown_0_;
    var1->unknown_48_ = arg3->unknown_4_.unknown1_0_;
    unsigned int var2;
    void* var3 = DecompressLZ77FileIntoScratchSpace(*var0, arg1, var2);
    if (var3 == NULL) return 0;
    func_0201f040(&var1->unknown_4_, var0,
                                        (Struct_02013fb4*)var3, var2);
    var1->unknown_54_ = arg0->firstBMDJStruct_41c_;
    arg0->firstBMDJStruct_41c_ = var1;
    return 1;
}
