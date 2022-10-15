#ifndef EVENTMANAGER_H_INCLUDED
#define EVENTMANAGER_H_INCLUDED
#include <iostream>
#include <queue>
#include <thread>
using namespace std;
#include "EventType.h"

class Compartor{
public:
        bool operator()(EventType *ob1,EventType* ob2);

};


class EventManager{
private:
        priority_queue<EventType*,vector<EventType*>,Compartor>list2;
        thread* type1Thread;
            /*
         * Provide a singleton object
         * 1. Bank CTOR is private
         * 2. delete the Copy CTOR.
         * 3. delete the assignment operator.
         */
        EventManager();
        EventManager(const EventManager& other) = delete;
        EventManager& operator = (const EventManager& other) = delete;
public:
    static EventManager& createEventManagerObject();
    void loop();
    void postEvent(EventType *event);
    void startHandlingEvents();
    void stopHandlingEvents();

};
#endif // EVENTMANAGER_H_INCLUDED
