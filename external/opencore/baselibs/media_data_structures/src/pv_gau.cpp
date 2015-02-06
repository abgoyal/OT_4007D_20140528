
#include "oscl_mem.h"
#include "pv_gau.h"


OSCL_EXPORT_REF GAU::GAU()
        : free_buffer_states_when_done(false)
{
    oscl_memset(this, 0, sizeof(*this));
    buf.num_fragments = 0;
    numMediaSamples = 0;
};

OSCL_EXPORT_REF GAU::GAU(GAU & gauElement)
        : free_buffer_states_when_done(false)
{
    // initializing to zero because code may read beyond numMediaSamples.
    oscl_memset(this, 0, sizeof(*this));
    numMediaSamples = gauElement.numMediaSamples;
    for (uint32 ii = 0; ii < numMediaSamples; ii++)
    {
        info[ii] = gauElement.info[ii];
    }
    buf = gauElement.buf;
    for (int32 jj = 0; jj < gauElement.buf.num_fragments; jj++)
    {
        buf.buf_states[jj]->increment_refcnt();
    }
}

OSCL_EXPORT_REF GAU::~GAU()
{
    for (int32 ii = 0; ii < buf.num_fragments; ii++)
    {
        if (buf.buf_states[ii] != NULL)
        {
            buf.buf_states[ii]->decrement_refcnt();
            if (free_buffer_states_when_done && buf.buf_states[ii]->get_refcount() == 0)
            {
                OSCL_DELETE(buf.buf_states[ii]);
                buf.buf_states[ii] = NULL;
            }
        }
    }
}

OSCL_EXPORT_REF uint32 GAU::getSamplesTotalSize(uint32 number, MediaMetaInfo *metaInfo)  //return the sum of total sample size
{
    uint32 i, size = 0;
    for (i = 0; i < number; i++)
    {
        size += metaInfo->len;
        metaInfo++;
    }

    return size;
}

