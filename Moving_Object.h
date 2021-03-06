//
// Created by lior on 04/07/2020.
//

#ifndef ATOOP_HW3_MOVING_OBJECT_H
#define ATOOP_HW3_MOVING_OBJECT_H


#include "Point.h"

class Moving_Object {
private:
    Point location;
    Point destionation;
    int speed;

public:
    Moving_Object();

    Moving_Object(const Point& location, int speed);

    virtual ~Moving_Object();

    const Point& getLocation() const;
    void setLocation(const Point& location);
    const Point& getDestionation() const;
    void setDestionation(const Point& destionation);
    int getSpeed() const;
    void setSpeed(int speed);

    void start_moving();
};

#endif //ATOOP_HW3_MOVING_OBJECT_H
