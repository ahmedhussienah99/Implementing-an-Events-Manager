#include <iostream>
#include <queue>
#include"EventManager.h"
#include <cstdlib>
#include "EventGenerator.h"
using namespace std;

int main()
{
    EventManager&  ev = EventManager::createEventManagerObject();
    EventGenerator eg(19);
    eg.startGenerator();
    ev.startHandlingEvents();
    ev.stopHandlingEvents();
    eg.stopGenerator();


    return 0;
}




//trying to test
    //EventManager ev;
    //HardwareReceivePacket*  HardwareReceivePackett = new HardwareReceivePacket(HardwareEvent,Hardware_ReceivePacket);
    //SystemSleep*  SystemSleepp = new SystemSleep(3);
   //EventType* e2= new EventType(SystemEvent,1,System_Sleep);
    //EventType* e1= new EventType(HardwareEvent,2,Hardware_ReceivePacket);
      //EventType* e3= new EventType(HardwareEvent,3,Hardware_SendPacket);
        //e2->start();
       // e1->start();
       // e3->start();
    //ev.postEvent(e2);
    //ev.postEvent(e1);
   // ev.postEvent(e3);
    //ev.postEvent(e4);
