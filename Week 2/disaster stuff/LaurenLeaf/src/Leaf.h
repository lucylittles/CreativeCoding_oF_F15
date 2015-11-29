//
//  Leaf.h
//  LaurenLeaf
//
//  Created by Shaun & Lauren on 9/10/15.
//
//

#pragma once

#include <ofMain.h>

class Leaf {
    
 //methods
public:
    void setup();
    void update();
    void draw();
    
    // stuff pertaining to each instance of the Leaf class
private:
    
    ofColor stemColor;
    ofColor leafColor;
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    
    float stemLength, stemWidth;
    float leafLength, leafWidth;
    float leafCurvature;
    
    ofColor petalColor;
    
    
};

