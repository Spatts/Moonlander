//
//  lander.cpp
//  MoonLander
//
//  Created by Steven Patterson on 6/4/18.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#include "lander.h"
#include "uiDraw.h"
#include "velocity.h"
#include "point.h"

Lander :: Lander()
{
    setAlive(true);
    setLanded(false);
    setFuel(0);
    
    point.setY(225);
    point.setX(random(-190, 190));
    
}



void Lander:: setLanded(bool landed)
{
    this-> landed = landed;

}

void Lander:: setAlive(bool alive)
{
    this-> alive = alive;

}

void Lander:: setFuel(int fuel)
{
    this-> fuel = fuel;

}

bool Lander:: canThrust()
{
    if (getFuel() > 0)
    {
        return true;
    }
    else {return false;}
    
}


void Lander:: applyGravity(float gravity)
{
    velocity.setDy(velocity.getDy() - gravity);
}

void Lander:: applyThrustLeft()
{
    velocity.setDx(velocity.getDx() + 0.1);
    if (fuel > 0)
    {
        setFuel(fuel - 1);
    }
}

void Lander:: applyThrustRight()
{
    velocity.setDx(velocity.getDx() - 0.1);
    if (fuel > 0)
    {
        setFuel(fuel - 1);
    }
}

void Lander:: applyThrustBottom()
{
    velocity.setDy(velocity.getDy() + 0.3);
    if (fuel > 0)
    {
        setFuel(fuel - 3);
    }
}

void Lander:: advance()
{
    if (!landed && alive)
    {
        point.addY(velocity.getDy());
        point.addX(velocity.getDx());
    }
}

void Lander:: draw()
{
    drawLander(getPoint());
}


