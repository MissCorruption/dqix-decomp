#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"
#include "std_library_functions.h"
#include <globaldefs.h>
#include "Input/Input.h"

struct EntryA68;
struct TableA68 {
    EntryA68 *entries;
    short count;
};
struct Container0205a330;

struct Profile02172e84 {
    unsigned int year_ : 12;
    unsigned int month_ : 4;
    unsigned int day_ : 5;
    unsigned int design_ : 4;
    unsigned int female_ : 1;
    unsigned int initialized_ : 1;
    unsigned int designChosen_ : 1;
    unsigned int birthdayChosen_ : 1;
    unsigned int accoladeChosen_ : 1;
    unsigned int vocationAccolade_ : 1;
    unsigned int showBirthday_ : 1;
    unsigned int age_ : 9;
    int title_ : 10;
    int accolade_ : 11;
    int edited_ : 1;
    unsigned int unk_4_31 : 1;
};

struct Member02172e84 {
    char name_[0x6c];
    Profile02172e84 profile_;
    char pad74[0xe8 - 0x74];
};

static inline int GetAccolade(Profile02172e84 *profile) { return profile->accolade_; }
static inline Profile02172e84 *GetProfile(Member02172e84 *member) { return &member->profile_; }

struct Party02172e84 {
    unsigned char state_;
#if defined(jpn)
    char pad1[0x35c - 1];
    Member02172e84 members_[3];
    unsigned char count_;
    char pad615[0x634 - 0x615];
#else
    char pad1[0x460 - 1];
    Member02172e84 members_[3];
    unsigned char count_;
    char pad719[0x738 - 0x719];
#endif
    unsigned int joined_;
};

struct Battle02172e84 {
    char pad0[0x28];
    unsigned char flag28_;
};

struct Messages02172e84 {
#if defined(jpn)
    char pad0[0x228];
    void *target_;
    int field2dc_;
    Container0205a330 *entries_;
    char pad234[0x868 - 0x234];
    int busy_;
    int field99c_;
    int state_;
    char pad874[0x17ee - 0x874];
    unsigned char flag19be_;
#else
    char pad0[0x2d8];
    void *target_;
    int field2dc_;
    Container0205a330 *entries_;
    char pad2e4[0x998 - 0x2e4];
    int busy_;
    int field99c_;
    int state_;
    char pad9a4[0x19be - 0x9a4];
    unsigned char flag19be_;
#endif
};

struct Progress02172e84 {
    unsigned char pad0[0xb48];
    unsigned int seen_;
    unsigned int announced_;
};

struct Save02172e84 {
    unsigned char pad0[0x1000];
    Progress02172e84 progress_;
};

struct Zone02172e84 {
#if defined(jpn)
    unsigned char pad0[0x860];
#else
    unsigned char pad0[0x840];
#endif
    Save02172e84 save_;
};

static inline bool IsLinked(Party02172e84 *party) { return party->state_ == 8 || party->state_ == 9; }

struct Touch02172e84 {
    char pad0[0x30];
    int x_;
    int y_;
    char pad38[0x54 - 0x38];
    unsigned char released_;
    char pad55[0x70 - 0x55];
};

#if defined(jpn)
struct Self02172e84 {
    unsigned char active_;
    unsigned char shown_;
    char text_[0x40];
    char title_[0x80];
    unsigned char announceCount_;
    char padc3[0xc8 - 0xc3];
    unsigned char done_;
    unsigned char busy_;
    char padca[0xcc - 0xca];
    Party02172e84 *party_;
    unsigned char shownCount_;
    unsigned char memberIndex_;
    char padd2[0xd4 - 0xd2];
    char fieldd8_[0xe8 - 0xd4];
    unsigned char mode_;
    unsigned char subMode_;
    unsigned char step_;
    char padeb[0x134 - 0xeb];
    int field128_;
    Container0205a330 *entries_;
    char field130_[0x1cc - 0x13c];
    int field1c0_;
    char pad1d0[0x1dc - 0x1d0];
    TableA68 titles_;
    TableA68 texts_;
    char field1e0_[0x319 - 0x1ec];
    unsigned char field30d_;
    char pad31a[0x34c - 0x31a];
    void *field340_;
    unsigned char pending_;
};
#else
struct Self02172e84 {
    unsigned char active_;
    unsigned char shown_;
    short bit_;
    char text_[0x40];
    char title_[0x80];
    unsigned char announceCount_;
    char padc5[0xca - 0xc5];
    unsigned char done_;
    unsigned char busy_;
    char padcc[0xd0 - 0xcc];
    Party02172e84 *party_;
    unsigned char shownCount_;
    unsigned char memberIndex_;
    char padd6[0xd8 - 0xd6];
    char fieldd8_[0xec - 0xd8];
    unsigned char mode_;
    unsigned char subMode_;
    unsigned char step_;
    char padef[0x128 - 0xef];
    int field128_;
    Container0205a330 *entries_;
    char field130_[0x1c0 - 0x130];
    int field1c0_;
    char pad1c4[0x1d0 - 0x1c4];
    TableA68 titles_;
    TableA68 texts_;
    char field1e0_[0x30d - 0x1e0];
    unsigned char field30d_;
    char pad30e[0x340 - 0x30e];
    void *field340_;
    unsigned char pending_;
};
#endif

