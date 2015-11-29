//
//  Leaf.cpp
//  LaurenLeaf
//
//  Created by Shaun & Lauren on 9/10/15.
//
//



#include "Leaf.h"


void Leaf::setup(){
    xPos = ofGetWidth()/2; //set to middle of screen in the horizontal
    yPos = ofGetHeight()/2; //set to 3/4 of the way from the top of the screen in the vertical
    leafLength = ofRandom(150,300);
    leafWidth = ofRandom(80,200);
    leafColor = ofColor(ofRandom(0,20),ofRandom(100,200),ofRandom(0,20), ofRandom(150,255)); //set to random green color
    stemColor = ofColor(ofRandom(100,150),69,19); //brown
    petalColor = ofColor(ofRandom(240,255),250,255);
    scaleFactor = ofRandom(.5,1.0);
    ofSetRectMode(OF_RECTMODE_CENTER);
    stemLength = ofRandom(50,100);
    stemWidth = ofRandom(2,4);
    leafCurvature = ofRandom(1, 5);
    rotation = ofRandom(0, 360);

}

void Leaf::update(){
    
}

void Leaf::draw(){
    
    ofCircle(GetHeight(), GetWidth(), 20);



    
    

    
    
}

