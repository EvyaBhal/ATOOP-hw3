//
// Created by lior on 04/07/2020.
//

#ifndef ATOOP_HW3_POINT_H
#define ATOOP_HW3_POINT_H

#include <iostream>
#include <iomanip>
using namespace std;
class Point {
private:
    double x;
    double y;
public:
    Point();
    Point(double x, double y);
    void print() const;
    bool operator==(const Point& rhs);

};


#endif //ATOOP_HW3_POINT_H
