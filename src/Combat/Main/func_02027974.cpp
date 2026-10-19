#include "GameState/GameState.h"
#include <globaldefs.h>

struct MapView02027974 {
    unsigned char unknown0[0x6c];
    unsigned short* tilemap;
};

#if defined(jpn)
enum { kVisitedIndex = 0x4c };
#define data_020e7090 data_020e79a4
#define data_020e7091 data_020e79a5
#else
enum { kVisitedIndex = 12 };
#endif

extern "C" unsigned short* func_02012fe4();
extern unsigned char data_020e7090[][2];
extern unsigned char data_020e7091[][2];

// USA: func_02027974
extern "C" ARM void func_02027974(MapView02027974* view, const unsigned char (*adjacency)[16], void* state) {
    if (adjacency == 0 || state == 0) return;
    GameState* gameState = GameState::GetInstance();
    unsigned short* zone = func_02012fe4();
    unsigned char* visitedTiles = (unsigned char*)&gameState->unk_6fc0[kVisitedIndex] + ((*zone % 20) - 1) * 32;
    for (int z = 0; z < 16; z++) {
        for (int x = 0; x < 16; x++) {
            unsigned char tile = 0;
            unsigned char cell = adjacency[z][x];
            for (int i = 0; i < 47; i++) {
                if (cell == data_020e7090[i][0]) {
                    tile = data_020e7091[i][0];
                    break;
                }
            }
            bool visited;
            if (x < 8) {
                visited = (visitedTiles[z * 2] & (1 << x)) != 0;
            } else {
                visited = (visitedTiles[z * 2 + 1] & (1 << (x - 8))) != 0;
            }
            if (!visited) tile = 0;
            int base = (tile / 16) * 64 + (tile % 16) * 2;
            int base1 = base + 1;
            int pos = x + z * 16;
            int idx = (pos / 16) * 64 + (pos % 16) * 2;
            int idx1 = idx + 1;
            view->tilemap[idx] = base;
            view->tilemap[idx1] = base1;
            view->tilemap[idx + 32] = base + 32;
            view->tilemap[idx1 + 32] = base1 + 32;
        }
    }
}
