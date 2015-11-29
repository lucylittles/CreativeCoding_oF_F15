//
//  Leaf.h
//  Lauren_Branch_redux
//
//  Created by Shaun & Lauren on 9/22/15.
//
//

#pragma once

#include "ofMain.h"


class Leaf {
    
public:
    
    void setup();
    void update();
    void draw(float _xPos, float _yPos);
    
    //stuff pertaining to each leaf
    
    
private:
    ofColor stemColor;
    ofColor leafColor;
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    
    float stemLength, stemWidth;
    float leafLength, leafWidth;
    float leafCurvature;
    
    
    
};
