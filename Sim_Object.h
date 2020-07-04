//
// Created by lior on 04/07/2020.
//

#ifndef ATOOP_HW3_SIM_OBJECT_H
#define ATOOP_HW3_SIM_OBJECT_H


#include <iostream>
#include "Point.h"
using namespace std;

class Sim_Object {
private:

public:
    Sim_Object();
    virtual ~Sim_Object();

    virtual Point& getLocation() = 0;
    virtual void update() = 0;
    void broadcest_current_state();

};


#endif //ATOOP_HW3_SIM_OBJECT_H