Messages02172e84 *GetGlobalField0x1c020421a0();
const char *FindEntryByKey_02072a68(TableA68 *table, int key);
#if defined(jpn)
extern "C" void func_0204500c(Messages02172e84 *window, const char *text, int mode);
extern "C" void func_020e2168(char *dst, const char *tablePath, int index, int female, int flag);
extern char data_ov003_0217eb9b[];
extern char data_ov003_0217ebff[];
extern char data_ov003_0217ec02[];
extern char data_ov003_0217ec1d[];
#else
extern "C" void func_0204500c(Messages02172e84 *window, const char *text, int mode, int width);
#endif
extern "C" Zone02172e84 *func_02012fe4(void);
extern "C" void __clear(void *dst, int count);
extern "C" void func_02042764(Member02172e84 *member, char *buf, int flag);
extern "C" void *ExtractFileFromGP2(const char *gp2Path, const char *innerFilePath, unsigned int *outSize);
extern "C" char *func_020e046c(char *buf, void *data, unsigned int size, int idx);
extern "C" void func_ov003_0217bd38(void *obj, int arg);
unsigned char GetByteField28_021b1fa8(void *obj);
extern "C" void *func_0202ae18(void);
int CheckField0NonZero_0202b7d8(int *obj);
extern "C" void func_0202b0f4(void *obj);
void SelectCoordsByFlag0x24_02012a84(unsigned char *obj, int *out1, int *out2);
int IsInRangePair_021734dc(int unused, int a, int b);
void IterateEntries0205a330(Container0205a330 *c, int arg);
extern "C" int func_020457e0(Messages02172e84 *window);
extern "C" int func_ov003_02172570(unsigned char *obj, void *extra);

extern char data_ov003_02180a49[];
extern char data_ov003_02180a4c[];
extern char data_ov003_02180a63[];
extern Touch02172e84 data_02114e54;

