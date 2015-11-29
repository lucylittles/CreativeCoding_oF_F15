//
//  Particle.h
//  Lauren_Particles
//
//  Created by Shaun & Lauren on 9/16/15.
//
//

#pragma once

#include "ofMain.h"

class Particle {
    
public: //place public functions or variable here
    
    Particle(); //constructor
    
    //methods
    void update();
    void draw();
    
    //variables
    float x;
    float y;
    float speedY;
    float speedX;
    int dim;
    
    
    
    
};
