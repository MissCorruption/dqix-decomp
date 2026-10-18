#pragma once

#include <globaldefs.h>

struct List0204af64;
struct Node0207f7f0 {
    Node0207f7f0* prev;
    List0204af64* lists;
    unsigned char unknown8[0xd8];
};

struct Manager0207f7f0 {
    int field0;
    unsigned char sub4[8];
    unsigned char arrC[8];
    int field14;
    int field18;
    int field1c;
#if !defined(jpn)
    int tasks[3];
#endif
    List0204af64* lists;
    Node0207f7f0* nodes;
    short field34;
    short field36;
    unsigned char mode;
    unsigned char count;
    unsigned char active;
    unsigned char field3b;
    unsigned char field3c;
};

extern "C" void func_0207f84c(Manager0207f7f0*);
void InitNodeChain0207f7f0(Manager0207f7f0*, Node0207f7f0*, int);

void FlushNotifyEntries_0207f8bc(Manager0207f7f0*);
