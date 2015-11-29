//
//  ball.h
//  leaf_wednesday
//
//  Created by Shaun & Lauren on 9/16/15.
//
//

#ifndef __leaf_wednesday__ball__
#define __leaf_wednesday__ball__

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
    

#endif /* defined(__leaf_wednesday__ball__) */
