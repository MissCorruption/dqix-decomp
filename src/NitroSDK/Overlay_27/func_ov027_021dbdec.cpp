#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

enum Bool021dbdec { FALSE021dbdec = 0, TRUE021dbdec = 1 };

struct Blk021dbdec {
    int w[0x20];
};

struct Msg021dbdec {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned char mac[6];
    unsigned char pad10[0x36 - 0x10];
    unsigned short f36;
    Blk021dbdec blk;
};

struct Entry021dbdec {
    unsigned char buf[0xc0];
    Msg021dbdec msg;
    unsigned char padEnd[0x180 - 0xc0 - sizeof(Msg021dbdec)];
};

typedef void (*Fn021dbdec)(int, void*);

struct Obj021dbdec {
    unsigned char pad0[0x40];
    unsigned char f40[0x400];
    unsigned char f440[0xc4];
    int f504;
    unsigned char pad508[4];
    unsigned char f50c;
    unsigned char pad50d[0x518 - 0x50d];
    unsigned short f518;
    unsigned short f51a;
    Fn021dbdec fn;
    int f520;
    unsigned char pad524[2];
    unsigned short f526;
    unsigned short f528;
    unsigned short f52a;
    unsigned short f52c;
    unsigned char pad52e[0x5e0 - 0x52e];
    unsigned short f5e0;
    unsigned short f5e2;
    int f5e4;
    int f5e8;
    int f5ec;
    unsigned char pad5f0[0x10];
    Entry021dbdec entries[0x10];
};

struct Pos021dbdec {
    void* buf;
    unsigned short f4;
    unsigned short f6;
    unsigned char mac[6];
};

struct Holder021dbdec {
    unsigned short f0;
    unsigned char pad2[6];
    Obj021dbdec* ptr;
    unsigned char padc[0x14];
    Pos021dbdec pos;
};

extern Holder021dbdec data_ov027_021e33e0;

struct CmdData021dbdec {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
};

extern CmdData021dbdec data_ov027_021dd8ec;
extern Pos021dbdec data_ov027_021e3400 __attribute__((aligned(32)));

struct BattleCtx020d5254;

extern "C" ARM void func_ov027_021dbdec(void* arg);
extern "C" void func_ov027_021dbd7c(void);
extern "C" void func_ov027_021db4e0(int a);
extern "C" int func_ov027_021db430(void);
extern "C" int func_ov027_021db3c0(Pos021dbdec* pos);
extern "C" void func_ov027_021dcc8c(void);
extern "C" void func_ov027_021dd0cc(int a, int b);
extern "C" int func_020d4770(int a, int b, int c);
extern "C" int func_020d54d0(void* fn, void* a, void* b, int c, unsigned short flag);
extern "C" void func_020ca3b8(const void* src, void* dst, unsigned int len);
extern "C" void func_020c9be0(void);

extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
void DMAMemcpySynchronous16Bit(int chan, unsigned int src, unsigned int dst, unsigned int len);
extern "C" int func_020d6ad4(int a, int b, int c, int d, unsigned short e);
extern "C" int func_020d5254(int a, BattleCtx020d5254* ctx);
extern "C" int func_020d503c(int a);
extern "C" int func_020d57f4(int a, int b, int c, int d, unsigned short e, unsigned short f,
                               unsigned short g, int h, int i, int j, int k);

