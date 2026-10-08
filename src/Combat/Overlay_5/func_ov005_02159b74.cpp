#include <globaldefs.h>

struct Menu {
    char pad[0xe64];
    void *obj_;
};

extern "C" void _Z26ResetAndReposition020e280cP11Obj020e280cPv(void *obj, void *value);
extern "C" void _Z26SetHalfwordAtIndex020e16dcPhis(void *obj, int index, short value);
extern "C" void _Z31TransferObjPaletteEntry020e1674P11Obj020e1674ii(void *obj, int index, int value);
extern "C" void _Z23ComputeElementPositionsP9Wf11OuterPtS1_i(void *obj, short *width, short *height, int flag);
extern "C" void _Z26SetEntryPositionFromObjectP14WinObj020e28f0ss(void *obj, short width, short height);
extern "C" void *_ZN9GameState11GetInstanceEv();
extern "C" int _ZNK9GameState12GetTickCountEv(void *gameState);
extern "C" void _Z27UpdateEntryStateAndPositionP11Ctx020e263ci(void *obj, int ticks);
extern "C" void _Z28DispatchWithShortB4_0205eaa0P11Obj0205eaa0ii(void *obj, int a, int b);
extern "C" int data_02108760;

// USA: func_ov005_02159b74
extern "C" ARM void func_ov005_02159b74(Menu *self) {
    _Z26ResetAndReposition020e280cP11Obj020e280cPv(self->obj_, (void *) -1);
    void *obj                                = self->obj_;
    obj                                      = *(void **) ((char *) obj + 0xc);
    *(unsigned char *) ((char *) obj + 0x39) = 0x4c;
    void *inner                              = *(void **) ((char *) self->obj_ + 0x10);
    _Z26SetHalfwordAtIndex020e16dcPhis(inner, 0, 0x18c6);
    _Z31TransferObjPaletteEntry020e1674P11Obj020e1674ii(inner, 1, 0);
    short width;
    short height;
    _Z23ComputeElementPositionsP9Wf11OuterPtS1_i(inner, &width, &height, 0);
    _Z26SetEntryPositionFromObjectP14WinObj020e28f0ss(self->obj_, width, (short) (height + 4));
    int ticks = _ZNK9GameState12GetTickCountEv(_ZN9GameState11GetInstanceEv());
    if (ticks == 0) ticks = 1;
    _Z27UpdateEntryStateAndPositionP11Ctx020e263ci(self->obj_, ticks);
    _Z28DispatchWithShortB4_0205eaa0P11Obj0205eaa0ii(&data_02108760, 5, 0);
}
