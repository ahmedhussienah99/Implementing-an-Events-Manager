#ifndef CHILD_HW_SYS_H_INCLUDED
#define CHILD_HW_SYS_H_INCLUDED
#include <iostream>
using namespace std;
#include "Parent_hw_sys.h"

class HardwareSendPacket :public HardwareEvents{
public :
       HardwareSendPacket(int p,type t);
       void executeEvent()override;
};

class HardwareReceivePacket :public HardwareEvents{
  public :
       HardwareReceivePacket(int p,type t);
       void executeEvent()override;
};

class SystemSleep : public SystemEvents{
public :
       SystemSleep(int p,type t);
       void executeEvent()override;
};

class SystemWakeup : public SystemEvents{
public :
       SystemWakeup(int p,type t);
       void executeEvent();
};

class SystemShutdown : public SystemEvents{
public :
       SystemShutdown(int p,type t);
       void executeEvent()override;
};

#endif // CHILD_HW_SYS_H_INCLUDED
