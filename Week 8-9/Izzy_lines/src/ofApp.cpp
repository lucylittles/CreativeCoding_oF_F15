#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    numLines = ofRandom (100, 200);
    for (int i = 0; i < numLines; i++){
        Line temp;
        lines.push_back(temp);
        lines[i].setup();
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //myline.update();
    
    for (int i = 0; i < numLines; i++){
        lines[i].update();
        
    }

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
