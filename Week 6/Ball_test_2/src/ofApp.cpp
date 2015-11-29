#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
//    myball.setup();

    
    numBalls = ofRandom (80, 100);
    for (int i = 0; i < numBalls; i++){
        Ball temp;
        balls.push_back(temp);
        balls[i].setup();
    }
}

//--------------------------------------------------------------
void ofApp::update(){

//    myball.update();
    
    for (int i = 0; i < numBalls; i++){
        balls[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    myball.draw();
    

    
    for (int i = 0; i < numBalls; i++){
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
    
    balls.clear();
    setup();

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
