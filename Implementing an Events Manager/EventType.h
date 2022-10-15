#ifndef EVENTTYPE_H_INCLUDED
#define EVENTTYPE_H_INCLUDED
#include <iostream>
#include"Parent_hw_sys.h"
#include"Child_hw_sys.h"
using namespace std;

class EventType{

private:
        int priority;
        HardwareEvents* phw;
        SystemEvents *psys;
        type t;
public:
    EventType(type t,int p,nameevent e);
    void start();
    int GetPriority();
};


#endif // EVENTTYPE_H_INCLUDED
