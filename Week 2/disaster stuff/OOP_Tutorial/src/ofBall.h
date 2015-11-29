//
//  ofBall.h
//  OOP_Tutorial
//
//  Created by Shaun & Lauren on 9/14/15.
//
//

#ifndef __OOP_Tutorial__ofBall__
#define __OOP_Tutorial__ofBall__

#include <ofMain.h>

class ofBall {
    
public: //place public functions or variable here
    //methods
    void update();
    void draw();
    
    //variables
    float x;
    float y;
    float speedY;
    float speedX;
    int dim;
    
    ofBall(); //constructor
    
private:
};

#endif /* defined(__OOP_Tutorial__ofBall__) */
