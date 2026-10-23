#include <globaldefs.h>

#if defined(jpn)
enum { kEntriesOffset = 0x39e4, kListOffset = 0x34f4 };
#else
enum { kEntriesOffset = 0x3c04, kListOffset = 0x3704 };
#endif


struct ListNode02046b38 {
    char pad[4];
    struct ListNode02046b38* next;
};
struct ListHead02046b38 {
    struct ListNode02046b38* head;
};
extern "C" int func_02046b38(struct ListHead02046b38* list, struct ListNode02046b38* target);

struct Struct020e3ed8 {
    char pad[0x14];
    int arr[2];
};
extern "C" void func_020e3ed8(struct Struct020e3ed8* p);

struct CombatState020e3c34 {
    unsigned char header;
    unsigned char pad1[7];
    unsigned char byte8;
    unsigned char byte9;
    unsigned short half_a;
    int word_c;
    int word_10;
    int words_14[2];
    int word_1c;
    int word_20;
    unsigned char byte_24;
};
extern "C" void func_020e3c34(struct CombatState020e3c34* obj);

struct TailNode020469b4 {
    char unk0[2];
    unsigned char inList;
    char unk3;
    struct TailNode020469b4* next;
};
struct TailList020469b4 {
    struct TailNode020469b4* head;
    struct TailNode020469b4* tail;
};
extern "C" void func_020469b4(struct TailList020469b4* list, struct TailNode020469b4* node);

extern "C" void func_02046a8c(void* list, void* node);

// USA: func_020e3b8c
extern "C" ARM void func_020e3b8c(char* mgr, int index, int p3, int p4, int p5, int p6, int p7, unsigned char p8)
{
    struct CombatState020e3c34* e = (struct CombatState020e3c34*)(mgr + kEntriesOffset + index * (int)sizeof(struct CombatState020e3c34));

    if (func_02046b38(*(struct ListHead02046b38**)(mgr + kListOffset), (struct ListNode02046b38*)e)) {
        func_020e3ed8((struct Struct020e3ed8*)e);
        func_02046a8c(*(void**)(mgr + kListOffset), e);
    }

    func_020e3c34(e);

    e->byte9 = (unsigned char)index;
    e->half_a = (unsigned short)p3;
    e->word_c = p4;
    e->byte8 = (p5 != 0) ? 1 : 0;
    e->word_20 = p6;
    e->word_10 = p7;
    e->byte_24 = p8;

    func_020469b4(*(struct TailList020469b4**)(mgr + kListOffset), (struct TailNode020469b4*)e);
}
