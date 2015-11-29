#include "ofApp.h"

const int width = 1280;
const int height = 720;

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableAlphaBlending(); //allows you to use transparent colors
    ofEnableSmoothing(); //make edges smoooooooooth...
    
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    //mycircle.setup();
    
    numCircles = ofRandom (500, 5000);
//    numCircles = 10;
    for (int i = 0; i < numCircles; i++){
        Circle temp;
        circles.push_back(temp);
        circles[i].setup();
    }
    
    ofSetFrameRate(12);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //mycircle.update();
    
    for (int i = 0; i < numCircles; i++){
        circles[i].update();
        
    }
    
    glClear(GL_DEPTH_BUFFER_BIT);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //mycircle.draw();
    
    for (int i = 0; i < numCircles; i++){
        circles[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
