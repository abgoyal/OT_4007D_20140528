
#ifndef _SEBASE_H_
#define _SEBASE_H_

#include "h245msg.h"
#include "h245inf.h"
#include "oscl_timer.h"

class PER;
class H245;
class SE;
class PVLogger;

#define TIMER_DURATION 30

class SEBase
{
    public:
        SEBase();
        virtual ~SEBase() {}

        void SetSE(SE *se)
        {
            MySE = se;
        }
        void RequestTimer(int32 timerID, int32 timeoutInfo, int32 count, OsclTimerObserver *observer = 0);
        void CancelTimer(int32 timerID);

        void SetPer(PER *per)
        {
            MyPer = per;
        }
        void MessageSend(PS_H245Msg pMsg);
        OSCL_IMPORT_REF void MessageSend(uint32 type1, uint32 type2, uint8 *pdata);

        void SetH245(H245 *h245)
        {
            MyH245 = h245;
        }
        void PrimitiveSend(PS_InfHeader pPrimitive);

        OSCL_IMPORT_REF void Print(const char *format, ...);

        uint32 TimerDuration; // Duration of timers in seconds

    private:
        SEBase(const SEBase&);

        SE *MySE;
        PER *MyPer;
        H245 *MyH245;
        PVLogger *Logger;
};

#endif //_SEBASE_H_
