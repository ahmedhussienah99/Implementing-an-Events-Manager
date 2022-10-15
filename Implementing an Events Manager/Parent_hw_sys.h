#ifndef PARENT_HW_SYS_H_INCLUDED
#define PARENT_HW_SYS_H_INCLUDED
#include <iostream>
using namespace std;

enum type{HardwareEvent,SystemEvent};
enum nameevent{Hardware_SendPacket,Hardware_ReceivePacket,System_Sleep,System_Wakeup,System_Shutdown};


class HardwareEvents {
protected: int priority; type t;
public:
        virtual void executeEvent()=0;
        HardwareEvents(int p,type t);
        void setupHardware();
        virtual ~HardwareEvents();

};

class SystemEvents  {
protected: int priority; type t;
public:
        virtual void executeEvent()=0;
        SystemEvents(int p,type t);
        void setupSystem();
        virtual ~SystemEvents();

};


#endif // PARENT_HW_SYS_H_INCLUDED
