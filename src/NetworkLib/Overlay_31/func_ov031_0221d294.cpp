#include <globaldefs.h>

struct NameLabelEntry {
    int nameLength;
    char name[0x20];
    int active;
    unsigned int labelLength;
    char label[0x24];
    unsigned int flags;
};

struct NameLabelTable {
    unsigned int count;
    NameLabelEntry entries[64];
};

extern "C" int func_ov031_0221e650(const char* text);
extern "C" int func_ov031_0221e4fc(unsigned char* a, unsigned char* b, int n);
extern char data_ov031_0224b0d0[];

// USA: func_ov031_0221d294
extern "C" THUMB int func_ov031_0221d294(NameLabelTable* table) {
    int result = 0;
    int found = 0;
    int count = table->count;
    int i;
    if (table->count == 0) {
        return 5;
    }
    if (table->count > 64) {
        count = 64;
    }
    i = 0;
    if (count > 0) {
        char* entry = (char*)table;
        char* name = (char*)table + 8;
        do {
            if ((*(unsigned int*)(entry + 0x54) & 1) != 0 &&
                *(int*)(entry + 4) == func_ov031_0221e650(data_ov031_0224b0d0) &&
                func_ov031_0221e4fc((unsigned char*)name, (unsigned char*)data_ov031_0224b0d0,
                                    func_ov031_0221e650(data_ov031_0224b0d0)) == 0) {
                found++;
            }
            i++;
            entry += 0x54;
            name += 0x54;
        } while (i < count);
    }
    if (found > 1) {
        result = 4;
    }
    if (found == 0) {
        result = 5;
    }
    return result;
}
