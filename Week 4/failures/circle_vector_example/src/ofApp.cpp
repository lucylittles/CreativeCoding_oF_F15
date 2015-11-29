#include "ofApp.h"

void ofApp::setup(){
    //numCircles = (int) ofRandom(0,10);
    numCircles = 10;
    for (int i = 0; i < numCircles; i++){
        Circle temp;
        temp.setup();
        myCircles.push_back(temp);
    }
    mycircle.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
//    mycircle.update();
    
//    for(int i = 0; i < numCircles; i++){
//        
//        myCircles.update();
//    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    mycircle.draw();
    
    for(int i = 0; i < numCircles; i++){
        myCircles.draw();
        
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
