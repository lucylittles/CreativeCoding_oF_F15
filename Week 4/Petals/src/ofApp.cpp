#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //mypetals.setup();
    
    
    ofEnableAlphaBlending(); //allows you to use transparent colors
    ofEnableSmoothing(); //make lines smoooooooooth...
    
    numPetals = ofRandom (30, 40);
    for (int i = 0; i < numPetals; i++){
        Petal temp;
        petals.push_back(temp);
        petals[i].setup();
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //mypetals.update();
    


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //mypetals.draw();
    
    ofBackground(50, 50, 50);
    //ofSetColor(255);
    
    for (int i = 0; i < numPetals; i++){
        petals[i].draw();
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

    petals.clear();
    setup();
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
//    petals.clear();
//    setup();

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
