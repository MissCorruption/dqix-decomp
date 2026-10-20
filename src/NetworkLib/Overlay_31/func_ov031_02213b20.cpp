#include <globaldefs.h>
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020ca3ec func_020cbeb8
#endif

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

struct SortEntry02213b20 { unsigned char field0; unsigned char id; unsigned char level; unsigned char flags; };
struct SortRecord02213b20 { unsigned char data[0xc0]; };
struct SortState02213b20 { unsigned char field0[0x444]; SortEntry02213b20 entries[11]; SortRecord02213b20 records[11]; };
extern "C" void func_020ca3ec(unsigned int, void*, unsigned int);
extern "C" void func_020ca408(const void*, void*, unsigned int);

// USA: func_ov031_02213b20
extern "C" ARM void func_ov031_02213b20(int index, SortState02213b20* state) {
    int previous;
    SortEntry02213b20* entries = state->entries;
    SortRecord02213b20* records = state->records;
    SortRecord02213b20 temporaryRecord;
    SortEntry02213b20 temporaryEntry;
    previous = index - 1;
    if (previous >= 0) {
        SortEntry02213b20* previousEntry = &entries[previous];
        SortRecord02213b20* previousRecord = &records[previous];
        do {
            if (entries[index].level < entries[previous].level) break;
            func_020ca408(previousEntry, &temporaryEntry, 4);
            func_020ca408(&entries[index], previousEntry, 4);
            func_020ca408(&temporaryEntry, &entries[index], 4);
            func_020ca408(previousRecord, &temporaryRecord, 0xc0);
            func_020ca408(&records[index], previousRecord, 0xc0);
            func_020ca408(&temporaryRecord, &records[index], 0xc0);
            index = previous;
            --previousEntry;
            --previousRecord;
        } while (--previous >= 0);
    }
    func_020ca3ec(0, &entries[10], 4);
    func_020ca3ec(0, &records[10], 0xc0);
}
