#pragma once

struct Element_1f2a4 {
    char unk[0x20];
};

struct Manager_1f2a4 {
    char unk[0xc];
    struct Element_1f2a4 *elements;
    int count;
};

extern "C" Element_1f2a4 *func_0201f2a4(Manager_1f2a4 *manager, int index);
