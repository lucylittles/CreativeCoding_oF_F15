
//
//  lines.h
//  BasicDrawing
//
//  Created by Shaun & Lauren on 9/14/15.
//
//

#ifndef __BasicDrawing__lines__
#define __BasicDrawing__lines__

#include "ofMain.h"

class Lines : public ofBaseApp{
    
public:
    //methods
    void setup();
    void update();
    void draw();
    
    //constructor
    Lines();

    
    //variables pertaining to lines
    float lineWidth;
    float lineLength;
    float xPos, yPos;
    ofColor lineColor;
    
    float rotation;
    
    private:
    
};

#endif /* defined(__BasicDrawing__lines__) */
