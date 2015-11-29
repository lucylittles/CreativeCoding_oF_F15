//
//  Bird.h
//  Birds
//
//  Created by Shaun & Lauren on 11/19/15.
//
//

#pragma once

#include "ofMain.h"


class Bird : ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
private:
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f acc;
    
    ofColor birdColor;
    
    float diameter;
    
};


