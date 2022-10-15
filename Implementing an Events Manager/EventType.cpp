#include "EventType.h"


EventType::EventType(type t,int p,nameevent e):priority(p),t(t){
         if(t==SystemEvent){
            if(e==System_Sleep){psys= dynamic_cast <SystemSleep*>(new SystemSleep(p,t));}
            if(e==System_Wakeup){psys= dynamic_cast <SystemWakeup*>(new SystemWakeup(p,t));}
            if(e==System_Shutdown){psys= dynamic_cast <SystemShutdown*>(new SystemShutdown(p,t));}

        }
        if(t==HardwareEvent){
            if(e==Hardware_SendPacket){phw=dynamic_cast <HardwareSendPacket*>(new HardwareSendPacket(p,t));}
            if(e==Hardware_ReceivePacket){phw=dynamic_cast <HardwareReceivePacket*>(new HardwareReceivePacket(p,t));}
        }

    }


void EventType::start(){
      if(t==SystemEvent){psys->executeEvent();  }
      if(t==HardwareEvent){phw->executeEvent();  }

    }

int EventType::GetPriority(){
        return priority;
    }
