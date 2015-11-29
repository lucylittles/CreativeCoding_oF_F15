#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableAlphaBlending(); //allows you to use transparent colors
    ofEnableSmoothing(); //make edges smoooooooooth...
    
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    mycircle.setup();
    
    ofSetFrameRate(24);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    mycircle.update();
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    mycircle.draw();

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
