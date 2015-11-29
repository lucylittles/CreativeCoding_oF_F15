//
//  Line.h
//  Lauren_Tree_Test_2
//
//  Created by Shaun & Lauren on 9/30/15.
//
//

#pragma once

#include "ofMain.h"


class Line {
    
public:
    void setup();
    void update();
    void draw();
    
    //stuff pertaining to my lines
    
    float xPos, yPos;
    float lineLength, lineWidth;
    ofColor lineColor;
    float rotation; //rotation
    
    float stemLength, stemWidth;
    float leafLength, leafWidth;
    float leafCurvature;

};
