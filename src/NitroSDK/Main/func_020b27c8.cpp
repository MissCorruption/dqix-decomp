#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

#define NNS_G2D_BINFILE_SIG_FONTDATA 0x4e465452
#define NNS_G2D_NFTR_VER 0x0101
#define NNS_G2D_NFTR_PREV_VER 0x0100
#define NNS_G2D_BINBLK_SIG_FINFDATA 0x46494e46

struct NNSG2dBinaryFileHeader {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
};

struct NNSG2dBinaryBlockHeader {
    u32 kind;
    u32 size;
};

struct NNSG2dFontGlyph {
    u8 cellWidth;
    u8 cellHeight;
    u16 cellSize;
    signed char baselinePos;
    u8 maxCharWidth;
    u8 bpp;
    u8 flags;
};

struct NNSG2dFontInformation {
    u8 fontType;
    signed char linefeed;
    u16 alterCharIndex;
    u8 defaultWidth[3];
    u8 encoding;
    NNSG2dFontGlyph* pGlyph;
};

struct Hdr02b0288;
extern "C" void func_020c9be0(void);
void PatchFontResourceBlocks_020b291c(void* base);
NNSG2dBinaryBlockHeader* FindChunkById_020b0288(struct Hdr02b0288* h, unsigned int kind);

static inline BOOL NNSi_G2dIsBinFileSignatureValid(const NNSG2dBinaryFileHeader* pBinFile, u32 binFileSig) {
    if (pBinFile != NULL) {
        if (pBinFile->signature == binFileSig) {
            return TRUE;
        }
    }
    return FALSE;
}

static inline BOOL NNSi_G2dIsBinFileVersionValid(const NNSG2dBinaryFileHeader* pBinFile, u16 version) {
    if (pBinFile != NULL) {
        if (pBinFile->version >= version) {
            return TRUE;
        }
    }
    return FALSE;
}

static inline BOOL NNS_G2dIsBinFileValid(const NNSG2dBinaryFileHeader* pBinFile, u32 binFileSig, u16 version) {
    if (pBinFile != NULL) {
        return NNSi_G2dIsBinFileSignatureValid(pBinFile, binFileSig) && NNSi_G2dIsBinFileVersionValid(pBinFile, version);
    }
    return FALSE;
}

// USA: func_020b27c8
extern "C" ARM BOOL func_020b27c8(void* pNftrFile, NNSG2dFontInformation** ppRes) {
    BOOL isOldVer = FALSE;

    if (!NNS_G2dIsBinFileValid((NNSG2dBinaryFileHeader*)pNftrFile, NNS_G2D_BINFILE_SIG_FONTDATA, NNS_G2D_NFTR_VER)) {
        if (!NNS_G2dIsBinFileValid((NNSG2dBinaryFileHeader*)pNftrFile, NNS_G2D_BINFILE_SIG_FONTDATA, NNS_G2D_NFTR_PREV_VER)) {
            func_020c9be0();
        }
        isOldVer = TRUE;
    }

    {
        NNSG2dBinaryFileHeader* pBinFile = (NNSG2dBinaryFileHeader*)pNftrFile;
        NNSG2dBinaryBlockHeader* pBinBlock;

        PatchFontResourceBlocks_020b291c(pBinFile);

        pBinBlock = FindChunkById_020b0288((struct Hdr02b0288*)pBinFile, NNS_G2D_BINBLK_SIG_FINFDATA);

        if (pBinBlock == NULL) {
            *ppRes = NULL;
            return FALSE;
        }

        *ppRes = (NNSG2dFontInformation*)((u8*)pBinBlock + sizeof(*pBinBlock));
        if (isOldVer) {
            (*ppRes)->pGlyph->flags = 0;
        }
    }

    return TRUE;
}
