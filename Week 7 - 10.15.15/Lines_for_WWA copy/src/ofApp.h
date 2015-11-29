#pragma once

#include "ofMain.h"
#include "Line.h"
#include "ofxSyphon.h"

class ofApp : public ofBaseApp{

	public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    
    float 	counter;
    bool	bSmooth;
    
    ofTexture tex;
    
    ofxSyphonServer mainOutputSyphonServer;
    ofxSyphonServer individualTextureSyphonServer;
    
    ofxSyphonClient mClient;
    
    private:
    
    
    //Line myline;
    
    vector<Line> lines;
    int numLines;

   
		
};
