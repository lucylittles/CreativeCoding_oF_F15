//
//  ball.h
//  leaf_wednesday
//
//  Created by Shaun & Lauren on 9/16/15.
//
//

#pragma once

#include "ofMain.h"

class Ball {
    
public: //place public functions or variable here
   
     Ball(); //constructor
    
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


