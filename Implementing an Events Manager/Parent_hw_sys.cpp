#include"Parent_hw_sys.h"


HardwareEvents::HardwareEvents(int p,type t):priority(p),t(t){}

 void HardwareEvents::setupHardware(){
            cout << "Setup Hardware Executing\n";
        }

HardwareEvents::~HardwareEvents(){}

SystemEvents::SystemEvents(int p,type t):priority(p),t(t){}

void SystemEvents::setupSystem(){
            cout << "System Setup Called\n";
        }
SystemEvents::~SystemEvents(){}
