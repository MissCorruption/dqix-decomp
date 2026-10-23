#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "GameState/BattleRecordSnapshot.h"
#include "Grotto/Main/TreasureMapMetadata.h"

struct ProfileName02170d88 { char text[11]; };
struct ProfileCode02170d88 { unsigned char bytes[6]; };
struct ProfileEffects02170d88 { short values[14]; };
union ProfileSettings02170d88 {
    struct {
        unsigned int flags;
        unsigned int unknown0 : 9;
        signed int value9 : 10;
        signed int value19 : 11;
        unsigned int unknown30 : 2;
        char message[116];
    } fields;
    unsigned int words[31];
};
union ProfileRecord02170d88 {
    struct {
        unsigned int elapsedHours : 14;
        unsigned int counter : 17;
        unsigned int captured : 1;
        unsigned int committedHours : 14;
        unsigned int statistic : 17;
        unsigned int unknown31 : 1;
        unsigned int elapsedMinutes : 7;
        unsigned int committedMinutes : 7;
        unsigned int percent307 : 7;
        unsigned int percent232 : 7;
        unsigned int unknown28 : 4;
        unsigned int value0 : 10;
        unsigned int value10 : 14;
        unsigned int percent944 : 7;
        unsigned int unknown3 : 1;
        unsigned int value9 : 9;
        unsigned int value14 : 14;
        unsigned int percent448 : 7;
        unsigned int unknown4 : 2;
        short profileValue;
        unsigned char flag : 1;
        unsigned char vocationValue : 4;
        unsigned char unknown16 : 3;
        unsigned char unknown17;
    } fields;
    unsigned int words[6];
};
union ProfileMap02170d88 {
    TreasureMapMetadata metadata;
    short values[14];
};
typedef char ProfileSettingsSizeCheck02170d88[sizeof(ProfileSettings02170d88) == 124 ? 1 : -1];
typedef char ProfileRecordSizeCheck02170d88[sizeof(ProfileRecord02170d88) == 24 ? 1 : -1];
typedef char ProfileMapSizeCheck02170d88[sizeof(ProfileMap02170d88) == 28 ? 1 : -1];

struct Profile02170d88 {
    ProfileName02170d88 name;
    unsigned char vocation;
    unsigned char level;
    unsigned char hasMap;
    ProfileCode02170d88 code;
    ProfileSettings02170d88 settings;
    ProfileEffects02170d88 effects;
    ProfileRecord02170d88 record;
    ProfileMap02170d88 map;
};
struct ProfileState02170d88 {
    unsigned char state;
    char unknown1[3];
    unsigned int timer;
    unsigned char keys[50][8];
    unsigned char keyCount;
#if defined(jpn)
    char unknown199[0x19c - 0x199];
    Profile02170d88 current;
    char unknown27c[0x614 - 0x27c];
#else
    char unknown199[0x1c0 - 0x199];
    Profile02170d88 current;
    char unknown2a0[0xe0];
    Profile02170d88 sample;
    char unknown460[0x718 - 0x460];
#endif
    unsigned char active;
    char unknown719[3];
    int pending;
    int accepted;
    int result;
    int unknown728;
    int progress;
    unsigned char flags;
    signed char retries;
    signed char attempts;
    unsigned char unknown733;
    unsigned char unknown734;
    char unknown735[3];
    int unknown738;
};
struct ProfileCharacterData02170d88 {
    char unknown0[0x16c];
    unsigned short vocationLevels[13];
    unsigned char vocationValues[13];
    char unknown193[0x49c - 0x193];
    unsigned char flag : 1;
    unsigned char unknownFlags : 7;
    char unknown49d[0x56a - 0x49d];
    unsigned char unknown56a;
#if defined(jpn)
    char unknown56b[0x8b8 - 0x56b];
#else
    char unknown56b[0x950 - 0x56b];
#endif
    unsigned int vocation;
};
struct ProfileActor02170d88 : GameObject {
#if defined(jpn)
    char unknown13c[0x144 - 0x13c];
#else
    char unknown13c[0x150 - 0x13c];
#endif
    ProfileCharacterData02170d88* data;
};
struct ProfileRecordRegion02170d88 {
    char unknown0[0x3c];
    BattleRecordSnapshot record;
};
struct ProfileSaveState02170d88 {
#if defined(jpn)
    char unknown0[0x543c];
    ProfileSettings02170d88 settings;
    char unknown54b8[0x72be - 0x54b8];
#else
    char unknown0[0x569c];
    ProfileSettings02170d88 settings;
    char unknown5718[0x74fe - 0x5718];
#endif
    ProfileCode02170d88 code;
    ProfileRecordRegion02170d88 region;
};
struct ProfileResourceState02170d88 {
#if defined(jpn)
    char unknown0[0x41e4];
#else
    char unknown0[0x4494];
#endif
    int profileActive;
};
struct Field150Holder02052e2c;
struct Struct0200fb08;
struct KeyArrayObj_02171f80;
extern "C" void* func_0202ae18();
struct Obj_0202aec0;
extern "C" void func_0202aec0(Obj_0202aec0*);
extern "C" void* func_0202ae24();
extern "C" void func_0205e22c(void*);
extern "C" void VectorizedMemset(void*, int, unsigned int);
extern "C" void* func_02052a10(char*);
extern "C" short* func_02052e2c(Field150Holder02052e2c*);
extern "C" int func_020ac0b4(void*);
extern "C" int func_020ac4f8(int);
extern "C" int func_020a0870(BattleRecordSnapshot*);
extern "C" int func_020a08a4(BattleRecordSnapshot*);
extern "C" int func_020a08d8(BattleRecordSnapshot*);
extern "C" int func_020a090c(BattleRecordSnapshot*);
extern "C" ProfileCharacterData02170d88* func_02053c6c(unsigned char*);
extern "C" unsigned char func_0200fb08(Struct0200fb08*);
extern "C" unsigned char func_020119f8(char*, void*);
extern "C" void func_ov003_02171f80(KeyArrayObj_02171f80*);
extern "C" void func_ov017_021b1d44(void*, int, int);
extern const char* data_ov003_021805e4[5];
extern const char* data_ov003_021805d0[5];

