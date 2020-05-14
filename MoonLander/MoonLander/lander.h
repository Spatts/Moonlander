//
//  lander.h
//  MoonLander
//
//  Created by Steven Patterson on 6/4/18.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#ifndef lander_h
#define lander_h

#include "point.h"
#include "velocity.h"

class Lander
{
private:
    Point point;
    Velocity velocity;
    bool alive;
    bool landed;
    int fuel;
    
public:
    
    Lander();
    
    Point getPoint() const {return point;}
    Velocity getVelocity() const {return velocity;}
    bool isAlive() const {return alive;}
    bool isLanded() const {return landed;}
    int getFuel() const {return fuel;}
    
    void setLanded(bool landed);
    void setAlive(bool alive);
    void setFuel(int fuel);
    
    bool canThrust();
    void applyGravity(float gravity);
    void applyThrustLeft();
    void applyThrustRight();
    void applyThrustBottom();
    
    void advance();
    void draw();

};



#endif /* lander_h */




















