#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofToggleFullscreen();

    //myline.setup();
    
    numLines = ofRandom(5,50);
    for (int i = 0; i < numLines; i++){
    Line temp;
    lines.push_back(temp);
    lines[i].setup();
    }
    

    myImage.loadImage("ocean.JPG");
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
    //ofBackground(0, 255, 0);
//    ofSetColor(255);
    myImage.draw(0,0);

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
//   ofToggleFullscreen();

    lines.clear();
    setup();

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
