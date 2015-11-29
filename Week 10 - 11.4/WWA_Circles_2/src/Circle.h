//
//  Circle.h
//  WWA_Circles
//
//  Created by Shaun & Lauren on 10/29/15.
//
//

#pragma once

#include "ofMain.h"


class Circle : ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
private:
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f acc;
    
    ofColor circleColor;
    
    float diameter;



};
