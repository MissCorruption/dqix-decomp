#ifndef COMBAT_NODE_LOOKUP_H
#define COMBAT_NODE_LOOKUP_H

struct NodeDB20 {
    unsigned char id;
    char unk[0x67];
    NodeDB20 *next;
};

extern "C" NodeDB20 *func_0206db20(void *base, int key);
extern "C" void func_0206dd68(void *base, int key);

#endif
