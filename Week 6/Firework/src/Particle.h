//
//  Particle.h
//  Firework
//
//  Created by Shaun & Lauren on 10/10/15.
//
//

#pragma once

#include "ofMain.h"

class Particle : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    
private:
    
    ofVec2f pos; // particles position
    ofVec2f vel; //velocity - speed
    ofVec2f acc; //change in speed over time (also determines direction)
    
    ofColor particleColor;
    
    float diameter;
};
