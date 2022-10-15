#include"Child_hw_sys.h"

HardwareSendPacket::HardwareSendPacket(int p,type t):HardwareEvents(p,t){}

void HardwareSendPacket::executeEvent(){
            setupHardware();
            cout<<"HardwareSendPacket is executing\n";
        }


HardwareReceivePacket::HardwareReceivePacket(int p,type t):HardwareEvents(p,t){}

 void HardwareReceivePacket::executeEvent(){
           setupHardware();
            cout<<"HardwareReceivePacket is executing\n";
        }

SystemSleep::SystemSleep(int p,type t):SystemEvents(p,t){}
       void SystemSleep::executeEvent(){
        setupSystem();
        cout<<"SystemSleep is executing\n";
        }

SystemWakeup::SystemWakeup(int p,type t):SystemEvents(p,t){}
       void SystemWakeup::executeEvent(){
       setupSystem();
       cout<<"SystemWakeup is executing\n";
        }

 SystemShutdown::SystemShutdown(int p,type t):SystemEvents(p,t){}
       void SystemShutdown::executeEvent(){
       setupSystem();
       cout<<"SystemShutdown is executing\n";
        }
