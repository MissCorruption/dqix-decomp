#pragma once

struct StructF0x60_0203cdd0 {
    char pad[0x60];
    int field60;
};

struct S02040538 {
    char pad[0xc];
    void *field0xc;
};

struct Entry_203dce4 {
    int flags;
    unsigned char unknown4[0x10];
    void* child14;
    void* child18;
    void* child1c;
};

extern "C" void func_02040af0(Entry_203dce4* entry, int value);
extern "C" int func_020409e0(Entry_203dce4* entry);
extern "C" int func_02040a20(Entry_203dce4* entry);

extern "C" int func_0203cdd0(StructF0x60_0203cdd0 *obj);
extern "C" int func_02040528(int *obj);
extern "C" void *func_02040538(S02040538 *p);
