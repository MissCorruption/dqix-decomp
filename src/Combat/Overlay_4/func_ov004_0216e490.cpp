#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020aaf84(void* ptr, int a, int b, int c);
struct StateBits5ccc_1155c;
extern "C" void func_0201155c(struct StateBits5ccc_1155c* state);
extern "C" unsigned char func_0209ca98(char* obj);
extern "C" unsigned char func_0205ea18(unsigned char* obj);
extern "C" void func_0209ca70(void* obj, int val);
struct Obj0205e9f4;
extern "C" void func_0205e9f4(struct Obj0205e9f4* obj, int state);
extern "C" int func_020ac864(int flag);
extern "C" void func_ov011_021848a0(void* obj, int val);
extern "C" int func_020aba5c(int flag);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);
extern "C" void func_02043124(char* obj);
extern "C" void* func_ov004_0216ae9c(void* a, int id);
extern "C" void func_ov023_021f8960(char* base, short a, unsigned short b);
extern "C" void func_0200fb94(char* obj, unsigned char value);

extern unsigned char data_ov004_02171034[];
extern int data_02109bf4;
extern int data_02108760;

// USA: func_ov004_0216e490
extern "C" ARM int func_ov004_0216e490(void* obj) {
    GameState* bs = GameState::GetInstance();
#if defined(jpn)
    data_ov004_02171034[3] = 0;
    int res = func_020aaf84(*(void**)&data_ov004_02171034[0xc], 0, 1, 0);
#else
    data_ov004_02171034[5] = 0;
    int res = func_020aaf84(*(void**)&data_ov004_02171034[0x10], 0, 1, 0);
#endif
    if (res == 0) {
        func_0201155c((struct StateBits5ccc_1155c*)bs);
#if defined(jpn)
        data_ov004_02171034[3] = 1;
#else
        data_ov004_02171034[5] = 1;
#endif
    } else {
        unsigned char v1 = func_0209ca98((char*)&data_02109bf4);
#if defined(jpn)
        data_ov004_02171034[7] = v1;
#else
        data_ov004_02171034[4] = v1;
#endif
        unsigned char v2 = func_0205ea18((unsigned char*)&data_02108760);
#if defined(jpn)
        data_ov004_02171034[6] = v2;
#else
        data_ov004_02171034[1] = v2;
#endif
        func_0209ca70(&data_02109bf4, 3);
        func_0205e9f4((struct Obj0205e9f4*)&data_02108760, 3);
        if (func_020ac864(1) == 0) {
#if defined(jpn)
            data_ov004_02171034[3] = 1;
#else
            data_ov004_02171034[5] = 1;
#endif
        }
    }

#if defined(jpn)
    if (data_ov004_02171034[3] != 0) {
#else
    if (data_ov004_02171034[5] != 0) {
#endif
        func_ov011_021848a0(obj, 0x3e7);
        return 0;
    }
#if defined(jpn)
    if (data_ov004_02171034[1] == 1) {
#else
    if (data_ov004_02171034[0] == 1) {
#endif
        if (func_020aba5c(1) == 0) {
            char* g = (char*)func_020421a0();
            func_02043204(g);
            func_02043124(g);
            void* node = func_ov004_0216ae9c(obj, 0xd4);
            func_ov023_021f8960((char*)node, 0, 7);
            func_ov011_021848a0(obj, 0x1f5);
            return 0;
        } else {
            func_0200fb94((char*)bs, 5);
#if defined(jpn)
            data_ov004_02171034[0] = 0;
#else
            data_ov004_02171034[2] = 0;
#endif
            func_ov011_021848a0(obj, 0x3e7);
            return 0;
        }
    }
    return 0;
}
