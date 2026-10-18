#include <globaldefs.h>
#include "System/Memory.h"

struct UserInfo021d9134 {
    unsigned char favoriteColor : 4;
    unsigned char playerNo : 4;
    unsigned char nameLength;
    unsigned short name[10];
};

struct RequestData021d9134 {
    unsigned int ggid;
    UserInfo021d9134 userinfo;
    unsigned short version;
    unsigned char fileid;
};

struct BlockHeader021d9134 {
    unsigned char type;
    unsigned char pad1;
    unsigned short req;
    unsigned char pad4[0x10];
};

struct GameRegistry021d9134 {
    unsigned char pad0[0x14];
    unsigned int ggid;
    unsigned char maxPlayerNum;
};

struct FileInfo021d9134 {
    unsigned char pad0[0x5b8];
    GameRegistry021d9134* game_reg;
    void* src_adr;
    unsigned short currentb;
    unsigned short nextb;
    unsigned short pollbmp;
    unsigned short gameinfo_child_bmp;
    unsigned short gameinfo_changed_bmp;
    unsigned char active;
    unsigned char update;
    void* cache_list;
    unsigned int* card_mapping;
};

struct PWork021d9134 {
    unsigned char common[0x1340];
    UserInfo021d9134 childUser[15];
    unsigned short childversion[15];
    unsigned int childggid[15];
    void* parent_callback;
    int p_comm_state[15];
    unsigned char file_num;
    unsigned char cur_fileid;
    signed char fileid_of_child[15];
    unsigned char child_num;
    unsigned short child_entry_bmp;
    unsigned char req_data_buf[0x1754 - 0x1538];
    unsigned short req2child[15];
    UserInfo021d9134 childUserBuf;
    FileInfo021d9134 fileinfo[16];
};

extern PWork021d9134* data_ov027_021e33ec;
extern unsigned int data_ov027_021dd920 __attribute__((aligned(32)));

extern "C" RequestData021d9134* func_ov027_021dd6bc(void* src, BlockHeader021d9134* out, unsigned int id);
extern "C" unsigned short func_ov027_021d9dd8(unsigned short cur, unsigned short arg);
void SetEntryCallbackAndDispatch_021d8c20(int id, int event, int param);

// USA: func_ov027_021d9134
extern "C" ARM void func_ov027_021d9134(void* obj, unsigned int id) {
    BlockHeader021d9134 hd;
    int state;
    RequestData021d9134* p_data;

    if (id == 0 || id > 15) {
        return;
    }

    p_data = func_ov027_021dd6bc((char*)obj + 0xa, &hd, id);
    state = data_ov027_021e33ec->p_comm_state[id - 1];

    switch (hd.type) {
    case 7: {
        if (state == 2) {
            RequestData021d9134 req_data;

            if (p_data == NULL) {
                break;
            }

            VectorizedInvertedMemcpy(p_data, &req_data, 0x1d);

            data_ov027_021e33ec->childggid[id - 1] = req_data.ggid;
            data_ov027_021e33ec->childversion[id - 1] = req_data.version;

            VectorizedInvertedMemcpy(&req_data.userinfo, &data_ov027_021e33ec->childUser[id - 1],
                                     sizeof(UserInfo021d9134));

            data_ov027_021e33ec->childUser[id - 1].playerNo = id;
            SetEntryCallbackAndDispatch_021d8c20(id, 0xa, (int)&req_data.userinfo);
        }

        if (state == 0xa) {
            unsigned char i, entry_num = 0;
            unsigned char fileid = p_data->fileid;

            if (fileid >= 16 || data_ov027_021e33ec->fileinfo[fileid].active == 0
                || data_ov027_021e33ec->childggid[id - 1] != data_ov027_021e33ec->fileinfo[fileid].game_reg->ggid) {
                data_ov027_021e33ec->req2child[id - 1] = 4;
            } else {
                for (i = 0; i < 16; i++) {
                    if (data_ov027_021e33ec->fileinfo[fileid].gameinfo_child_bmp & (1 << i)) {
                        entry_num++;
                    }
                }

                if (entry_num >= data_ov027_021e33ec->fileinfo[fileid].game_reg->maxPlayerNum) {
                    data_ov027_021e33ec->req2child[id - 1] = 0;
                    SetEntryCallbackAndDispatch_021d8c20(id, 0xb, 0);
                    break;
                }
            }

            switch (data_ov027_021e33ec->req2child[id - 1]) {
            case 3:
                if (0 == (data_ov027_021e33ec->child_entry_bmp & (1 << id))) {
                    data_ov027_021e33ec->child_num++;
                    data_ov027_021e33ec->child_entry_bmp |= (1 << id);
                    data_ov027_021e33ec->fileid_of_child[id - 1] = (signed char)fileid;

                    data_ov027_021e33ec->fileinfo[fileid].gameinfo_child_bmp |= 1 << id;
                    data_ov027_021e33ec->fileinfo[fileid].gameinfo_changed_bmp |= 1 << id;

                    data_ov027_021e33ec->req2child[id - 1] = 0;
                    SetEntryCallbackAndDispatch_021d8c20(id, 5, 0);
                }
                break;
            case 4:
                data_ov027_021e33ec->req2child[id - 1] = 0;
                SetEntryCallbackAndDispatch_021d8c20(id, 4, 0);
                break;
            }
        }
        break;
    }
    case 8:
        if (state == 5) {
            SetEntryCallbackAndDispatch_021d8c20(id, 0xe, 0);
        } else if (state == 0xe) {
            if (data_ov027_021e33ec->req2child[id - 1] == 2) {
                unsigned char fid = (unsigned char)data_ov027_021e33ec->fileid_of_child[id - 1];
                data_ov027_021e33ec->fileinfo[fid].pollbmp |= (1 << id);
                data_ov027_021e33ec->fileinfo[fid].currentb = 0;
                data_ov027_021e33ec->req2child[id - 1] = 0;
                SetEntryCallbackAndDispatch_021d8c20(id, 6, 0);
            }
        }
        break;
    case 9:
        if (state == 6) {
            unsigned char fileid = (unsigned char)data_ov027_021e33ec->fileid_of_child[id - 1];

            if (fileid == 0xff) {
                break;
            }

            data_ov027_021e33ec->fileinfo[fileid].nextb =
                func_ov027_021d9dd8(data_ov027_021e33ec->fileinfo[fileid].nextb, hd.req);
            data_ov027_021dd920 |= (1 << fileid);
        }
        break;
    case 10:
        if (state == 6) {
            unsigned char fileid = (unsigned char)data_ov027_021e33ec->fileid_of_child[id - 1];

            if (fileid == 0xff) {
                break;
            }

            data_ov027_021e33ec->fileinfo[fileid].pollbmp &= ~(1 << id);

            SetEntryCallbackAndDispatch_021d8c20(id, 7, 0);
        } else if (state == 7) {
            if (data_ov027_021e33ec->req2child[id - 1] == 5) {
                data_ov027_021e33ec->req2child[id - 1] = 0;
                SetEntryCallbackAndDispatch_021d8c20(id, 8, 0);
                break;
            }
        }
        break;
    case 11:
        if (state == 8) {
            break;
        }
        break;
    default:
        break;
    }
}
