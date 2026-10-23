#include <globaldefs.h>

struct CPSMd5Ctx {
    unsigned long state[4];
    unsigned long count[2];
    unsigned char buffer[64];
};
struct CPSSha1Ctx {
    unsigned long state[5];
    unsigned long count[2];
    unsigned char buffer[64];
};
struct CPSRc4Ctx {
    unsigned char x;
    unsigned char y;
    unsigned char m[256];
    unsigned short padding;
};
struct CPSCaInfo {
    char* dn;
    int modulus_len;
    unsigned char* modulus;
    int exponent_len;
    unsigned char* exponent;
};
union CPSCipherCtx { CPSRc4Ctx rc4_ctx; };
struct CPSPrivateKey;
struct CPSCertificate;
struct CPSSslConnection {
    unsigned char master_secret[48];
    unsigned char session_cached;
    unsigned char reuse_session;
    unsigned short method;
    unsigned char client_random[32];
    unsigned char server_random[32];
    union {
        unsigned char sessionID[32];
        unsigned char key_block[72];
    } common1;
    unsigned char* send_mac;
    unsigned char* send_key;
    unsigned char* send_iv;
    CPSCipherCtx send_cipher;
    unsigned char send_seq[8];
    unsigned char* rcv_mac;
    unsigned char* rcv_key;
    unsigned char* rcv_iv;
    CPSCipherCtx rcv_cipher;
    unsigned char rcv_seq[8];
    CPSSha1Ctx sha1_hash;
    CPSSha1Ctx sha1_hash_tmp;
    CPSMd5Ctx md5_hash;
    CPSMd5Ctx md5_hash_tmp;
    unsigned char server;
    unsigned char state;
    unsigned char inbuf_decrypted;
    unsigned char padding2;
    int sig_algorithm;
    int pub_algorithm;
    unsigned char* hash_start;
    unsigned char* hash_end;
    unsigned char hash_val[20];
    int hash_len;
    CPSCaInfo midca_info;
    unsigned char modulus[256];
    unsigned long modulus_len;
    unsigned char exponent[8];
    int exponent_len;
    unsigned char* signature;
    int signature_len;
    unsigned char seen_validity;
    unsigned char seen_pub_algorithm;
    unsigned char seen_attr;
    unsigned char date_ok;
    char issuer[256];
    char subject[256];
    char cn[80];
    char* server_name;
    unsigned char* cert;
    int certlen;
    unsigned long cur_date;
    int (*auth_callback)(int, CPSSslConnection*, int);
    CPSCaInfo** ca_info;
    int ca_builtins;
    CPSPrivateKey* my_key;
    CPSCertificate* my_certificate;
    unsigned char* inbuf;
    long inbuf_len;
    long inbuf_pnt;
};
extern "C" void func_ov031_0220b8a0(unsigned int*);
extern "C" void func_ov031_0220b8f4(void*, const void*, unsigned int);
extern "C" void func_ov031_0220b9ac(void*, void*);
extern "C" void func_ov031_0220afe0(void*);
extern "C" void func_ov031_0220b028(void*, const void*, unsigned int);
extern "C" void func_ov031_0220b0e0(void*, void*);
extern "C" void func_ov031_0220ba44(void*, const void*, int);

// USA: func_ov031_02208f50
extern "C" ARM void func_ov031_02208f50(CPSSslConnection* context) {
    int repeats;
    int round;
    int j;
    int offset;
    int macLength;
    int keyLength;
    int ivLength;
    switch (context->method) {
        case 4:
        keyLength = macLength = 16;
        ivLength = 0;
        break;
        case 5:
        macLength = 20;
        keyLength = 16;
        ivLength = 0;
        break;
    }
    int total = 2 * (macLength + keyLength + ivLength);
    round = 0;
    unsigned char letter;
    unsigned char digest[20];
    if (total > 0) {
        offset = 0;
        do {
            CPSSha1Ctx* sha1 = &context->sha1_hash_tmp;
            func_ov031_0220b8a0((unsigned int*)sha1->state);
            letter = round + 'A';
            j = 0;
            repeats = round + 1;
            if (repeats > 0) do {
                func_ov031_0220b8f4(sha1, &letter, 1);
                j++;
            } while (j < repeats);
            func_ov031_0220b8f4(sha1, context->master_secret, 48);
            func_ov031_0220b8f4(sha1, context->server_random, 32);
            func_ov031_0220b8f4(sha1, context->client_random, 32);
            func_ov031_0220b9ac(sha1, digest);
            CPSMd5Ctx* md5 = &context->md5_hash_tmp;
            func_ov031_0220afe0(md5);
            func_ov031_0220b028(md5, context->master_secret, 48);
            func_ov031_0220b028(md5, digest, 20);
            func_ov031_0220b0e0(md5, context->common1.key_block + offset);
            offset += 16;
            round++;
        } while (offset < total);
    }
    unsigned char* keys = context->common1.key_block;
    if (context->server) {
        context->rcv_mac = keys;
        context->rcv_key = keys + 2 * macLength;
        context->send_mac = keys + macLength;
        context->send_key = context->send_mac + macLength + keyLength;
    } else {
        context->send_mac = keys;
        context->send_key = keys + 2 * macLength;
        context->rcv_mac = keys + macLength;
        context->rcv_key = context->rcv_mac + macLength + keyLength;
    }
    func_ov031_0220ba44(&context->rcv_cipher, context->rcv_key, 16);
    func_ov031_0220ba44(&context->send_cipher, context->send_key, 16);
}
