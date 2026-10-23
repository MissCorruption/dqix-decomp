#include <globaldefs.h>
#if defined(jpn)
enum { kRegion103a = 0xfb6 };
enum { kRegion874 = 0x7f0 };
enum { kRegion89c = 0x818 };
#else
enum { kRegion103a = 0x103a };
enum { kRegion874 = 0x874 };
enum { kRegion89c = 0x89c };
#endif

#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState*);

struct Obj2081;
extern "C" void func_02080c20(struct Obj2081* obj, int key);
extern "C" void func_02080c04(struct Obj2081* obj, int key);
extern "C" void func_02080c68(void* obj, int id, int value);

struct Container020dedd0;
struct Element020de650 {
    char pad[8];
    unsigned int nibble : 4;
};
extern "C" struct Element020de650* func_020dedd0(struct Container020dedd0* c, int key);

struct Obj02086aec;
extern "C" short func_02086aec(struct Obj02086aec* obj, int key);

struct Container02080fa8;
extern "C" void func_02080fa8(struct Container02080fa8* obj, int id, int value);

extern "C" void func_020813ec(void* obj, int key);

// USA: func_ov003_02176ed4
extern "C" ARM void func_ov003_02176ed4(char* self) {
    struct Obj2081* elemObj = *(struct Obj2081**)(self + kRegion89c);
    struct Obj02086aec* battleSum = (struct Obj02086aec*)func_02010828(GameState::GetInstance());
    func_02080c20(elemObj, 8);
    func_02080c68(elemObj, 8, 0);
    int flag = 0;
    struct Element020de650* elem = func_020dedd0((struct Container020dedd0*)(self + kRegion874), *(short*)(self + kRegion103a));
    if (elem != NULL) {
        int t = (elem->nibble <= 7) ? 1 : flag;
        flag = (t != 0);
    }
    if (flag != 0) {
        short key = *(short*)(self + kRegion103a);
        int sum = func_02086aec(battleSum, key);
        func_02080fa8((struct Container02080fa8*)elemObj, 0x54, sum);
    } else {
        func_02080c04(elemObj, 8);
    }
    func_020813ec(elemObj, 8);
}
