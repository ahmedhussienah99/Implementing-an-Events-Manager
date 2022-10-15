
#include"EventGenerator.h"

EventGenerator::EventGenerator(int f):freq(f){}


void EventGenerator::Generator(){
    EventManager&  ev = EventManager::createEventManagerObject();
        EventType* e4;
         for(int x=0;x<freq;x++){
            int ra= 1+ (rand() % 10);
            if(ra%2==0){
                e4= new EventType(HardwareEvent,3,Hardware_SendPacket);
            }
            else if(ra%3==0){
                 e4= new EventType(HardwareEvent,1,Hardware_ReceivePacket);
            }
            else if(ra%5==0){
                 e4= new EventType(SystemEvent,3,System_Sleep);
            }
            else if(ra%7==0){
                 e4= new EventType(SystemEvent,2,System_Wakeup);
            }
            else{
                 e4= new EventType(SystemEvent,1,System_Shutdown);

            }

           ev.postEvent(e4);
          }
        }

void EventGenerator::startGenerator(){
        type1Thread = new thread(&EventGenerator::Generator, this);
        }

void EventGenerator::stopGenerator(){
        type1Thread->join();
        delete type1Thread;
        }

