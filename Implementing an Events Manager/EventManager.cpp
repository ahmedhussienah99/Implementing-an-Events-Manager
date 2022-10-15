#include "EventManager.h"

bool Compartor::operator()(EventType *ob1,EventType* ob2){
    //return(ob1->priority<ob2->priority );
    return ob1->GetPriority()<ob2->GetPriority();
        }


EventManager::EventManager(){}
EventManager& EventManager::createEventManagerObject() {
	static EventManager EventManagerSingletonObject;
	return EventManagerSingletonObject;
}
void EventManager::loop(){
    EventType* it;
    while(!list2.empty()){
        it=list2.top();
        list2.pop();
        it->start();
            }

    }

void EventManager::postEvent(EventType *event){
        list2.push(event);
    }

void EventManager::startHandlingEvents(){
        type1Thread = new thread(&EventManager::loop, this);
    }

void EventManager::stopHandlingEvents()
    {   type1Thread->join();
        delete type1Thread;
    }

