#include "Graphics/NSBXX/RenderCommands_Common.h"

static inline int BitVecCheck(const unsigned int* vec, unsigned int idx)
{
    return (int)(vec[idx >> 5] & (1 << (idx & 31)));
}

// USA: func_020b5758 // KEEP-NAME
void RenderCommand_9(RenderCommandHandler* handler, int modifier)
{
    int64_t w = 0;
    NSBXXInternalModel* model = handler->modelContext_->internalModel_;
    const NSBXXInvBindMatrix* evpMtx = (const NSBXXInvBindMatrix*)((uint8_t*)model + model->inverseBindsOffset_);
    unsigned int numMtx = handler->instructionPointer_[2];
    uint8_t* p = handler->instructionPointer_ + 3;

    {
        unsigned int i;
        struct
        {
            Matrix4x3 M;
            Matrix3x3 N;
        } sum;
        Matrix4x4* pX;
        Matrix3x3* pY;

        func_020ca458(0, &sum, sizeof(sum));
        SendQueuedDataToGeometryFifo();

        GXFIFO_MATRIX_MODE = 0;
        GXFIFO_MATRIX_STORE = 1;
        GXFIFO_MATRIX_IDENTITY = 0;
        GXFIFO_MATRIX_MODE = 2;

        for (i = 0; i < numMtx; ++i)
        {
            unsigned int idxJnt = *(p + 1);
            unsigned int offset = idxJnt * sizeof(Struct_0210b678);
            int evpCached = BitVecCheck(handler->invBindBitfield_, idxJnt);

            pX = (Matrix4x4*)((uint8_t*)data_0210b678 + offset);
            if (!evpCached)
            {
                handler->invBindBitfield_[idxJnt >> 5] |= 1 << (idxJnt & 31);

                GXFIFO_MATRIX_GET = *p;
                GXFIFO_MATRIX_MODE = 1;
                _Z25IssueCommand0x19_020c51a4i(evpMtx[idxJnt].mat4x3.entries);
            }

            if (i != 0)
            {
                sum.N.entries[0] += (w * pY->entries[0]) >> 12;
                sum.N.entries[1] += (w * pY->entries[1]) >> 12;
                sum.N.entries[2] += (w * pY->entries[2]) >> 12;

                sum.N.entries[3] += (w * pY->entries[3]) >> 12;
                sum.N.entries[4] += (w * pY->entries[4]) >> 12;
                sum.N.entries[5] += (w * pY->entries[5]) >> 12;

                sum.N.entries[6] += (w * pY->entries[6]) >> 12;
                sum.N.entries[7] += (w * pY->entries[7]) >> 12;
                sum.N.entries[8] += (w * pY->entries[8]) >> 12;
            }

            if (!evpCached)
            {
                while (_Z33SubmitBlock0x40IfNotBusy_020c54fci(pX))
                    ;
                GXFIFO_MATRIX_MODE = 2;
                _Z25IssueCommand0x1A_020c51c0i(evpMtx[idxJnt].mat3x3.entries);
            }

            w = *(p + 2) << 4;

            sum.M.entries[0] += (w * pX->entries[0]) >> 12;
            sum.M.entries[1] += (w * pX->entries[1]) >> 12;
            sum.M.entries[2] += (w * pX->entries[2]) >> 12;

            sum.M.entries[3] += (w * pX->entries[4]) >> 12;
            sum.M.entries[4] += (w * pX->entries[5]) >> 12;
            sum.M.entries[5] += (w * pX->entries[6]) >> 12;

            sum.M.entries[6] += (w * pX->entries[8]) >> 12;
            sum.M.entries[7] += (w * pX->entries[9]) >> 12;
            sum.M.entries[8] += (w * pX->entries[10]) >> 12;

            sum.M.entries[9] += (w * pX->entries[12]) >> 12;
            sum.M.entries[10] += (w * pX->entries[13]) >> 12;
            sum.M.entries[11] += (w * pX->entries[14]) >> 12;

            p += 3;
            pY = (Matrix3x3*)((uint8_t*)&data_0210b678[0].mat3x3 + offset);

            if (!evpCached)
            {
                while (_Z33SubmitBlock0x80IfNotBusy_020c552ci(pY))
                    ;
            }
        }
        sum.N.entries[0] += (w * pY->entries[0]) >> 12;
        sum.N.entries[1] += (w * pY->entries[1]) >> 12;
        sum.N.entries[2] += (w * pY->entries[2]) >> 12;

        sum.N.entries[3] += (w * pY->entries[3]) >> 12;
        sum.N.entries[4] += (w * pY->entries[4]) >> 12;
        sum.N.entries[5] += (w * pY->entries[5]) >> 12;

        sum.N.entries[6] += (w * pY->entries[6]) >> 12;
        sum.N.entries[7] += (w * pY->entries[7]) >> 12;
        sum.N.entries[8] += (w * pY->entries[8]) >> 12;

        _Z25IssueCommand0x17_020c5188i(sum.N.entries);
        GXFIFO_MATRIX_MODE = 1;
        _Z25IssueCommand0x17_020c5188i(sum.M.entries);
        GXFIFO_MATRIX_MODE = 0;
        GXFIFO_MATRIX_GET = 1;
        GXFIFO_MATRIX_MODE = 2;
    }
    GXFIFO_MATRIX_STORE = *(handler->instructionPointer_ + 1);
    handler->instructionPointer_ += 3 + *(handler->instructionPointer_ + 2) * 3;
}
