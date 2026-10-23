#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/GrottoTileGraph.h"
#include "std_library_functions.h"

struct InitStruct;
struct Array020286fc;
struct Array02028754;
struct Array0202834c;
struct BoundedHalfwordPairList;
struct Container02028170;
struct List_020283c0;
struct AppendPairList;
struct TimeStamp020105a8;
extern "C" void func_020280f8(InitStruct*);
extern "C" void func_020280b0(InitStruct*);
extern "C" void func_020286fc(Array020286fc*, SafeAllocator*, int);
extern "C" void func_02028754(Array02028754*, SafeAllocator*, int);
extern "C" void func_0202834c(Array0202834c*, SafeAllocator*, int);
extern "C" void func_02028378(BoundedHalfwordPairList*, HalfwordPair*);
int GenerateGrottoObjectPositionOrientation(void*, int, int, int*, int*, const TileFeaturePlacementData*, bool);
extern "C" void func_02028170(Container02028170*, Elem02028170*);
extern "C" Elem02028170* func_020283c0(List_020283c0*, int);
extern "C" void func_020281d8(AppendPairList*, AppendEntry*);
extern "C" void func_02028214(GrottoTileLists0201a300*, SafeAllocator*);
extern "C" void func_020105a8(TimeStamp020105a8*, int*);

static inline unsigned int GrottoTileId0201a300(unsigned int x, unsigned int y) {
    SDK_ASSERT(x < 16 && y < 16);
    return x + (y << 4);
}

// USA: func_0201a300
extern "C" ARM int func_0201a300(Zone3D* zone, int floor, GrottoTileOwner0201a300* owner, const TileFeaturePlacementData* placements, FloorMap* map) {
    GameState* state = GameState::GetInstance();
    if (!owner) return 1;
    srand(owner->zoneId % 20);
    unsigned char tiles[256];
    FloorMap* sourceMap = map ? map : &zone->grotto_.floorMap_;
    memcpy(tiles, sourceMap->pMapData, 256);
    int count = 0;
    int neighbors = 0;
    int y;
    int x;
    unsigned int previousY;
    for (y = 1; y < 15; y++) {
        for (x = 1; x < 15; x++) {
            previousY = y;
            previousY -= 1;
            int value = tiles[x + (y << 4)];
            if (value == 1 || value == 3) continue;
            int left = tiles[x - 1 + (y << 4)];
            int above = tiles[x + (previousY << 4)];
            if (left != 1 && left != 3) neighbors++;
            count++;
            if (above != 1 && above != 3) neighbors++;
        }
    }
    int remaining = 0x1020 - ((count << 4) + (neighbors << 3));
    if (remaining < 0) neighbors -= abs(remaining / 8) + 1;
    func_020280f8((InitStruct*)&owner->lists);
    func_020280b0((InitStruct*)&owner->lists);
    func_020286fc((Array020286fc*)&owner->lists, owner->allocator, count);
    func_02028754((Array02028754*)&owner->lists, owner->allocator, neighbors);
    func_0202834c((Array0202834c*)&owner->lists, owner->allocator, 1);
    HalfwordPair origin;
    origin.first = 0;
    origin.second = 0;
    func_02028378((BoundedHalfwordPairList*)&owner->lists, &origin);
    for (int y = 1; y < 15; y++) {
        int previousY;
        int x = 1;
        for (; x < 15; x++) {
            previousY = y - 1;
            int value = tiles[x + (y << 4)];
            int id = x + (y << 4);
            if (value == 1 || value == 3) continue;
            AppendEntry pair;
            Elem02028170 feature;
            int tileX;
            int tileZ;
            feature.id = 0;
            feature.field_1 = 0;
            feature.field_2 = 0;
            feature.field_c = 0;
            feature.flags = 0;
            GenerateGrottoObjectPositionOrientation(zone, x, y, &tileX, &tileZ, placements, false);
            feature.field_6 = 0;
            feature.x = tileX >> 12;
            feature.z = tileZ >> 12;
            if (value == 4) feature.flags |= 2;
            feature.id = id;
            func_02028170((Container02028170*)&owner->lists, &feature);
            int leftId = x - 1 + (y << 4);
            int left = tiles[leftId];
            int aboveId = x + (previousY << 4);
            int above = tiles[aboveId];
            if (left != 1 && left != 3) {
                pair.second = 0;
                pair.first = 0;
                pair.first = func_020283c0((List_020283c0*)&owner->lists, GrottoTileId0201a300(x, y));
                pair.second = func_020283c0((List_020283c0*)&owner->lists, leftId);
                func_020281d8((AppendPairList*)&owner->lists, &pair);
            }
            if (above != 1 && above != 3) {
                pair.second = 0;
                pair.first = 0;
                pair.first = func_020283c0((List_020283c0*)&owner->lists, id);
                pair.second = func_020283c0((List_020283c0*)&owner->lists, aboveId);
                func_020281d8((AppendPairList*)&owner->lists, &pair);
            }
        }
    }
    func_02028214(&owner->lists, owner->allocator);
    int elapsed;
    func_020105a8((TimeStamp020105a8*)state, &elapsed);
    srand(elapsed);
    return 1;
}
