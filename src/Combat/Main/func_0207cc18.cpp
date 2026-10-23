#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif
struct Save0207cc18 { char pad[0x8c]; unsigned char bits[1]; };
struct Entry0207cc18 {
    char pad[8];
    unsigned int type:4, unused8:28;
    unsigned int unusedc:12, key:11, unusedc23:9;
};
struct S_a04c8;
struct S_a0494;
struct BattleBlock0207cc18 { char data[0xb0]; };
static inline int IsType0207cc18(unsigned char type) { return type <= 7; }
static inline int IsTypeRange0207cc18(unsigned char type) { return type >= 8 && type <= 9; }
extern "C" Save0207cc18* func_0205ec34(void*);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" int func_020ac4c0(void*);
extern "C" void func_020a04c8(S_a04c8*, unsigned int);
extern "C" void func_020a0494(S_a0494*, unsigned int);
extern "C" int func_020ac494(void*);
// USA: func_0207cc18
extern "C" ARM void func_0207cc18(void* obj, Entry0207cc18* entry) {
    if (entry) {
        Save0207cc18* save = func_0205ec34(obj);
        int key = (unsigned short)entry->key;
        if (key > 0) {
            int index = key + 0xc76;
            if (!func_0206dfb0((int)save, save->bits, index)) {
                func_0206df6c(save, save->bits, index, 1);
                BattleBlock0207cc18 block;
                func_020ac4c0(&block);
                unsigned char type = entry->type;
                if (IsType0207cc18(type))
                    func_020a04c8((S_a04c8*)&block, 1);
                else if (IsTypeRange0207cc18(type))
                    func_020a0494((S_a0494*)&block, 1);
                func_020ac494(&block);
            }
        }
    }
}
