//
//  velocity.cpp
//  MoonLander
//
//  Created by Steven Patterson on 6/4/18.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#include "velocity.h"

Velocity :: Velocity()
{

    setDx(0);
    setDy(0);

}

Velocity :: Velocity(float dx, float dy)
{

    setDx(dx);
    setDy(dy);
    
}

void Velocity :: setDx(float dx)
{
    this-> dx = dx;
}

void Velocity:: setDy(float dy)
{
    this-> dy = dy;
}
