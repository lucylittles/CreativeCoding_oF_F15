#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Line.h"
#include "Circle.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    //CODE FOR VIDEO PLAYER
    ofVideoPlayer 		videoOne;
    ofVideoPlayer       videoTwo;
    bool                frameByframe;
    
    
    //ACTIVATE GUIs
    ofxPanel gui;
    bool bHide;
    
   
    //SETUP FOR VIDEO ONE
    ofxIntSlider V1_r;
    ofxIntSlider V1_g;
    ofxIntSlider V1_b;
    ofxIntSlider V1_a;
    
    
    ofxFloatSlider V1_posx;
    ofxFloatSlider V1_posy;
    
    ofxFloatSlider V1_width;
    ofxFloatSlider V1_height;
    
    ofxToggle V1_normpos;
    ofxToggle V1_normsize;
    
    
    
    //SETUP FOR VIDEO TWO
    ofxIntSlider V2_r;
    ofxIntSlider V2_g;
    ofxIntSlider V2_b;
    ofxIntSlider V2_a;
    
    ofxFloatSlider V2_posx;
    ofxFloatSlider V2_posy;
    
    ofxFloatSlider V2_width;
    ofxFloatSlider V2_height;
    
    ofxToggle V2_normpos;
    ofxToggle V2_normsize;
    
    
    //SETUP FOR LINES
    
    ofxToggle lines_on;
    
    
    //SETUP FOR CIRCLES
    
    ofxToggle dots_on;
    
    

    
    
private:
    
    //Line myline;
    
    vector<Line> lines;
    int numLines;
    
    
    vector<Circle> circles;
    int numCircles;
		
};
