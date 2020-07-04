//
// Created by lior on 04/07/2020.
//

#ifndef ATOOP_HW3_AGENT_H
#define ATOOP_HW3_AGENT_H


#define PEASANT_HEALTH 10
#define THUG_HEALTH 5
#define PEASANT_SPEED 5
#define KNIGHT_SPEED 10


#include "Sim_Object.h"
#include "Moving_Object.h"

class Agent : virtual public Sim_Object , private Moving_Object{
private:
    string name;
    int health;
    string state;
public:
    Agent(const Point& location, int speed, const string& name, int health);

    virtual ~Agent();

    const string& getName() const;
    void setName(const string& name);
    int getHealth() const;
    void setHealth(int health);
    const string& getState() const;
    void setState(const string& state);

    Point& get_location();
    void move_to();
    virtual void update() = 0;



};


#endif //ATOOP_HW3_AGENT_H
