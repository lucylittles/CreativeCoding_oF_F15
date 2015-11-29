#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //myline.setup();
    
    
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    numLines = ofRandom (100, 200);
    for (int i = 0; i < numLines; i++){
        Line temp;
        lines.push_back(temp);
        lines[i].setup();
    }
    
    ofSetWindowTitle("ofxSyphon Example");
    
    mainOutputSyphonServer.setName("Screen Output");
    individualTextureSyphonServer.setName("Texture Output");
    
    mClient.setup();
    
    //using Syphon app Simple Server, found at http://syphon.v002.info/
    mClient.set("","Simple Server");
    
    tex.allocate(200, 100, GL_RGBA);
    
    ofSetFrameRate(60); // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps.

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //myline.update();
    
    for (int i = 0; i < numLines; i++){
        lines[i].update();
        
    counter = counter + 0.033f;
        
    }
        
//         BOUNCE OFF WALLS
//        if ( lines[i] > 1024 ) { //if the ball hits the right edge
//            lines.clear();
//            setup();
//            
//        }
//        if (lines[i].x < 0) { //if the ball hits the left edge
//
//        }


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //myline.draw();
    
    for (int i = 0; i < numLines; i++){
        lines[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

