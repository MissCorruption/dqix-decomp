#include <globaldefs.h>

struct SecretSet4 {
    int kind;
    unsigned int keyLength;
    char ssid[0x28];
    char keys[4][0x40];
};
struct SecretSet1 {
    int kind;
    unsigned int keyLength;
    char ssid[0x28];
    char key[0x40];
};
struct LinkSecrets {
    char wep40[4][6];
    char wep40Ssid[0x21];
    char wep104[4][14];
    char wep104Ssid[0x21];
    char tkip[0x40];
    char tkipSsid[0x21];
    char aes[0x40];
    char aesSsid[0x21];
};
struct SessionState {
    unsigned char pad0[0x2c];
    unsigned int mode;
    unsigned int offset;
};
struct LinkContext {
    unsigned short modes;
    char pad2[0x114];
    unsigned char state;
};

extern SessionState data_ov031_0224e6e0;
extern SecretSet4 data_ov031_0224eda8;
extern SecretSet4 data_ov031_0224eed8;
extern SecretSet1 data_ov031_0224f008;
extern SecretSet1 data_ov031_0224f078;
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);
extern "C" int func_ov031_0221e650(const char*);
extern "C" int func_ov031_0221d270(const char*, int);

// USA: func_ov031_0221d078
extern "C" THUMB int func_ov031_0221d078(LinkContext* ctx) {
    LinkSecrets* secrets = (LinkSecrets*)((unsigned char*)ctx + 0x117);
    SecretSet4* wep40 = &data_ov031_0224eda8;
    SecretSet4* wep104 = &data_ov031_0224eed8;
    SecretSet1* tkip = &data_ov031_0224f008;
    SecretSet1* aes = &data_ov031_0224f078;
    if (secrets == 0) {
        return -1;
    }
    ctx->modes = data_ov031_0224e6e0.mode & data_ov031_0224e6e0.offset;
    func_ov031_0221e52c(secrets, 0, sizeof(LinkSecrets));
    if (ctx->modes & 1) {
        func_ov031_0221e51c(secrets->wep40[0], wep40->keys[0], wep40->keyLength);
        func_ov031_0221e51c(secrets->wep40[1], wep40->keys[1], wep40->keyLength);
        func_ov031_0221e51c(secrets->wep40[2], wep40->keys[2], wep40->keyLength);
        func_ov031_0221e51c(secrets->wep40[3], wep40->keys[3], wep40->keyLength);
        if (func_ov031_0221d270(wep40->ssid, func_ov031_0221e650(wep40->ssid)) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(secrets->wep40Ssid, wep40->ssid, func_ov031_0221e650(wep40->ssid));
    }
    if (ctx->modes & 2) {
        func_ov031_0221e51c(secrets->wep104[0], wep104->keys[0], wep104->keyLength);
        func_ov031_0221e51c(secrets->wep104[1], wep104->keys[1], wep104->keyLength);
        func_ov031_0221e51c(secrets->wep104[2], wep104->keys[2], wep104->keyLength);
        func_ov031_0221e51c(secrets->wep104[3], wep104->keys[3], wep104->keyLength);
        if (func_ov031_0221d270(wep104->ssid, func_ov031_0221e650(wep104->ssid)) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(secrets->wep104Ssid, wep104->ssid, func_ov031_0221e650(wep104->ssid));
    }
    if (ctx->modes & 4) {
        if (func_ov031_0221d270(tkip->key, tkip->keyLength - 1) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(secrets->tkip, tkip->key, tkip->keyLength);
        if (func_ov031_0221d270(tkip->ssid, func_ov031_0221e650(tkip->ssid)) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(secrets->tkipSsid, tkip->ssid, func_ov031_0221e650(tkip->ssid));
    }
    if (ctx->modes & 8) {
        if (func_ov031_0221d270(aes->key, aes->keyLength - 1) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(secrets->aes, aes->key, aes->keyLength);
        if (func_ov031_0221d270(aes->ssid, func_ov031_0221e650(aes->ssid)) != 0) {
            goto fail;
        }
        func_ov031_0221e51c(secrets->aesSsid, aes->ssid, func_ov031_0221e650(aes->ssid));
    }
    ctx->state = 0;
    return 0;
fail:
    func_ov031_0221e52c(secrets, 0, sizeof(LinkSecrets));
    return -1;
}
