//
//  Particle.h
//  Firework_02
//
//  Created by Shaun & Lauren on 10/12/15.
//
//

#pragma once

#include "ofMain.h"

class Particle : public ofBaseApp{

    
    public:
        void setup(int posX, int posY);
        void update();
        void draw();
    
    
    private:
    
    ofVec2f pos; //posiiton of the ball
    ofVec2f vel; //velocity - change in posiiton over time
    ofVec2f acc; // accelleration - change in speed over time
    
    ofColor ballColor;
    ofColor ballColor1;
    ofColor ballColor2;
    
    float diameter;


    };
