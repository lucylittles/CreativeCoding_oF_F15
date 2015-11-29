#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //for multiple particles
    
    numParticles = ofRandom(5, 100);
    
    for(int i=0; i < numParticles; i++){
        
        Particle tempParticle;
        particles.push_back(tempParticle);
        
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //for one particles
    MyParticle1.update();
    MyParticle2.update();
    MyParticle3.update();

    
    //for multiple particles
    
    for(int i = 0; i < numParticles; i++){
        particles[i].update();
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //multiple balls
    ofSetColor(0, 0, 255);
    for(int i = 0; i <numParticles; i++){
        particles[i].draw();
    }
    
    
    
    //for one ball
    ofSetColor(0, 255, 0);
    MyParticle1.draw();
    MyParticle2.draw();
    MyParticle3.draw();


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
    
    particles.clear();
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
