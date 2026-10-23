#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Resource/MessageUpdate.h"
#include "Resource/MessageSystem.h"
#include "World/Zone3D.h"
#include "Resource/Brightness.h"

struct Struct_0202c1a4;
struct Struct_02015438;
struct Struct_0203d028_4;
struct Struct_0208b088;
struct Struct_0203dd20_2;
struct Struct_020579b4;
struct Struct_0214e34c;
struct Struct_ov017_021d82fc_6 { char unknown_0_[0xe]; unsigned char unknown_e_; };
extern "C" void* func_0202ae18();
extern "C" Zone3D* func_02012fe4();
extern "C" Struct_020579b4* func_02057924();
extern "C" void* func_02039e70();
extern "C" void* func_0203cf4c();
extern "C" void* func_02010768(void*);
extern "C" int func_020421a0();
extern "C" Struct_0214e34c* func_020d7a50();
extern "C" void* func_020e2ff8();
extern "C" void func_ov017_0218d8cc(GameResources*);
extern "C" unsigned char func_0200fb9c(char*);
extern "C" int func_0201201c(void*);
void Stub(GameResources*);
extern "C" void func_ov017_021941fc(GameResources*);
extern "C" void func_02039830(void*);
extern "C" void func_ov017_0219a674(unsigned char*);
extern "C" void func_02015438(void*);
extern "C" void func_020d9834(int);
extern "C" void func_02022dc8(void*);
extern "C" void func_ov017_021a624c(GameResources*);
extern "C" int func_02046b24(Struct_02015438**);
extern "C" void func_ov017_0219a6b8(GameResources*);
extern "C" void func_020966e0(void*);
extern "C" void func_ov017_021a3498(Struct_0203d028_4*);
extern "C" void func_020a654c(GameResources*);
extern "C" void func_020ac9ac(GameResources*);
extern "C" void func_02011b68(GameState*);
extern "C" int func_0202e09c(int);
extern "C" void func_020a20d8(void*);
extern "C" void func_ov000_0216d464(void*);
extern "C" void func_0204a170(void*);
extern "C" void func_ov017_0218d0ec(GameResources*);
extern "C" int func_0202b7d8(int*);
extern "C" signed char func_0202c1a4(Struct_0202c1a4*);
extern "C" void func_ov017_021a205c(GameResources*);
extern "C" int func_ov017_02196430(GameResources*);
extern "C" int func_ov017_02196c4c(GameResources*);
extern "C" void func_ov017_021c25ac(GameResources*);
extern "C" void func_ov017_021a476c(GameResources*);
extern "C" void func_ov017_0219755c(unsigned char*);
extern "C" void func_ov017_021a51a4(GameResources*);
extern "C" void func_ov017_021c05f4(GameResources*, int, int, int);
extern "C" void* func_0208e9e8();
extern "C" void func_0208ec78(void*);
extern "C" void func_0208f4e4(unsigned char*);
extern "C" void* func_0208a9b4();
extern "C" void func_0208b088(Struct_0208b088*);
extern "C" void func_0203dd20(Struct_0203dd20_2*);
extern "C" void func_ov017_0218d06c(GameResources*);
extern "C" void func_020da2fc(Struct_ov017_021d82fc_6*);
extern "C" void func_020579b4(Struct_020579b4*, int);
extern "C" void func_ov017_02192700(GameResources*);
extern "C" void func_020d7b04(Struct_0214e34c*);
extern "C" void func_ov028_021d9734();
extern "C" void func_ov017_0219ca88(GameResources*);
extern "C" void func_ov017_02191bdc(unsigned char*, int);
extern "C" void func_ov017_02199f08(GameResources*);
extern "C" void func_ov017_0219aa7c(GameResources*);
extern "C" int* func_020936f8();
extern "C" void func_02093b90(int*, unsigned int);
extern "C" void func_ov017_021a4e48(unsigned char*);
void UpdateBrightnessTransitions(GameResources*);
extern "C" void func_020e30f0(void*);
extern "C" void func_ov017_0218d818(unsigned char*);
extern Struct_ov017_021d82fc_6 data_ov017_021d82fc;

