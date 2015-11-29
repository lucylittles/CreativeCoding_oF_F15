//
//  Ball.h
//  Ball_test_2
//
//  Created by Shaun & Lauren on 10/10/15.
//
//

#pragma once

#include "ofMain.h"



class Ball : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
 
    
private:
    
    //float  xPos, yPos;
    
    ofVec2f pos; //position of the Ball
    ofVec2f vel; //velocity (aka speed... change in position over time) ... as far as your computer is concered, this is how many pixels the Ball position changes each frame.
    ofVec2f acc; //acceleration (aka change in speed over t
   
    
    ofColor ballColor;
    ofColor ballColor1;
    
    float diameter;
    float bounciness;

    
    
};







