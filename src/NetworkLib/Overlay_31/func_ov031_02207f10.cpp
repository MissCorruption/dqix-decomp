#include <globaldefs.h>
#include "System/Memory.h"
#include "std_library_functions.h"

extern "C" int func_02001aec(const void*, const void*, unsigned int);
int ReadVarLenValue_02207dd4(unsigned char**);
void AppendCsv_02207e24(char*, const char*, int);
int ParseEncodedDate_02207e90(unsigned char*, int);

extern const char* data_ov031_02249704[];

struct ParseCtx {
    char pad0[0x458];
    int f458;
    int f45c;
    int f460;
    int f464;
    char pad1[0x484 - 0x468];
    int f484;
    unsigned char* f488;
    int f48c;
    unsigned char* f490;
    char buf494[0x100];
    int f594;
    char buf598[8];
    int f5a0;
    unsigned char* f5a4;
    int f5a8;
    unsigned char f5ac;
    unsigned char f5ad;
    unsigned char f5ae;
    unsigned char f5af;
    char buf5b0[0x100];
    char buf6b0[0x100];
    char buf7b0[0x5c];
    unsigned int f80c;
};

// USA: func_ov031_02207f10
extern "C" ARM int func_ov031_02207f10(ParseCtx* c, unsigned char** pp, int depth, int flag, int mode) {
    unsigned char* s = *pp;
    unsigned char* p = s + 1;
    unsigned char tag = *s;
    int len = ReadVarLenValue_02207dd4(&p);
    if (len < 0 || len > 2000) {
        return 1;
    }
    switch (tag & 0x1f) {
    case 2:
        if (c->f5ad) {
            if (flag == 0) {
                if (*p == 0) {
                    do {
                        p++;
                        len--;
                    } while (*p == 0);
                }
                switch (mode) {
                case 0:
                    if (len <= 0x100) {
                        VectorizedInvertedMemcpy(p, c->buf494, len);
                        c->f594 = len;
                    }
                    break;
                case 2:
                    c->f484 = len;
                    c->f488 = p;
                    break;
                }
            } else if (flag == 1) {
                if (*p == 0) {
                    do {
                        p++;
                        len--;
                    } while (*p == 0);
                }
                switch (mode) {
                case 0:
                    if (len <= 8) {
                        VectorizedInvertedMemcpy(p, c->buf598, len);
                        c->f5a0 = len;
                    }
                    break;
                case 2:
                    c->f48c = len;
                    c->f490 = p;
                    break;
                }
            }
        }
        p += len;
        break;
    case 3:
        if (depth == 1 && mode != 2) {
            c->f5a4 = p + 1;
            c->f5a8 = len - 1;
        }
        if (c->f5ad) {
            p++;
            if (func_ov031_02207f10(c, &p, depth, 0, mode)) {
                return 1;
            }
            c->f5ad = 0;
        } else {
            p += len;
        }
        break;
    case 6: {
        int i;
        unsigned char* q = p;
        i = 0;
        do {
            const char* s = data_ov031_02249704[i];
            if (func_02001aec(q, s, strlen(s)) == 0) {
                switch (i) {
                case 1:
                case 2:
                    if (mode == 0) {
                        c->f45c = i;
                    }
                    c->f5ad = i;
                    break;
                case 3:
                case 4:
                    if (mode != 2) {
                        c->f458 = i;
                    }
                    break;
                case 5:
                    if (mode != 2) {
                        c->f5ae = i;
                    }
                    break;
                }
                break;
            }
            i++;
        } while (i < 6);
        p += len;
        break;
    }
    case 12:
    case 19:
    case 20:
    case 22:
        if (mode != 2) {
            if (c->f5ac) {
                AppendCsv_02207e24(c->buf6b0, (const char*)p, len);
                if (c->f5ae == 5 && len <= 0x4f) {
                    VectorizedInvertedMemcpy(p, c->buf7b0, len);
                    c->buf7b0[len] = 0;
                }
            } else {
                AppendCsv_02207e24(c->buf5b0, (const char*)p, len);
            }
        }
        c->f5ae = 0;
        p += len;
        break;
    case 23:
    case 24:
        if (mode != 2) {
            unsigned int d = ParseEncodedDate_02207e90(p, tag & 0x1f);
            if (flag == 0) {
                if (c->f80c >= d) {
                    c->f5af = 1;
                }
            } else {
                if (c->f80c > d) {
                    c->f5af = 0;
                }
            }
        }
        p += len;
        c->f5ac = 1;
        break;
    case 16: {
        if (depth == 0 && flag == 0 && mode != 2) {
            c->f460 = (int)p;
        }
        unsigned char* end = p + len;
        int i = 0;
        if (p < end) {
            do {
                int r = func_ov031_02207f10(c, &p, depth + 1, i, mode);
                i++;
                if (r) {
                    return 1;
                }
            } while (p < end);
        }
        if (depth == 1 && flag == 0 && mode != 2) {
            c->f464 = (int)p;
        }
        break;
    }
    case 17: {
        unsigned char* end = p + len;
        if (p < end) {
            do {
                if (func_ov031_02207f10(c, &p, depth + 1, 0, mode)) {
                    return 1;
                }
            } while (p < end);
        }
        break;
    }
    default:
        if (tag == 0xa0) {
            unsigned char* end = p + len;
            if (p < end) {
                do {
                    if (func_ov031_02207f10(c, &p, depth + 1, 0, mode)) {
                        return 1;
                    }
                } while (p < end);
            }
        } else {
            p += len;
        }
        break;
    }
    *pp = p;
    return 0;
}
