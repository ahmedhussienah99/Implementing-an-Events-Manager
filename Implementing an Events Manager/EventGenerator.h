#ifndef EVENTGENERATOR_H_INCLUDED
#define EVENTGENERATOR_H_INCLUDED
#include <iostream>
#include <thread>
#include "EventManager.h"
using namespace std;

class  EventGenerator{

private: int freq;
        thread* type1Thread;

public:

    EventGenerator(int f);
    //EventManager& getobjectmanager(EventManager& ev){ return ev;}
    void Generator();
    void startGenerator();
    void stopGenerator();


};

#endif // EVENTGENERATOR_H_INCLUDED
