#include "ofApp.h"

const int width = 1280;
const int height = 720;

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableAlphaBlending(); //allows you to use transparent colors
    ofEnableSmoothing(); //make edges smoooooooooth...
    
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    //mycircle.setup();
    
    numBirds = 100;
    //    numCircles = 10;
    for (int i = 0; i < numBirds; i++){
        Bird temp;
        birds.push_back(temp);
        birds[i].setup();
    }
    
    ofSetFrameRate(12);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0); i < birds.size(); i++){
    

    
//loop through every bird
    float tempAcc = 0;//create a temporary accelleration, and 3 sub acelerations that will soon be calculated and added to our birds velocity
    float a1 = accTowardsCenterofMass(i);
    float a2 = friendlyButNotTooFriendly(i);
    float a3 = matchVelocityOfNearbyBirds(i);
    //A1 = bird wanting to move towards the middle of all other birds
    //A2 = bird wanting to move away from fellows birds that are too close
    //A3 = the bird wanting to move at the same speed as nearby friends
    //A = A1 + A2 + A3...find my totaly influence of sub -intentions
    //store birds.acc = A
    tempAcc = a1 + a2 + a3;
    birds[i].acc=tempAcc;
   
    }

    
    
    for (int i = 0; i < numBirds; i++){
        birds[i].update();
        }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //mycircle.draw();
    
    for (int i = 0; i < numBirds; i++){
        birds[i].draw();
    }
    
    return myValue;
    
    
    
    
}



//-------------------------------------------------------------
void ofApp::accTowardsCenterofMass(){


}

//-------------------------------------------------------------
void ofApp::friendlyButNotTooFriendly(){


}

//-------------------------------------------------------------
void ofApp::matchVelocityOfNearbyBirds(){


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
