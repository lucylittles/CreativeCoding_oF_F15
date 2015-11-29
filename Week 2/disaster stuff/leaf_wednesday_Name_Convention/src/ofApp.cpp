#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    numBalls = 100;
    
    for(int i=0; i < numBalls; i++){
    
        Ball tempBall;
        balls.push_back(tempBall);
    
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    //this is for displaying 1 ball
    laurensBall.update();
    
    
    for(int i = 0; i < numBalls; i++){
        balls[i].update();
    
    }
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    //this is for displaying 1 ball
    ofSetColor(255,0,0);
    laurensBall.draw();
    
    ofSetColor(0, 255, 0);
    for(int i = 0; i < numBalls; i++){
        balls[i].draw();
        
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
