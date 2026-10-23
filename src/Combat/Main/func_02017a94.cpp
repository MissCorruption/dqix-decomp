#include <globaldefs.h>

#include <World/Zone3D.h>
#include <GameState/GameState.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" void* func_0200fd0c(GameState* battleStruct);
extern "C" int func_0206eaec(unsigned char* base, int row, int col);
extern "C" void* func_0201e838(unsigned char* obj, unsigned int index);
extern "C" int func_02064b24(void* a, int mode, unsigned short id, void* c);

struct Obj0201b600;
struct Elem0201b600;
struct FeatureElem02017a94;
extern "C" struct FeatureElem02017a94* func_0201b600(Obj0201b600*, int, unsigned short);

struct FeatureElem02017a94 {
    unsigned short key;
    unsigned short flags;
    unsigned char pad[0x2b];
};

struct FeatureNode02017a94 {
    unsigned char pad00[0x2d];
    unsigned char id2d;
    unsigned short field2e;
    unsigned char pad30[0x70 - 0x30];
    struct FeatureNode02017a94* next;
};

struct AppendContext02017a94 {
    unsigned char pad00[0x0c];
    unsigned int zoneId;
    unsigned char pad10[0x30 - 0x10];
    unsigned int field30;
};

// USA: func_02017a94
extern "C" ARM void func_02017a94(Zone3D* zone) {
    GameState* gs = GameState::GetInstance();
    if (gs == NULL) {
        return;
    }
    if (func_0200fd0c(gs) == NULL) {
        return;
    }
#if defined(jpn)
    enum { BitmapFlagOffset = 0x285d };
#else
    enum { BitmapFlagOffset = 0x281d };
#endif
    unsigned char* bmp = (unsigned char*)func_0205ec34();
    int row;
    int colLow;
    int colHigh;
    if (bmp != NULL && *(unsigned char*)((char*)zone + BitmapFlagOffset) != 0) {
        for (row = 0; row < 2; row++) {
            for (colLow = 0; colLow < 0x7f; colLow++) {
                if (func_0206eaec(bmp, (unsigned char)row, (short)colLow)) {
                    struct FeatureElem02017a94* e =
                        func_0201b600((struct Obj0201b600*)zone, row, colLow);
                    if (e != NULL) {
                        e->flags &= ~4;
                    }
                }
            }
            for (colHigh = 0x80; colHigh < 0xff; colHigh++) {
                if (func_0206eaec(bmp, (unsigned char)row, (short)colHigh)) {
                    struct FeatureElem02017a94* e =
                        func_0201b600((struct Obj0201b600*)zone, row, colHigh - 0x80);
                    struct FeatureNode02017a94* n;
                    if (e != NULL) {
                        e->flags |= 4;
                        if ((e->flags & 8) != 0) {
                            unsigned int cur;
                            unsigned short mask;
                            e->flags |= 1;
                            n = (struct FeatureNode02017a94*)
                                func_0201e838((unsigned char*)&zone->substruct_6c_, 2);
                            while (n != NULL) {
                                if (n->id2d == e->key) {
                                    cur = n->field2e;
                                    mask = (unsigned short)(((cur << 16) >> 20) | 1);
                                    n->field2e = (cur & 0xffff000f) | ((unsigned int)(mask << 20) >> 16);
                                    break;
                                }
                                n = n->next;
                            }
                        }
                    }
                }
            }
        }
        struct AppendContext02017a94 ctx;
        ctx.zoneId = zone->currentZoneID_;
        func_02064b24(bmp, 3, 0x6c, &ctx);
        func_02064b24(bmp, 0x14, 0x6c, &ctx);
        zone->unk_276c[0x281d - 0x276c] = 0;
    }
}
