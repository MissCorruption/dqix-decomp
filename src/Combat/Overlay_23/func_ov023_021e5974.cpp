#include <globaldefs.h>
#include <std_library_functions.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/Model3D.h"
#include "World/Object3D.h"

struct Container020dedd0;

struct PartModel_021e5974
{
    int unk_0;
    unsigned int unk_4_0 : 12;
    unsigned int id_ : 8;
    unsigned int unk_4_20 : 12;
};

struct StructDE234_020de234
{
    PartModel_021e5974* model_;
    int unk_4;
    int unk_8;
    int unk_c;
    unsigned int unk_10_0 : 20;
    unsigned int letter_ : 8;
    unsigned int unk_10_28 : 4;
    short unk_14;
    short unk_16;
    short level_;
};

struct PartyMemberAppearance_021e5974
{
    short models_[10];
    unsigned char female_ : 1;
    unsigned char eyeColor_ : 3;
    unsigned char skinColor_ : 4;
    unsigned char hairColor_ : 4;
    unsigned char unk_15_4 : 4;
    short unk_16;
    short width_;
    short height_;
};

struct PartyMemberData_021e5974
{
    char pad0[0x488];
    PartyMemberAppearance_021e5974 appearance_;
    char pad4a4[0x568 - 0x4a4];
    short vocation_;
    unsigned char unk_56a;
};

struct VRAMManagerState_021e5974
{
    char data[0x70];
};

struct CharacterModel_021e5974
{
    Object3D parts_[10];
    SafeAllocator allocators_[10];
    SafeAllocator animationAllocator_;
    VRAMManagerState_021e5974 vramStates_[10];
    short tasks_[12];
    struct Container020dedd0* names_;
    unsigned char holdsWithArms_;
    unsigned char unk_c11;
    unsigned char loading_;
    unsigned char bodyChanged_;
    unsigned char visible_;
    unsigned char vocation_;
    char unk_c16[2];
    PartyMemberData_021e5974* member_;
    short angle_;
    unsigned char colored_;
    char unk_c1f;
};

struct Extension_021e5974
{
    char name_[8];
};

int GetField0x3acValue_020100a8(GameState* state);
void CopyAndClampShorts_021e5fdc(void* vocation, short* models, short* appearance);
StructDE234_020de234* FindElementByKey020dedd0(struct Container020dedd0* names, int id);
unsigned short GetPreferredPackedField020de234(StructDE234_020de234* p, int preferMid);
extern "C" void func_ov023_021e61a0(CharacterModel_021e5974* self);

extern const int data_ov023_021fd698[5];
extern const Extension_021e5974 data_ov023_021fd678;
extern const char data_ov023_021fdd16[];
extern const char data_ov023_021fd680[10];
extern const char data_ov023_021fdd1c[];
extern const char data_ov023_021fdd2a[];
extern const char data_ov023_021fdd45[];
extern const char data_ov023_021fdd58[];

