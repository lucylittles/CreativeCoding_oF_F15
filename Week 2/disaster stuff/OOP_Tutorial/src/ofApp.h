#pragma once

#include "ofMain.h"
#include "ofBall.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    ofBall myBall;
    
    private:
		
};
