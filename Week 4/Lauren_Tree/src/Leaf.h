//
//  Leaf.h
//  Lauren_Tree
//
//  Created by Shaun & Lauren on 9/24/15.
//
//

#pragma once

#include "ofMain.h"


class Leaf {
    
public:
    
    void setup(float _branchAngle);
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