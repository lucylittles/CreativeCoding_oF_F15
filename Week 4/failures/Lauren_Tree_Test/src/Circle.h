//
//  Circle.h
//  Lauren_Tree_Test
//
//  Created by Shaun & Lauren on 9/27/15.
//
//

#pragma once

#include "ofMain.h"

class Circle : public ofBaseApp{
    
public:
    //methods
    void setup();
    void update();
    void draw();
    
//    //constructor
//    Circle();
    
    

    

    
private:
    
    //variables pertaining to lines
    
    float xPos, yPos;
    float diameter;
    ofColor circleColor;
    
};




