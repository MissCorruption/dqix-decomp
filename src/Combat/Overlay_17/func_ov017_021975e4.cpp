#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "World/Zone3D.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

typedef ZoneFeatures::Opcode6aEntry PathNode_021975e4;

struct BitField0203402c;
struct ListHead02046b60;

extern "C" void* func_02012fe4(void);
extern "C" unsigned int* func_020d6c00();
extern "C" int func_020535c8(signed char* obj);
extern "C" int func_0203402c(BitField0203402c* obj);
extern "C" int func_02046b60(ListHead02046b60* list, int id);
extern "C" void* func_0201e838(unsigned char* obj, unsigned int index);
extern "C" int func_02094b9c(PathNode_021975e4* node, Vector3i* point);
extern "C" void func_020466e4(unsigned int* field, unsigned int bits);

// USA: func_ov017_021975e4
extern "C" ARM void func_ov017_021975e4(GameResources* state) {
    GameState* game = GameState::GetInstance();
    Zone3D* zone = (Zone3D*)func_02012fe4();
    unsigned int* flags = func_020d6c00();
    GameObject* player = game->GetUnknownGameObject();
    Vector3i anchor = player->obj3D_.position_;
    SubBlock02038508* current = func_020399a8(player);
    GameResources* res = GetGameResources();
    ListHead02046b60* list = (ListHead02046b60*)res->unknown_ptr_array_36fc[0];

    if (g_keyManager.TestKeysHeld(0x402)) return;
    if (func_020535c8((signed char*)player) || current->active) return;
    if (func_0203402c((BitField0203402c*)player)) return;
    if (func_02046b60(list, 0xc)) return;
    if (func_02046b60(list, 0x2d)) return;
    if (func_02046b60(list, 0x26)) return;
    if (func_02046b60(list, 0x35)) return;
    int idle = ((unsigned char*)player)[0xbe] == 0 ? 1 : 0;
    if (idle == 1) return;

    PathNode_021975e4* node = (PathNode_021975e4*)func_0201e838((unsigned char*)&zone->substruct_6c_, 9);
    while (node != 0) {
        SubBlock02038508 block;
        func_02038508(&block);
        if (func_02094b9c(node, &anchor)) {
            Vector3i nodeDir;
            int cosine = fix32cos(node->unk_20);
            nodeDir.x = fix32sin(node->unk_20);
            nodeDir.y = 0;
            nodeDir.z = cosine;
            Vector3fix_Normalize(&nodeDir, &nodeDir);

            short heading = *(short*)((char*)player + 0xae);
            Vector3i playerDir;
            cosine = fix32cos(heading);
            playerDir.x = fix32sin(heading);
            playerDir.y = 0;
            playerDir.z = cosine;
            Vector3fix_Normalize(&playerDir, &playerDir);

            Vector3i facing = *(Vector3i*)(res->unknown_4420 + 0x18);
            int alignment = Vector3fix_InnerProduct(&nodeDir, &playerDir);
            int lateral = Vector3fix_InnerProduct(&nodeDir, &facing);
            Vector3i offset;
            Vector3fix_Subtract(&anchor, &node->unk_8.vec, &offset);

            if (node->unk_2c.type9.unk_5 & 1) {
                if (alignment >= 0) {
                    node = node->pNext;
                    continue;
                }
            } else {
                if (alignment <= 0) {
                    node = node->pNext;
                    continue;
                }
            }

            int ready = 0;
            if ((*(short*)(state->unknown_42e3 + 0xb)) <= 1) {
                if (((unsigned char*)player)[0xbe] == 1 && (lateral < -0xccc || lateral > 0xccc || alignment < -0xccc || alignment > 0xccc)) {
                    (*(short*)(state->unknown_42e3 + 0xb))++;
                } else {
                    (*(short*)(state->unknown_42e3 + 0xb)) = 0;
                }
            } else if ((*(short*)(state->unknown_42e3 + 0xb)) > 1) {
                (*(short*)(state->unknown_42e3 + 0xb)) = 0;
                ready = 1;
            }
            if (!ready) {
                node = node->pNext;
                continue;
            }

            PathNode_021975e4* partner = func_0201e6d4(&zone->substruct_6c_, node->unk_2c.type9.unk_2);
            if (!partner) return;

            block.active = 1;
            block.heading = node->unk_20;
            if (node->unk_2c.type9.unk_5 & 1) {
                block.endNode = node;
                block.startNode = partner;
                block.start.vec = partner->unk_8.vec;
                block.end.vec = node->unk_8.vec;
                block.startControl.vec = partner->unk_8.vec;
                block.endControl.vec = node->unk_8.vec;
                block.startHeading = partner->unk_20;
                block.endHeading = node->unk_20;
                block.reversed = 1;
                block.endControl.vec.x += nodeDir.x;
                block.endControl.vec.z += nodeDir.z;
                block.startControl.vec.x += -nodeDir.x >> 2;
                block.startControl.vec.z += -nodeDir.z >> 2;
                block.end.vec.y -= 0x1000;
                block.startHeading -= 0x3243;
                if (block.startHeading < 0) block.startHeading += 0x6487;
            } else {
                block.endNode = partner;
                block.startNode = node;
                block.start.vec = node->unk_8.vec;
                block.end.vec = partner->unk_8.vec;
                block.startControl.vec = node->unk_8.vec;
                block.endControl.vec = partner->unk_8.vec;
                block.startHeading = node->unk_20;
                block.endHeading = partner->unk_20;
                block.reversed = 0;
                block.endControl.vec.x += nodeDir.x;
                block.endControl.vec.z += nodeDir.z;
                block.startControl.vec.x += -nodeDir.x >> 2;
                block.startControl.vec.z += -nodeDir.z >> 2;
                block.end.vec.y -= 0x1000;
                block.startHeading -= 0x3243;
                if (block.startHeading < 0) block.startHeading += 0x6487;
            }
            func_020398b4(player, &block);
            func_020466e4(flags, 0x400);
        }
        node = node->pNext;
    }
}
