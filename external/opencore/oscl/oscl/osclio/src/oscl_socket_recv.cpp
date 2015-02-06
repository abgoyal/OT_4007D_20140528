

#include "oscl_scheduler_ao.h"
#include "oscl_socket_recv.h"


//////////// Method /////////////////////

OsclRecvMethod *OsclRecvMethod::NewL(OsclIPSocketI& c)
{
    OsclAny*p = c.Alloc().ALLOCATE(sizeof(OsclRecvMethod));
    OsclError::LeaveIfNull(p);
    OsclRecvMethod* self = OSCL_PLACEMENT_NEW(p, OsclRecvMethod(c));
    OsclError::LeaveIfNull(self);
    OsclError::PushL(self);
    self->ConstructL();
    OsclError::Pop();
    return self;
}

void OsclRecvMethod::ConstructL()
{
    OsclAny*p = Alloc().ALLOCATE(sizeof(OsclRecvRequest));
    OsclError::LeaveIfNull(p);
    OsclRecvRequest* self = OSCL_PLACEMENT_NEW(p, OsclRecvRequest(*this));
    OsclError::LeaveIfNull(self);
    OsclError::PushL(self);
    self->ConstructL();
    OsclError::Pop();
    iSocketRequestAO = self;
    OsclSocketMethod::ConstructL(iSocketRequestAO);
}

OsclRecvMethod::~OsclRecvMethod()
{
    if (RecvRequest())
    {
        RecvRequest()->~OsclRecvRequest();
        Alloc().deallocate(RecvRequest());
    }
}

TPVSocketEvent OsclRecvMethod::Recv(uint8* &aPtr, uint32 aMaxLen,
                                    int32 aTimeout)
{
    if (!StartMethod(aTimeout))
        return EPVSocketFailure;

    RecvRequest()->Recv(aPtr, aMaxLen);

    return EPVSocketPending;
}

uint8 *OsclRecvMethod::GetRecvData(int32 *aLength)
{
    return RecvRequest()->GetRecvData(aLength);
}

//////////// AO /////////////////////

void OsclRecvRequest::Recv(uint8* &aPtr, uint32 aMaxLen)
{
    OsclAny *p = NewRequest(sizeof(RecvParam));
    if (!p)
        PendComplete(OsclErrNoMemory);
    else
    {
        iParam = OSCL_PLACEMENT_NEW(p, RecvParam(aPtr, aMaxLen, 0));
        if (!iParam)
            PendComplete(OsclErrNoMemory);
        else
            SocketI()->Recv(*Param(), *this);
    }
}
void OsclRecvRequest::Success()
{
    SocketI()->RecvSuccess(*Param());
}

uint8 *OsclRecvRequest::GetRecvData(int32 *aLength)
{
    if (iParam)
    {
        if (aLength)
            *aLength = Param()->iBufRecv.iLen;
        return Param()->iBufRecv.iPtr;
    }
    else
    {
        if (aLength)
            *aLength = 0;
        return NULL;
    }
}




