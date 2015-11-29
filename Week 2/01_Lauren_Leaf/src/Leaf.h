//
//  Leaf.h
//  01_Lauren_Leaf
//
//  Created by Shaun & Lauren on 9/16/15.
//
//

#pragma once

#include "ofMain.h"


class Leaf {
    
    public:

        void setup();
        void update();
        void draw();
    
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
