#include <globaldefs.h>
#include "World/ZoneChest.h"
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Entry_02028bd0;
struct Obj02028c64;
struct Obj0205eaa0;
struct Obj020397cc;
struct ProtagonistSpeed {
    char pad_00[0xb2];
    short speed;
};
struct SoundTable { int values[5]; };
struct EventParameter {
    char pad_00[0xc];
    int ownerId;
    char pad_10[0xc];
    unsigned short nodeId;
    unsigned short entryKey;
    char pad_20[8];
    short angle;
    char pad_2a[0xa];
};
extern "C" void* func_0205ec34();
extern "C" int func_02064b24(void*, int, unsigned short, void*);
#if defined(jpn)
#define data_020e6e74 data_020e7718
#endif
int fix32ReduceAngle0To2Pi(int);
int fix32cos(int);
int fix32sin(int);
void Vector3fixMultiplyScalar(const Vector3i*, int, Vector3i*);
extern "C" void* func_0201e838(unsigned char*, unsigned int);
extern "C" void func_0205eaa0(Obj0205eaa0*, int, int);
extern "C" void func_020397cc(Obj020397cc*, int);
extern "C" void func_ov017_021d196c(unsigned short, unsigned short, int);
extern "C" Entry_02028bd0* func_02027ca4();
extern "C" Obj02028c64* func_02028bd0(Entry_02028bd0*, int);
extern "C" void func_02028c64(Obj02028c64*, int);
extern const SoundTable data_020e6e74;
extern Obj0205eaa0 data_02108760;

// USA: func_02018300
extern "C" ARM void func_02018300(Zone3D* self, ZoneFeatures::Opcode6aEntry* param, int sound, int forced, int notify) {
    BmdjSceneElement* entry = func_02018b34(self, param);
    if (!entry) return;
    if (!forced && (param->unk_2c.type2.unk_2_high & 8)) return;
    if (!forced && (param->unk_2c.type2.unk_2_high & 4)) return;
    if (!forced) {
        void* manager = func_0205ec34();
        EventParameter event;
        event.angle = param->unk_20;
        event.entryKey = param->unk_2c.type2.unk_1;
        event.nodeId = param->unk_2c.type2.unk_0;
        event.ownerId = self->currentZoneID_;
        func_02064b24(manager, 17, 108, &event);
        func_02064b24(manager, 3, 108, &event);
        if (param->unk_2c.type2.unk_2_high & 4) {
            param->unk_2c.type2.unk_2_high = (unsigned short)(param->unk_2c.type2.unk_2_high & ~4);
            param->unk_2c.type2.unk_2_high = (unsigned short)(param->unk_2c.type2.unk_2_high & ~1);
            return;
        }
    }
    if (param->unk_2c.type2.unk_2_high & 32) {
        short angle = fix32ReduceAngle0To2Pi((short)(param->unk_20 + 0x1922));
        int cosine = fix32cos(angle);
        Vector3i direction;
        direction.x = fix32sin(angle);
        direction.y = 0;
        direction.z = cosine;
        Vector3fix_Normalize(&direction, &direction);
        Vector3fixMultiplyScalar(&direction, param->unk_2c.type2.unk_40, &direction);
        Vector3i unit;
        Vector3fix_Normalize(&direction, &unit);
        entry->direction = unit;
        Vector3i destination;
        Vector3fix_Add(&entry->position, &direction, &destination);
        entry->destination = destination;
        entry->movementSpeed = 0x266;
    } else {
        int delta = (param->unk_2c.type2.unk_2_high & 64) ? 0x1922 : 0x141b;
        if (param->unk_2c.type2.unk_2_high & 256) {
            if (param->unk_2c.type2.unk_2_high & 128) {
                entry->flags |= 16;
                if (param->unk_2c.type2.unk_2_high & 2) {
                    entry->destinationAngle = entry->angle - delta;
                    entry->copiedAngle = entry->destinationAngle;
                } else {
                    entry->destinationAngle = entry->angle + delta;
                    entry->copiedAngle = entry->destinationAngle;
                }
            } else entry->flags |= 4;
        } else {
            if (param->unk_2c.type2.unk_2_high & 128) entry->flags |= 16;
            if (param->unk_2c.type2.unk_2_high & 2) {
                entry->destinationAngle = entry->angle - delta;
            } else {
                entry->destinationAngle = entry->angle + delta;
            }
        }
        entry->rotationSpeed = 0x199;
    }
    param->unk_2c.type2.unk_2_high = (unsigned short)(param->unk_2c.type2.unk_2_high | 1);
    entry->flags |= 1;
    for (int i = 0; i < self->unknown_82c_; i++) {
        BmdjSceneElement* linked = self->terrainElements_[i];
        if (linked->parent == entry) {
            linked->flags |= 1;
            break;
        }
    }
    ZoneFeatures::Opcode6aEntry* current = (ZoneFeatures::Opcode6aEntry*)func_0201e838((unsigned char*)&self->substruct_6c_, 2);
    while (current) {
        if (current->unk_2c.type2.unk_0 == param->unk_2c.type2.unk_0 && current->unk_2c.type2.unk_1 == param->unk_2c.type2.unk_1)
            current->unk_2c.type2.unk_2_high = (unsigned short)(current->unk_2c.type2.unk_2_high | 1);
        current = current->pNext;
    }
    if (sound) {
        SoundTable sounds = data_020e6e74;
        func_0205eaa0(&data_02108760, sounds.values[param->unk_2c.type2.unk_2_low], 0);
    }
    if (forced && (param->unk_2c.type2.unk_2_high & 8)) {
        GameObject* protagonist = GameState::GetInstance()->GetProtagonist();
        ((ProtagonistSpeed*)protagonist)->speed = 0;
        func_020397cc((Obj020397cc*)protagonist, 1);
        self->unk_830[0] = 8;
        return;
    }
    int index = func_02018bc4(self, param);
    if (forced && notify) func_ov017_021d196c(self->currentZoneID_, (unsigned short)index, sound);
    Obj02028c64* flags = func_02028bd0(func_02027ca4(), self->currentZoneID_);
    if (flags && !(param->unk_2c.type2.unk_2_high & 512)) func_02028c64(flags, index);
}
