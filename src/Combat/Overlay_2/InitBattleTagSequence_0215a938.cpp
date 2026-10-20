#include <globaldefs.h>

int ClearPendingFlag0215a8cc(char* p);
void InitBattleTag0215bf34(char* base);
void InitBattleTag0215c028(char* base);
extern "C" void func_ov002_0215c0f8(unsigned char* obj);
extern "C" void func_ov002_02161cf0(char* base);
extern "C" void func_ov002_0215f3a0(char* base);

// USA: func_ov002_0215a938  (semantic: InitBattleTagSequence_0215a938)
extern "C" ARM void func_ov002_0215a938(char* base) {
#if defined(jpn)
    enum { regionalOffset0 = 0x1a80, regionalOffset1 = 0x1aa8, regionalOffset2 = 0x1a88, regionalTag = 0x16 };
#else
    enum { regionalOffset0 = 0x1bb8, regionalOffset1 = 0x1be0, regionalOffset2 = 0x1bc0, regionalTag = 0x15 };
#endif
    if (!ClearPendingFlag0215a8cc(base)) return;

    *(int*)(base + regionalOffset0) = 1;
    InitBattleTag0215bf34(base);
    InitBattleTag0215c028(base);
    func_ov002_02161cf0(base);
    func_ov002_0215c0f8((unsigned char*)base);

    if (*(short*)(base + regionalOffset1) == 5) {
        *(int*)(base + regionalOffset0) = regionalTag;
        func_ov002_02161cf0(base);
        func_ov002_0215f3a0(base);
    }

    *(int*)(base + regionalOffset2) = 1;
}
