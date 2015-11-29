//
//  Petal.h
//  Petals
//
//  Created by Shaun & Lauren on 9/30/15.
//
//

#pragma once

#include "ofMain.h"

class Petal : public ofBaseApp{


public:
    
    void setup();
    void update();
    void draw();
    
    
private:
    //petal variables
    
    float xPos, yPos; //position
    float petalLength, petalWidth; //petal length/width
    
    float rotation; //rotation
    ofColor petalColor; //color
    ofColor dotsColor; //color of dots
    float scaleFactor; //scale
    

};