// USA: func_ov027_021dbdec
extern "C" ARM void func_ov027_021dbdec(void* arg) {
    Msg021dbdec* msg = (Msg021dbdec*)arg;
    Obj021dbdec* obj = data_ov027_021e33e0.ptr;

    switch (msg->f0) {
    case 0:
        if (msg->f2 != 0) {
            obj->fn(0x100, msg);
        } else {
            obj->fn(0x15, msg);
            func_ov027_021dd0cc(0x1d, func_020d6ad4((int)func_ov027_021dbdec,
                data_ov027_021dd8ec.f6, data_ov027_021dd8ec.f2, data_ov027_021dd8ec.f0,
                data_ov027_021dd8ec.f4));
        }
        return;

    case 0x1d:
        if (msg->f2 != 0) {
            obj->fn(0x100, msg);
        } else {
            data_ov027_021e33e0.pos.buf = obj->f440;
            if (data_ov027_021e33e0.pos.f4 == 0) {
                data_ov027_021e33e0.pos.f4 = 1;
            }
            if (data_ov027_021e33e0.pos.f6 == 0) {
                data_ov027_021e33e0.pos.f6 = 0xc8;
            }
            data_ov027_021e33e0.pos.mac[0] = 0xff;
            data_ov027_021e33e0.pos.mac[1] = 0xff;
            data_ov027_021e33e0.pos.mac[2] = 0xff;
            data_ov027_021e33e0.pos.mac[3] = 0xff;
            data_ov027_021e33e0.pos.mac[4] = 0xff;
            data_ov027_021e33e0.pos.mac[5] = 0xff;
            obj->f5e4 = 1;
            obj->f5e8 = 1;
            func_ov027_021dd0cc(0xa, func_020d5254((int)func_ov027_021dbdec,
                (BattleCtx020d5254*)&data_ov027_021e3400));
        }
        return;

    case 10:
        if (msg->f2 != 0) {
            obj->fn(0x100, msg);
        } else {
            switch (msg->f8) {
            case 3:
                return;

            case 5: {
                Entry021dbdec* list = obj->entries;
                int i;
                for (i = 0; i < obj->f5e0; i++) {
                    int e;
                    int d;
                    int c;
                    int b;
                    int a;
                    e = 0;
                    a = 0;
                    d = 0;
                    c = 0;
                    b = 0;
                    if (msg->mac[0] == list[i].msg.mac[0] && msg->mac[1] == list[i].msg.mac[1]) a = 1;
                    if (a) {
                        if (msg->mac[2] == list[i].msg.mac[2]) b = 1;
                    }
                    if (b) {
                        if (msg->mac[3] == list[i].msg.mac[3]) c = 1;
                    }
                    if (c) {
                        if (msg->mac[4] == list[i].msg.mac[4]) d = 1;
                    }
                    if (d) {
                        if (msg->mac[5] == list[i].msg.mac[5]) e = 1;
                    }
                    if (e) {
                        list[i].msg.f36 = msg->f36;
                        list[i].msg.blk = msg->blk;
                        InvalidateDataCacheRange(&obj->entries[i], 0xc0);
                        DMAMemcpySynchronous16Bit(data_ov027_021e33e0.f0, (unsigned int)obj->f440,
                            (unsigned int)&obj->entries[i], 0xc0);
                        obj->f5ec = i;
                        goto found;
                    }
                }
                if (i < 0x10) {
                    obj->f5e0 = i + 1;
                    func_020ca3b8(msg, &list[i].msg, 0xb8);
                    InvalidateDataCacheRange(&obj->entries[i], 0xc0);
                    DMAMemcpySynchronous16Bit(data_ov027_021e33e0.f0, (unsigned int)obj->f440,
                        (unsigned int)&obj->entries[i], 0xc0);
                    obj->f5ec = i;
                }
            found:
                obj->fn(4, msg);
                if (obj->f5e4 == 0) return;
                if (obj->f5e8 != 0 && func_ov027_021db3c0(&data_ov027_021e3400) == 0) {
                    func_ov027_021dcc8c();
                }
                func_ov027_021dd0cc(0xa, func_020d5254((int)func_ov027_021dbdec,
                    (BattleCtx020d5254*)&data_ov027_021e3400));
                return;
            }

            case 4:
                obj->fn(5, msg);
                if (obj->f5e4 == 0) return;
                if (obj->f5e8 != 0 && func_ov027_021db3c0(&data_ov027_021e3400) == 0) {
                    func_ov027_021dcc8c();
                }
                func_ov027_021dd0cc(0xa, func_020d5254((int)func_ov027_021dbdec,
                    (BattleCtx020d5254*)&data_ov027_021e3400));
                return;

            default:
                obj->fn(0x100, msg);
                return;
            }
        }
        return;

    case 11:
        if (msg->f2 != 0) {
            obj->fn(0x100, msg);
        } else {
            arg = (void*)obj->f520;
            func_ov027_021dd0cc(0xc, func_020d54d0((void*)func_ov027_021dbdec, arg, 0, 1, 0));
        }
        return;

    case 12:
        if (msg->f2 != 0) {
            obj->f5e0 = 0;
            obj->fn(0xb, msg);
        } else {
            switch (msg->f8) {
            case 6:
                obj->f52a = 0;
                obj->f528 = 1;
                return;

            case 7:
                obj->f5e2 = *(unsigned short*)msg->mac;
                obj->fn(6, msg);
                obj->f52a = 1;
                if (func_020d4770(1, (int)func_ov027_021dbd7c, 0) != 0) return;
                func_ov027_021dd0cc(0xe, func_020d57f4((int)func_ov027_021dbdec,
                    obj->f504, obj->f51a, (int)obj->f40, obj->f518,
                    obj->f52c ? FALSE021dbdec : TRUE021dbdec, 0, 0, 0, 1, 1));
                return;

            case 9:
                obj->fn(0xa, msg);
                obj->f52a = 0;
                obj->f528 = 0;
                return;

            case 0x1a:
                return;

            default:
                obj->fn(0x100, msg);
                return;
            }
        }
        return;

    case 14:
        switch (msg->f4) {
        case 0xa:
            obj->f528 = 1;
            if (func_ov027_021db430() != 0) {
                obj->fn(0x19, 0);
            }
            return;

        case 0xc:
            return;

        case 0xd:
            return;

        default:
            obj->fn(0x100, msg);
            return;
        }
        return;

    case 15:
        obj->f50c = 0;
        if (msg->f2 == 0) {
            obj->fn(8, msg);
        } else if (msg->f2 == 9) {
            obj->fn(0x29, msg);
        } else {
            obj->fn(0x12, msg);
        }
        if (data_ov027_021e33e0.ptr->f526 == 0) {
            obj->fn(0x19, 0);
        }
        return;

    case 1:
        if (msg->f2 != 0) {
            obj->f526 = 0;
            obj->fn(0x100, msg);
        } else {
            obj->f52a = 0;
            data_ov027_021e33e0.ptr->f528 = 0;
            func_ov027_021dd0cc(2, func_020d503c((int)func_ov027_021dbdec));
        }
        return;

    case 2:
        if (msg->f2 != 0) {
            obj->f526 = 0;
            obj->fn(0x100, msg);
        } else {
            func_ov027_021db4e0((int)msg);
        }
        return;

    case 0x15:
        if (func_ov027_021db430() != 0) {
            obj->fn(0x19, 0);
        }
        return;

    case 0x80:
        switch (msg->f4) {
        case 0x16:
            func_020c9be0();
            return;
        case 0x17:
            return;
        default:
            return;
        }
        return;

    default:
        obj->fn(0x100, msg);
        return;
    }
}
