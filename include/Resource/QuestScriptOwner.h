#pragma once

class SafeAllocator;
struct Node020958fc;
struct Node02095910;

struct Header020956b8 {
    char unknown0[0xa0];
    Node020958fc* listHead;
    Node02095910* alternateListHead;
};

extern "C" void func_020956b8(Header020956b8* header, SafeAllocator* allocator);
extern "C" void func_0209576c(Header020956b8* header, SafeAllocator* allocator,
                             const void* buffer, unsigned int length, unsigned char mode);
