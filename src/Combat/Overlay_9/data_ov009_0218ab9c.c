#if defined(jpn)
#define data_ov009_0218ab9c data_ov009_0218bb04
#endif

typedef struct CharacterCreation CharacterCreation;

typedef struct StateFunc {
    void (*func)(CharacterCreation* self);
    int adjust;
} StateFunc;

typedef struct StateTable {
    StateFunc states[13];
} StateTable;

void func_ov009_02185634(CharacterCreation* self);
void func_ov009_021863d0(CharacterCreation* self);
void func_ov009_021865dc(CharacterCreation* self);
void func_ov009_021868c4(CharacterCreation* self);
void func_ov009_021869d8(CharacterCreation* self);
void func_ov009_021866f0(CharacterCreation* self);
void func_ov009_02186aec(CharacterCreation* self);
void func_ov009_02186c00(CharacterCreation* self);
void func_ov009_02186e00(CharacterCreation* self);
void func_ov009_0218742c(CharacterCreation* self);
void func_ov009_02187b34(CharacterCreation* self);
void func_ov009_021883cc(CharacterCreation* self);

// USA: data_ov009_0218ab9c
const StateTable data_ov009_0218ab9c = {{
    {func_ov009_02185634, 0},
    {func_ov009_021863d0, 0},
    {func_ov009_021865dc, 0},
    {func_ov009_021868c4, 0},
    {func_ov009_021869d8, 0},
    {func_ov009_021866f0, 0},
    {func_ov009_02186aec, 0},
    {func_ov009_02186c00, 0},
    {func_ov009_02186e00, 0},
    {func_ov009_0218742c, 0},
    {func_ov009_02187b34, 0},
    {func_ov009_021883cc, 0},
    {0, 0},
}};
