#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
//    myparticle.setup();
    
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    numParticles = ofRandom(30, 40);
    
    for (int i = 0; i < numParticles; i++){
        Particle temp;
        particles.push_back(temp);
        particles[i].setup(ofGetWidth()/2, ofGetHeight()/2);
    }
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
//    myparticle.update();
    
    for (int i = 0; i < numParticles; i++){
        particles[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    

                 
//    myparticle.draw();
    
    for (int i = 0; i < numParticles; i++){
        particles[i].draw();

    
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

    for (int i = 0; i < numParticles; i++){
        particles[i].setup(mouseX, mouseY);
    }


}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    for (int i = 0; i < numParticles; i++){
        particles[i].draw();
    }

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
