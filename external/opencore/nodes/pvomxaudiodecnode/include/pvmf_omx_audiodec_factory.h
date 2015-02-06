
#ifndef PVMF_OMX_AUDIODEC_FACTORY_H_INCLUDED
#define PVMF_OMX_AUDIODEC_FACTORY_H_INCLUDED

#ifndef OSCL_BASE_H_INCLUDED
#include "oscl_base.h"
#endif

#ifndef OSCL_SCHEDULER_AO_H_INCLUDED
#include "oscl_scheduler_ao.h"
#endif

// Forward declaration
class PVMFNodeInterface;

/* Audio decoder node factory related definitions*/

#define KPVMFOMXAudioDecNodeUuid PVUuid(0x9fe9e9e1,0x2222,0x4394,0xad,0x85,0x43,0xd3,0x29,0x11,0x9a,0x4a)
class PVMFOMXAudioDecNodeFactory
{
    public:
        /**
         * Creates an instance of a PVMFOMXAudioDecNode. If the creation fails, this function will leave.
         *
         * @param aPriority The active object priority for the node. Default is standard priority if not specified
         * @returns A pointer to an instance of PVMFOMXAudioDecNode as PVMFNodeInterface reference or leaves if instantiation fails
         **/
        OSCL_IMPORT_REF static PVMFNodeInterface* CreatePVMFOMXAudioDecNode(int32 aPriority = OsclActiveObject::EPriorityNominal);

        /**
         * Deletes an instance of PVMFOMXAudioDecNode
         * and reclaims all allocated resources.  An instance can be deleted only in
         * the idle state. An attempt to delete in any other state will fail and return false.
         *
         * @param aNode The PVMFAVCDecNode instance to be deleted
         * @returns A status code indicating success or failure of deletion
         **/
        OSCL_IMPORT_REF static bool DeletePVMFOMXAudioDecNode(PVMFNodeInterface* aNode);
};

#endif // PVMF_OMX_AUDIODEC_FACTORY_H_INCLUDED

