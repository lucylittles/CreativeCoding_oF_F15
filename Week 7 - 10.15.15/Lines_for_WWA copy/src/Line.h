//
//  Line.h
//  Lines_for_WWA
//
//  Created by Shaun & Lauren on 10/15/15.
//
//

#pragma once

#include "ofMain.h"


class Line : public ofBaseApp{


public:
    void setup();
    void update();
    void draw();
    
    
private:
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f acc;
    
    ofColor lineColor;
    
    float rectWidth;
    float rectHeight;
    
    


};