// USA: func_ov003_02172e84
#if defined(jpn)
extern "C" ARM void func_ov003_02172e84(Self02172e84 *self) {
    GameResources *res = GetGameResources();
    Messages02172e84 *msg = GetGlobalField0x1c020421a0();
    Battle02172e84 *battle = (Battle02172e84 *) res->unknown_ptr_array_3afc[19];
    if (self->step_ == 0) {
        if (IsMainBrightnessTransitionActive(res) == 0) {
            func_0204500c(msg, data_ov003_0217eb9b, 0);
            msg->flag19be_ = 1;
            msg->busy_ = 1;
            self->step_ = 1;
        }
    } else if (self->step_ == 1) {
        Zone02172e84 *zone = func_02012fe4();
        Save02172e84 *save = &zone->save_;
        unsigned char count = self->party_->count_;
        unsigned int joined = self->party_->joined_ & ~1;
        joined &= joined ^ save->progress_.seen_;
        if (battle->flag28_ != 0) {
            if (!IsLinked(self->party_)) {
                self->pending_ = 1;
            }
        }
        if (joined != 0 && self->shownCount_ < 3) {
            self->shownCount_++;
            self->busy_ = 1;
            self->shown_ = 1;
            int i;
            for (i = 1; i < 24; i++) {
                if (joined & (1 << i)) break;
            }
            save->progress_.seen_ |= 1 << i;
            save->progress_.announced_ |= 1 << i;
            sprintf(self->text_, data_ov003_0217ebff, FindEntryByKey_02072a68(&self->texts_, (short) i));
            self->announceCount_++;
            self->step_ = 99;
        } else if (self->memberIndex_ != count && self->shownCount_ < 3) {
            Member02172e84 *member = &self->party_->members_[self->memberIndex_];
            self->memberIndex_++;
            self->busy_ = 1;
            self->shownCount_++;
            sprintf(self->text_, data_ov003_0217ebff, member);
            int accolade = GetAccolade(GetProfile(member));
            if (accolade < 700) {
                func_020e2168(self->title_, data_ov003_0217ec02, (short) accolade, member->profile_.female_, 1);
            } else {
                sprintf(self->title_, data_ov003_0217ebff,
                        FindEntryByKey_02072a68(&self->titles_, (short) (member->profile_.accolade_ + 20000)));
            }
            self->step_ = 99;
        } else if (self->pending_ != 0 && !((*(unsigned short *) 0x27fffa8 & 0x8000) >> 15)) {
            self->field340_ = self->fieldd8_;
            func_ov003_0217bd38(self->field1e0_, self->field1c0_);
            self->field30d_ = GetByteField28_021b1fa8(battle);
            self->mode_ = 5;
            self->step_ = 0;
        } else {
            int x = data_02114e54.x_;
            int y = data_02114e54.y_;
            int curX;
            int curY;
            SelectCoordsByFlag0x24_02012a84((unsigned char *) &data_02114e54, &curX, &curY);
            if (IsInRangePair_021734dc((int) self, x, y) && IsInRangePair_021734dc((int) self, curX, curY)) {
                self->active_ = 1;
                if (data_02114e54.released_ != 0) {
                    self->step_ = 2;
                }
            } else if (g_keyManager.TestKeysPressed(2)) {
                self->active_ = 1;
                self->step_ = 2;
            } else {
                self->active_ = 0;
            }
        }
    } else if (self->step_ == 2) {
        func_0204500c(msg, data_ov003_0217ec1d, 0);
        msg->busy_ = 1;
        self->step_ = 3;
    } else if (self->step_ == 3) {
        GameState *state = GameState::GetInstance();
        msg->target_ = self->field130_;
        msg->field2dc_ = self->field128_;
        msg->entries_ = self->entries_;
        self->active_ = 0;
        Container0205a330 *entries = msg->entries_;
        IterateEntries0205a330(entries, state->GetTickCount() >> 2);
        if (msg->state_ == 0) {
            msg->busy_ = 1;
            if (func_020457e0(msg) == 0) {
                self->done_ = 1;
                self->step_ = 4;
            } else {
                self->step_ = 0;
            }
        }
    } else if (self->step_ == 4) {
        if (self->done_ != 0 && !IsLinked(self->party_)) {
            self->mode_ = 4;
            self->step_ = 0;
            self->party_->state_ = 10;
        } else if (IsLinked(self->party_)) {
            func_ov003_02172570((unsigned char *) self->party_, 0);
        }
    } else if (self->step_ == 99) {
        if (self->subMode_ == 2) {
            self->step_ = 1;
        }
    }
}
#else
extern "C" ARM void func_ov003_02172e84(Self02172e84 *self) {
    GameResources *res = GetGameResources();
    Messages02172e84 *msg = GetGlobalField0x1c020421a0();
    Battle02172e84 *battle = (Battle02172e84 *) res->unknown_ptr_array_3afc[19];
    if (self->step_ == 0) {
        if (IsMainBrightnessTransitionActive(res) == 0) {
            func_0204500c(msg, FindEntryByKey_02072a68(&self->texts_, 100), 0, 0xe3);
            msg->flag19be_ = 1;
            msg->busy_ = 1;
            self->step_ = 1;
        }
    } else if (self->step_ == 1) {
        Zone02172e84 *zone = func_02012fe4();
        Save02172e84 *save = &zone->save_;
        unsigned char count = self->party_->count_;
        unsigned int joined = self->party_->joined_ & ~1;
        joined &= joined ^ save->progress_.seen_;
        if (battle->flag28_ != 0) {
            if (!IsLinked(self->party_)) {
                self->pending_ = 1;
            }
        }
        if (joined != 0 && self->shownCount_ < 3) {
            self->shownCount_++;
            self->busy_ = 1;
            self->shown_ = 1;
            int i;
            for (i = 1; i < 24; i++) {
                if (joined & (1 << i)) break;
            }
            save->progress_.seen_ |= 1 << i;
            save->progress_.announced_ |= 1 << i;
            sprintf(self->text_, data_ov003_02180a49, FindEntryByKey_02072a68(&self->texts_, (short) i));
            self->bit_ = i;
            self->announceCount_++;
            self->step_ = 99;
        } else if (self->memberIndex_ != count && self->shownCount_ < 3) {
            Member02172e84 *member = &self->party_->members_[self->memberIndex_];
            self->memberIndex_++;
            self->busy_ = 1;
            self->shownCount_++;
            char name[0x30];
            __clear(name, sizeof(name));
            func_02042764(member, name, 1);
            sprintf(self->text_, data_ov003_02180a49, name);
            if (GetAccolade(GetProfile(member)) < 700) {
                BackgroundLoader::AddLockGlobal();
                unsigned int size = 0;
                char path[0x40];
                char inner[0x20];
                __clear(path, sizeof(path));
                __clear(inner, sizeof(inner));
                sprintf(path, data_ov003_02180a4c, member->profile_.female_);
                sprintf(inner, data_ov003_02180a63, member->profile_.female_);
                void *file = ExtractFileFromGP2(path, inner, &size);
                if (file != 0) {
                    func_020e046c(self->title_, file, size, (short) member->profile_.accolade_);
                }
                BackgroundLoader::RemoveLockGlobal();
            } else {
                sprintf(self->title_, data_ov003_02180a49,
                        FindEntryByKey_02072a68(&self->titles_, (short) (member->profile_.accolade_ + 20000)));
            }
            self->step_ = 99;
        } else if (self->pending_ != 0 && !((*(unsigned short *) 0x27fffa8 & 0x8000) >> 15)) {
            self->field340_ = self->fieldd8_;
            func_ov003_0217bd38(self->field1e0_, self->field1c0_);
            self->field30d_ = GetByteField28_021b1fa8(battle);
            self->party_->state_ = 10;
            void *save = func_0202ae18();
            if (CheckField0NonZero_0202b7d8((int *) save)) {
                func_0202b0f4(save);
            }
            self->mode_ = 5;
            self->step_ = 0;
        } else {
            int x = data_02114e54.x_;
            int y = data_02114e54.y_;
            int curX;
            int curY;
            SelectCoordsByFlag0x24_02012a84((unsigned char *) &data_02114e54, &curX, &curY);
            if (IsInRangePair_021734dc((int) self, x, y) && IsInRangePair_021734dc((int) self, curX, curY)) {
                self->active_ = 1;
                if (data_02114e54.released_ != 0) {
                    self->step_ = 2;
                }
            } else if (g_keyManager.TestKeysPressed(2)) {
                self->active_ = 1;
                self->step_ = 2;
            } else {
                self->active_ = 0;
            }
        }
    } else if (self->step_ == 2) {
        func_0204500c(msg, FindEntryByKey_02072a68(&self->texts_, 101), 0, 0xe3);
        msg->busy_ = 1;
        self->step_ = 3;
    } else if (self->step_ == 3) {
        GameState *state = GameState::GetInstance();
        msg->target_ = self->field130_;
        msg->field2dc_ = self->field128_;
        msg->entries_ = self->entries_;
        self->active_ = 0;
        Container0205a330 *entries = msg->entries_;
        IterateEntries0205a330(entries, state->GetTickCount() >> 2);
        if (msg->state_ == 0) {
            msg->busy_ = 1;
            if (func_020457e0(msg) == 0) {
                self->done_ = 1;
                self->step_ = 4;
            } else {
                self->step_ = 0;
            }
        }
    } else if (self->step_ == 4) {
        if (self->done_ != 0 && !IsLinked(self->party_)) {
            self->mode_ = 4;
            self->step_ = 0;
            self->party_->state_ = 10;
        } else if (IsLinked(self->party_)) {
            func_ov003_02172570((unsigned char *) self->party_, 0);
        }
    } else if (self->step_ == 99) {
        if (self->subMode_ == 2) {
            self->step_ = 1;
        }
    }
}
#endif
