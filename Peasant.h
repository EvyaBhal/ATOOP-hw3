//
// Created by lior on 04/07/2020.
//

#ifndef ATOOP_HW3_PEASANT_H
#define ATOOP_HW3_PEASANT_H



#include "Agent.h"

class Peasant : virtual public Agent{
private:

public:
    Peasant(const Point& location = Point(0,0), int speed = PEASANT_SPEED, const string& name = "", int health = PEASANT_HEALTH);
    virtual ~Peasant();

};


#endif //ATOOP_HW3_PEASANT_H
