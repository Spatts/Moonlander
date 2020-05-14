//
//  velocity.h
//  MoonLander
//
//  Created by Steven Patterson on 6/4/18.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#ifndef velocity_h
#define velocity_h

class Velocity
{
private:
    float dx;
    float dy;

public:
    Velocity();
    Velocity(float dx, float dy);

    float getDx() const {return dx;}
    float getDy() const {return dy;}
    
    void setDx(float dx);
    void setDy(float dy);
    
};

#endif /* velocity_h */
