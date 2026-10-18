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

struct CertificateDate0220871c {
    unsigned long year;
    unsigned long month;
    unsigned long day;
    int week;
};
int RegisterSlotA020cf0fc(int);
extern "C" int func_ov031_02207f10(CPSSslConnection*, unsigned char**, int, int, int);
extern "C" int func_ov031_022085a8(CPSSslConnection*);
extern "C" int func_ov031_022086b0(const char*, const char*);
extern "C" int func_ov031_02208400(CPSSslConnection*, CPSCaInfo*);

// USA: func_ov031_0220871c
extern "C" ARM void func_ov031_0220871c(CPSSslConnection* context, unsigned char* data) {
    CertificateDate0220871c date;
    unsigned long code;
    unsigned long result;
    unsigned long length;
    unsigned long remaining;
    int index;
    remaining = data[2] + (((data[0] << 8) + data[1]) << 8);
    data += 3;
    context->pub_algorithm = -1;
    RegisterSlotA020cf0fc((int)&date);
    context->cur_date = ((date.year + 2000) << 16) + (date.month << 8) + date.day;
    code = 0;
    context->subject[0] = 0;
    context->exponent_len = 0;
    context->modulus_len = 0;
    index = 0;
    do {
        length = data[2] + (((data[0] << 8) + data[1]) << 8);
        data += 3;
        remaining -= length + 3;
        context->sig_algorithm = -1;
        context->seen_pub_algorithm = 0;
        context->seen_validity = 0;
        context->date_ok = 0;
        context->subject[0] = 0;
        context->issuer[0] = 0;
        context->cn[0] = 0;
        context->cert = data;
        context->certlen = length;
        int parsed = func_ov031_02207f10(context, &data, 0, 0, code);
        if (parsed || context->modulus_len < 51 || !context->exponent_len) {
            context->state = 9;
            return;
        }
        result = func_ov031_022085a8(context);
        if (!index && context->server_name && func_ov031_022086b0(context->server_name, context->cn)) result |= 0x4000;
        code = result & 0xff;
        if (code == 1 && remaining) {
            unsigned char* next = data + 3;
            context->seen_pub_algorithm = 0;
            if (func_ov031_02207f10(context, &next, 0, 0, 2)) {
                context->state = 9;
                return;
            }
            result = (result & ~0xff) | func_ov031_02208400(context, &context->midca_info);
        }
        if (context->auth_callback) result = context->auth_callback(result, context, index);
        index++;
        if (!code || result || !remaining) break;
        code = 1;
    } while (true);
    if (!result) context->state = 3;
    else context->state = 9;
}