#if defined(jpn)
static inline ProfileSettings02170d88* GetSettings02170d88(ProfileSaveState02170d88* saved) { return &saved->settings; }
#endif

// USA: func_ov003_02170d88
// EUR: func_ov003_02170d88
extern "C" ARM void func_ov003_02170d88(ProfileState02170d88* self) {
    ProfileRecordRegion02170d88* region;
    self->state = 8;
    self->timer = 0;
    self->pending = 0;
    self->accepted = 0;
    self->result = 0;
    Obj_0202aec0* searchState = static_cast<Obj_0202aec0*>(func_0202ae18());
    func_0202aec0(searchState);
    void* searchData = func_0202ae24();
    func_0205e22c(searchData);
    GameState* state = GameState::GetInstance();
    GameObject* actorObject = state->GetProtagonist();
    ProfileActor02170d88* actor = static_cast<ProfileActor02170d88*>(actorObject);
#if defined(jpn)
    strcpy(self->current.name.text, (const char*)actor->baseStats_);
#else
    strcpy(self->current.name.text, (const char*)func_02052a10((char*)actor));
#endif
    self->current.vocation = actor->data->vocation;
    self->current.level = actor->data->vocationLevels[actor->data->vocation];
    ProfileSaveState02170d88* saved = (ProfileSaveState02170d88*)state;
    memcpy(&self->current.settings, &saved->settings, 0x7c);
    memcpy(&self->current.effects, func_02052e2c((Field150Holder02052e2c*)actor), 0x1c);
    VectorizedMemset(&self->current.record, 0, 0x18);
    ProfileRecord02170d88* output = &self->current.record;
    region = &saved->region;
    unsigned int counter = 0;
    func_020ac0b4(&counter);
    unsigned int flag = 0;
    unsigned int vocationValue = 0;
    GameObject* protagonistObject = state->GetProtagonist();
    ProfileActor02170d88* protagonist = static_cast<ProfileActor02170d88*>(protagonistObject);
    if (protagonist != 0) {
        unsigned int vocation = protagonist->data->vocation;
        flag = protagonist->data->flag;
        vocationValue = protagonist->data->vocationValues[vocation];
    }
    func_020ac4f8(0);
#if defined(jpn)
    ProfileSettings02170d88* settings = GetSettings02170d88(saved);
#else
    ProfileSettings02170d88* settings = &saved->settings;
#endif
    VectorizedMemset(output, 0, 0x18);
    output->fields.elapsedHours = region->record.clocks.elapsed.hours;
    output->fields.elapsedMinutes = region->record.clocks.elapsed.minutes;
    output->fields.committedHours = region->record.clocks.committed.hours;
    output->fields.committedMinutes = region->record.clocks.committed.minutes;
    output->fields.statistic = region->record.unknown08_0;
    output->fields.counter = counter;
    output->fields.value0 = region->record.unknown10_0;
    output->fields.value9 = region->record.unknown08_24;
    output->fields.value10 = region->record.unknown0c_14;
    output->fields.value14 = region->record.unknown10_9;
    output->fields.percent307 = (unsigned char)func_020a0870(&region->record);
    output->fields.percent232 = (unsigned char)func_020a08a4(&region->record);
    output->fields.percent944 = (unsigned char)func_020a08d8(&region->record);
    output->fields.percent448 = (unsigned char)func_020a090c(&region->record);
    output->fields.profileValue = settings->fields.value19;
    output->fields.flag = (unsigned char)flag;
    output->fields.vocationValue = (unsigned char)vocationValue;
    output->fields.unknown17 = func_02053c6c((unsigned char*)protagonist)->unknown56a;
#if !defined(jpn)
    output->fields.captured = 1;
#endif
    VectorizedMemset(&self->current.map, 0, 0x1c);
    ProfileCode02170d88 code = saved->code;
    self->current.code = code;
#if !defined(jpn)
    unsigned char platformLanguage = func_0200fb08((Struct0200fb08*)state);
    int language = 0;
    switch (platformLanguage) {
    case 2: language = 1; break;
    case 3: language = 2; break;
    case 4: language = 3; break;
    case 5: language = 4; break;
    }
    self->sample.name = self->current.name;
    self->sample.vocation = self->current.vocation;
    self->sample.level = self->current.level;
    self->sample.hasMap = self->current.hasMap;
    self->sample.code = self->current.code;
    self->sample.settings.words = self->current.settings.words;
    self->sample.effects = self->current.effects;
    self->sample.record.words = self->current.record.words;
    self->sample.map.values = self->current.map.values;
    memset(self->sample.name.text, 0, 0xb);
    sprintf(self->sample.name.text, data_ov003_021805e4[language]);
    memset(self->sample.settings.fields.message, 0, 0x74);
    sprintf(self->sample.settings.fields.message, data_ov003_021805d0[language]);
    ProfileRecord02170d88* sampleRecord = &self->sample.record;
    if (settings->fields.value9 >= 310) {
#if defined(eur)
        self->sample.settings.fields.value9 = 201;
#else
        self->sample.settings.fields.value9 = 203;
#endif
    }
    short adjustedValue;
    int originalValue = settings->fields.value19;
    adjustedValue = originalValue;
    if (originalValue >= 750 && originalValue < 800) adjustedValue -= 50;
    else if (originalValue >= 900) adjustedValue -= 100;
    self->sample.settings.fields.value19 = adjustedValue;
    sampleRecord->fields.profileValue = adjustedValue;
    TreasureMapMetadata map;
    func_020119f8((char*)state, &map);
    if (map.GetMapType() != TreasureMapType_Invalid) {
        self->sample.hasMap = 1;
        self->sample.map.metadata.DiscoveryStateAndMapTypeAndUnknown = map.DiscoveryStateAndMapTypeAndUnknown;
        INLINE_MEMCPY(self->sample.map.metadata.DiscoveredBy, map.DiscoveredBy, 10);
        INLINE_MEMCPY(self->sample.map.metadata.ClearedBy, map.ClearedBy, 10);
        self->sample.map.metadata.Location = map.Location;
        self->sample.map.metadata.TreasureDiscoveryFlags = map.TreasureDiscoveryFlags;
        self->sample.map.metadata.QualityOrLegacyBossID = map.QualityOrLegacyBossID;
        self->sample.map.metadata.LegacyBossLevel = map.LegacyBossLevel;
        self->sample.map.metadata.SeedOrMinTurns = map.SeedOrMinTurns;
        TreasureMapMetadata* sampleMap = &self->sample.map.metadata;
        memset(sampleMap->DiscoveredBy, 0, 10);
        memset(sampleMap->ClearedBy, 0, 10);
        char name[11] = {0};
        memset(name, 0, 11);
        memcpy(name, data_ov003_021805e4[language], 11);
        memcpy(sampleMap->DiscoveredBy, name, 10);
        memset(name, 0, 11);
        memcpy(name, data_ov003_021805e4[language], 11);
        memcpy(sampleMap->ClearedBy, name, 10);
    }
#endif
    func_ov003_02171f80((KeyArrayObj_02171f80*)self);
    self->active = 0;
    self->unknown738 = 0;
    self->progress = 0;
    self->flags = 3;
    ((ProfileResourceState02170d88*)GetGameResources())->profileActive = 1;
    func_ov017_021b1d44(GetGameResources()->unknown_ptr_array_3afc[19], 0x20, 1);
}
