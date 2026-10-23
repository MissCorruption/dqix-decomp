#pragma once

struct Elem0209998c {
    unsigned short f0;
    unsigned short f2;
    unsigned char f4;
    char f5[7];
    unsigned char fc;
    unsigned char fd;
    unsigned char fe;
    unsigned char pad;
};

struct List0209998c {
    struct Elem0209998c *data;
    int count;
    int cap;
};

extern "C" void *func_02011584(void *obj);
extern "C" Elem0209998c *func_0209998c(List0209998c *list, const char *name);