// USA: func_ov023_021e5974
extern "C" ARM void func_ov023_021e5974(CharacterModel_021e5974* self, PartyMemberData_021e5974* member,
                                        int vocation, int unused, int force)
{
    char path[0x80];
    char anim[0x80];
    short models[10];
    short modelId;

    if (member == NULL)
        return;

    self->member_ = member;
    func_ov023_021e61a0(self);
    GameState* state = GameState::GetInstance();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    PartyMemberAppearance_021e5974* appearance = &member->appearance_;
    if (vocation < 0)
        vocation = member->vocation_;
    if (vocation < 0)
        vocation = GetField0x3acValue_020100a8(state);
    self->vocation_ = vocation;
    CopyAndClampShorts_021e5fdc((void*)vocation, models, appearance->models_);
    self->parts_[3].unknown_2_ = -1;
    self->parts_[4].unknown_2_ = -1;
    FindElementByKey020dedd0(self->names_, models[7]);
    StructDE234_020de234* entries[10] = {0};
    entries[0] = FindElementByKey020dedd0(self->names_, models[0]);
    entries[7] = FindElementByKey020dedd0(self->names_, models[7]);
    self->angle_ = self->parts_[0].rotation_.y;

    self->bodyChanged_ = 0;
    for (int i = 0; i < 5; i++)
    {
        int part = data_ov023_021fd698[i];
        if (models[part] != (modelId = self->parts_[part].unknown_2_) || force != 0)
        {
            self->bodyChanged_ = 1;
            self->parts_[0].unknown_2_ = -1;
            self->parts_[6].unknown_2_ = -1;
            self->parts_[5].unknown_2_ = -1;
            self->parts_[1].unknown_2_ = -1;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (models[i] < 0)
        {
            self->parts_[i].Destroy();
            self->parts_[i].unknown_2_ = -1;
            if (i == 0)
                models[5] = -1;
            continue;
        }
        StructDE234_020de234* entry = FindElementByKey020dedd0(self->names_, models[i]);
        if (entry == NULL)
        {
            self->parts_[i].Initialize();
            self->parts_[i].unknown_2_ = models[i];
            continue;
        }
        self->parts_[i].Destroy();
        self->allocators_[i].Reset();
        bool ok;
        if (member == NULL)
        {
            ok = false;
        }
        else
        {
            int id;
            StructDE234_020de234* body = entries[0];
            StructDE234_020de234* weapon = entries[7];
            int female = member->appearance_.female_;
            id = GetPreferredPackedField020de234(entry, female);
            Extension_021e5974 ext = data_ov023_021fd678;
            char prefix[2] = {0};

            if (i == 4)
            {
                strcpy(ext.name_, data_ov023_021fdd16);
                prefix[0] = 'a';
                prefix[1] = 0;
                id += appearance->hairColor_;
            }
            if (i == 3)
            {
                prefix[0] = 'a';
                prefix[1] = 0;
                if (weapon != NULL && weapon->level_ > -1)
                {
                    unsigned int rank = (unsigned int)GetPreferredPackedField020de234(weapon, female) / 100;
                    if (rank < 10)
                    {
                        char c = data_ov023_021fd680[rank];
                        if (c == 0)
                        {
                            ok = false;
                            goto queue;
                        }
                        prefix[0] = c;
                        if (rank == 3 && female == 0 && appearance->models_[3] == 0x2329)
                            prefix[0] = 'f';
                    }
                    else
                    {
                        ok = false;
                        goto queue;
                    }
                }
            }
            if (i == 5)
            {
                modelId = appearance->models_[4];
                if (modelId == 0x1f4a || modelId < 0)
                    id = GetPreferredPackedField020de234(body, female);
            }
            if (entry->level_ == 1000)
                id += member->unk_56a;
            sprintf(path, data_ov023_021fdd1c, (char)entry->letter_, id, prefix, ext.name_);
            ok = true;
        }
    queue:
        if (ok)
        {
            self->tasks_[i] = loader->QueueLoadFileInGP2(data_ov023_021fdd2a, path, NULL);
            self->parts_[i].unknown_2_ = models[i];
        }
    }

    self->bodyChanged_ = 1;
    if (self->bodyChanged_)
    {
        StructDE234_020de234* body = FindElementByKey020dedd0(self->names_, models[0]);
        StructDE234_020de234* weapon = FindElementByKey020dedd0(self->names_, models[8]);
        unsigned char weaponId = 0;
        if (weapon != NULL)
            weaponId = weapon->model_->id_;
        if (body != NULL)
        {
            int sex = 'm';
            if (appearance->female_ == 1)
                sex = 'w';
            sprintf(anim, data_ov023_021fdd45, body->model_->id_, weaponId, sex);
            self->tasks_[10] = loader->QueueLoadFileInGP2(data_ov023_021fdd2a, anim, NULL);
            sprintf(anim, data_ov023_021fdd58, body->model_->id_, weaponId, sex);
            self->tasks_[11] = loader->QueueLoadFileInGP2(data_ov023_021fdd2a, anim, NULL);
            if (self->parts_[0].pModel_ != NULL)
                self->parts_[0].pModel_->RemoveAnimations();
            self->parts_[0].RemoveAllAnimationPackages();
            self->animationAllocator_.Reset();
        }
    }
    self->loading_ = 1;
    self->colored_ = 0;
}
