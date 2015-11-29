#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //myParticle.setup();
    
    //numParticles = ofRandom (80, 100);
    numParticles = 80;
    
    for (int i = 0; i < numParticles; i++){
        Particle temp;
        particles.push_back(temp);
        
        particles[i].setup();
    }


    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //myParticle.update();
    
    for (int i = 0; i < numParticles; i++){
        particles[i].update();
    }
    


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //myParticle.draw();
    
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
    
//    myParticle.clear();
//    setup();

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
