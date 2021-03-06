
#ifndef PVMF_SOCKET_NODE_EXTENSION_INTERFACE_H_INCLUDED
#define PVMF_SOCKET_NODE_EXTENSION_INTERFACE_H_INCLUDED

#define PVMF_SOCKET_NODE_EXTENSION_INTERFACE_MIMETYPE "pvxxx/SocketNode/socketnodeextensioninterface"
#define PVMF_SOCKET_NODE_MIMETYPE "pvxxx/SocketNode"
#define PVMF_SOCKET_NODE_BASEMIMETYPE "pvxxx"

#define PVMF_SOCKET_NODE_EXTENSION_INTERFACE_UUID PVUuid(1,2,3,0xfe,0xcd,0xee,0x1f,0x00,0x11,0x22,0x33)

class PVMFSocketNode;

class PVMFSocketNodeExtensionInterface : public PVInterface
{
    public:
        virtual ~PVMFSocketNodeExtensionInterface() {}
        OSCL_IMPORT_REF virtual PVMFStatus AllocateConsecutivePorts(PvmfMimeString* aPortConfig,
                uint32& aLowerPortNum,
                uint32& aHigherPortNum, uint32& aStartPortNum) = 0;

        OSCL_IMPORT_REF virtual PVMFStatus SetMaxTCPRecvBufferSize(uint32 aBufferSize) = 0;
        OSCL_IMPORT_REF virtual PVMFStatus GetMaxTCPRecvBufferSize(uint32& aSize) = 0;
        OSCL_IMPORT_REF virtual PVMFStatus SetMaxTCPRecvBufferCount(uint32 aCount) = 0;
        OSCL_IMPORT_REF virtual PVMFStatus GetMaxTCPRecvBufferCount(uint32& aCount) = 0;
        OSCL_IMPORT_REF virtual OsclMemPoolResizableAllocator* CreateSharedBuffer(const PVMFPortInterface* aPort , uint32 aBufferSize, uint32 aExpectedNumberOfBlocksPerBuffer, uint32 aResizeSize, uint32 aMaxNumResizes) = 0;

};
#endif //PVMF_SOCKET_NODE_EXTENSION_INTERFACE_H_INCLUDED


