#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct BitfieldRecord020a1380 {
    unsigned int f0 : 9;   // bits 0-8
    unsigned int f1 : 9;   // bits 9-17
    unsigned int f2 : 9;   // bits 18-26
    unsigned int f3 : 3;   // bits 27-29
    unsigned int f4 : 2;   // bits 30-31
    int next;   // 0x4
    int prev;   // 0x8
};
void ResetBitfieldRecord(struct BitfieldRecord020a1380* rec);

int StringLength_020d2ff0(const char* s);

struct Elem020a1568;
struct Array020a1568;
void AppendElement020a1568(struct Array020a1568* arr, struct Elem020a1568* src);

// The 0x10 .bss block at 0x02109d94 is five separate objects. As one struct the ids load (+0xc)
// cannot be hoisted above the rec store while the count load (+2) stays below it.
unsigned char data_02109d94;              // flags
unsigned short data_02109d96;             // id count
struct Array020a1568* data_02109d98;
SafeAllocator* data_02109d9c;
short* data_02109da0;                     // ids

extern const char data_020f1914[];

// USA: func_020a1180
extern "C" ARM int func_020a1180(Script::Parameter* params, int numParams) {
    struct BitfieldRecord020a1380 rec;
    ResetBitfieldRecord(&rec);
    ResetBitfieldRecord(&rec);

    rec.f0 = params[0].ToInt();

    if (data_02109da0 != 0 && data_02109d96 != 0) {
        bool found = false;
        for (int i = 0; i < data_02109d96; i++) {
            if (rec.f0 == data_02109da0[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return 1;
        }
    }

    rec.f1 = params[1].ToInt();
    rec.f2 = params[2].ToInt();
    rec.f3 = params[3].ToInt();

    if (!(data_02109d94 & 1)) {
        if (rec.f3 == 0 || rec.f3 == 1) return 1;
    }
    if (!(data_02109d94 & 2)) {
        if (rec.f3 == 2) return 1;
    }
    if (!(data_02109d94 & 4)) {
        if (rec.f3 == 7) return 1;
    }
    if (!(data_02109d94 & 8)) {
        if (rec.f3 == 3 || rec.f3 == 4 || rec.f3 == 5 || rec.f3 == 6) return 1;
    }

    rec.f4 = params[4].ToInt();

    const char* src = params[5].ToString();
    int len = StringLength_020d2ff0(src);
    rec.next = (int)data_02109d9c->Allocate(len + 1);
    sprintf((char*)rec.next, data_020f1914, src);
    ((char*)rec.next)[len] = 0;
    AppendElement020a1568(data_02109d98, (struct Elem020a1568*)&rec);

    return 1;
}
