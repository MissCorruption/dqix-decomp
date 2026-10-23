#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct PackedNibbleArray0206e120;
struct PackedNibbleArray0206e2dc;
struct SearchStruct0202c1a4;
struct Node02064704;
struct EntryDEE8;
struct SearchNode {
    unsigned short field0;
    unsigned short index : 9;
    unsigned short allowDuringSearch : 1;
    unsigned short enabled : 1;
    unsigned short blocked : 1;
    unsigned short reserved : 4;
    unsigned int category : 8;
    unsigned int whole : 6;
    unsigned int fraction : 5;
    unsigned int flags : 13;
    Node02064704* conditions;
    SearchNode* next;
};
struct SearchTable { char padding0[0xa0]; SearchNode* first; };
struct SearchArguments { char padding0[0xc]; int category; char padding10[0x24]; };
extern "C" PackedNibbleArray0206e120* func_0205ec34();
extern "C" SearchStruct0202c1a4* func_0202ae18();
extern "C" unsigned short* func_02012fe4();
extern "C" int func_0206e2dc(PackedNibbleArray0206e2dc*, int);
extern "C" int func_0202b7d8(int*);
extern "C" signed char func_0202c1a4(SearchStruct0202c1a4*);
extern "C" int func_02064704(void*, Node02064704*, void*);
extern "C" int func_0206e120(PackedNibbleArray0206e120*, int);
extern "C" int func_02095ae0(PackedNibbleArray0206e120*, int);
extern "C" void func_0206dee8(EntryDEE8*, unsigned char, unsigned char*, unsigned char*, unsigned char*);
extern "C" void func_0206e164(PackedNibbleArray0206e120*, int, int);

static inline int IsSearchState(PackedNibbleArray0206e120* values, int index, int state) {
    return func_0206e120(values, index) == state;
}

// USA: func_02095b30
extern "C" ARM void func_02095b30(SearchTable* table, int checkThreshold) {
    GameState::GetInstance();
    PackedNibbleArray0206e120* values = func_0205ec34();
    SearchStruct0202c1a4* search = func_0202ae18();
    unsigned char components[3];
    SearchArguments arguments;
    for (SearchNode* node = table->first; node; node = node->next) {
        if (node->enabled && !func_0206e2dc((PackedNibbleArray0206e2dc*)values, node->index)) continue;
        if (func_0202b7d8((int*)search) && func_0202c1a4(search) && !node->allowDuringSearch) continue;
        if (checkThreshold) {
            func_0206dee8((EntryDEE8*)values, 0, &components[2], &components[1], &components[0]);
            if (!node->enabled) continue;
            if (node->whole * 100 + node->fraction > (unsigned int)(components[2] * 100 + components[1])) continue;
        }
        arguments.category = *func_02012fe4();
        if (!func_02064704(values, node->conditions, &arguments)) continue;
        if (IsSearchState(values, node->index, 3) && !node->allowDuringSearch) continue;
        if (!func_02095ae0(values, node->index)) {
            if (!IsSearchState(values, node->index, 3) || !node->blocked) continue;
        }
        func_0206e164(values, node->index, 1);
    }
}