// USA: func_ov017_0218cbd4
extern "C" ARM void func_ov017_0218cbd4(GameResources* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    Zone3D* var2 = func_02012fe4();
    Struct_020579b4* var3 = func_02057924();
    func_02039e70();
    GameObject* var4 = var0->GetUnknownGameObject();
    unsigned int var5 = var0->GetTickCount();
    Struct_0203dd20_2* var6 = (Struct_0203dd20_2*)func_0203cf4c();
    void** var7 = (void**)func_02010768(var0);
    Struct_02021b84* var8 = (Struct_02021b84*)func_020421a0();
    Struct_0214e34c* var9 = func_020d7a50();
    void* var10 = func_020e2ff8();
    func_ov017_0218d8cc(arg0);
    int var11 = 0;
    if (func_0200fb9c((char*)var0) == 6 || func_0201201c(var0) == 5) var11 = 1;
    int var12 = 0;
    if (TestFlags00(arg0, 0x4000)) var12 = 1;
    Stub(arg0);
    func_ov017_021941fc(arg0);
    if (!var11) {
        func_02039830(var4);
        (*(Vector3i*)(arg0->unknown_432c + 0x1c)) = var4->obj3D_.position_;
    }
    func_ov017_0219a674(arg0->unknown_36b4_);
    if (!TestFlags00(arg0, 4)) {
        func_02015438(var2);
        if (var12) func_020d9834(1);
    }
    if (!var11 && *var7) func_02015438(*var7);
    func_02022dc8(arg0->unknown_ptr_36d0);
    func_ov017_021a624c(arg0);
    if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) != 3)
        func_ov017_0219a6b8(arg0);
    if (var8->unknown_998_ && !((unsigned char*)arg0->unknown_ptr_array_3afc[13])[2]) {
        var8->func_020444d4(var5);
    }
    func_020966e0(arg0->unknown_ptr_4328);
    func_ov017_021a3498((Struct_0203d028_4*)arg0->unknown_ptr_array_36fc[0]);
    func_020a654c(arg0);
    func_020ac9ac(arg0);
    func_02011b68(var0);
    void* var13 = func_020100bc(var0);
    if (var13) {
        if (func_0202e09c((int)var13) & 4) func_020a20d8(var13);
        else if (func_0202e09c((int)var13) & 8) func_ov000_0216d464(var13);
        else if (func_0202e09c((int)var13) & 16) func_0204a170(var13);
    }
    func_ov017_0218d0ec(arg0);
    if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) != 3) {
        if (!func_0202b7d8((int*)var1) || func_0202c1a4((Struct_0202c1a4*)var1) == 0)
            func_ov017_021a205c(arg0);
    }
    int var14 = func_ov017_02196430(arg0);
    int var15 = func_ov017_02196c4c(arg0);
    if (var14 == 2 || var15 == 2) arg0->unknown_42e3_[5] = 0;
    if (!var11) {
        func_ov017_021c25ac(arg0);
        if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) != 3 &&
            func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) != 2 && !arg0->unknown_3658_[0]) {
            func_ov017_021a476c(arg0);
            func_ov017_0219755c((unsigned char*)arg0);
            func_ov017_021a51a4(arg0);
            func_ov017_021c05f4(arg0, 1, 0, 1);
        }
        if (func_02046b24((Struct_02015438**)arg0->unknown_ptr_array_36fc[0]) != 3) {
            func_0208ec78(func_0208e9e8());
            func_0208f4e4((unsigned char*)var2->unk_2664);
        }
        if (!((unsigned char*)arg0->unknown_ptr_array_3afc[13])[2]) func_0208b088((Struct_0208b088*)func_0208a9b4());
        func_0203dd20(var6);
        if (var12) func_020d9834(0);
        func_ov017_0218d06c(arg0);
        if (var12) func_020d9834(0);
        if (data_ov017_021d82fc.unknown_e_) func_020da2fc(&data_ov017_021d82fc);
        func_020579b4(var3, var5);
        if (!var2->unknown_424_) func_ov017_02192700(arg0);
        if (!TestFlags00(arg0, 16))
            func_ov017_021a3498((Struct_0203d028_4*)arg0->unknown_ptr_array_36fc[1]);
        if (!TestFlags00(arg0, 128))
            func_ov017_021a3498((Struct_0203d028_4*)arg0->unknown_ptr_array_36fc[2]);
        func_020d7b04(var9);
        if (TestFlags00(arg0, 0x1000)) func_ov028_021d9734();
        if (var12) func_020d9834(1);
    }
    func_ov017_0219ca88(arg0);
    func_ov017_02191bdc((unsigned char*)arg0, 0);
    if (!var11) {
        func_ov017_02199f08(arg0);
        func_ov017_0219aa7c(arg0);
    }
    int* var16 = func_020936f8();
    func_02093b90(var16, var0->GetTickCount());
    func_ov017_021a4e48((unsigned char*)arg0);
    UpdateBrightnessTransitions(arg0);
    if (var12) func_020d9834(0);
    func_020e30f0(var10);
    func_ov017_0218d818((unsigned char*)arg0);
}
