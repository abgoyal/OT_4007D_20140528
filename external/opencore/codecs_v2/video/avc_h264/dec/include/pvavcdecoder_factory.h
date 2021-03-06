
#ifndef PVAVCDECODER_FACTORY_H_INCLUDED
#define PVAVCDECODER_FACTORY_H_INCLUDED

#ifndef OSCL_BASE_H_INCLUDED
#include "oscl_base.h"
#endif

#ifndef OSCL_MEM_H_INCLUDED
#include "oscl_mem.h"
#endif

class PVAVCDecoderInterface;

class PVAVCDecoderFactory
{
    public:
        /**
         * Creates an instance of a PVAVCDecoder. If the creation fails, this function will leave.
         *
         * @returns A pointer to an instance of PVAVCDecoder as PVAVCDecoderInterface reference or leaves if instantiation fails
         **/
        OSCL_IMPORT_REF static PVAVCDecoderInterface* CreatePVAVCDecoder(void);

        /**
         * Deletes an instance of PVAVCDecoder and reclaims all allocated resources.
         *
         * @param aVideoDec The PVAVCDecoder instance to be deleted
         * @returns A status code indicating success or failure of deletion
         **/
        OSCL_IMPORT_REF static bool DeletePVAVCDecoder(PVAVCDecoderInterface* aVideoDec);
};

#endif

