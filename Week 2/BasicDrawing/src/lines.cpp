//
//  lines.cpp
//  BasicDrawing
//
//  Created by Shaun & Lauren on 9/14/15.
//
//

#include "lines.h"

void Lines::setup(){
    
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    
    lineWidth = ofRandom(15, 30);
    lineLength = ofRandom(150, 300);

//    lineColor = (0, ofRandom(200,255), 0);
  
    lineColor = (ofRandom(0,20), ofRandom(150,255), ofRandom(0,20), ofRandom(225,255));
    
    rotation = ofRandom(0,360);
    

    float scaleFactor; 

    
}

//--------------------------------------------------------------
void Lines::update(){
    
}

//--------------------------------------------------------------
void Lines::draw(){
    
    
    ofPushMatrix();
    
    ofRotateX(rotation);
    ofSetColor(lineColor);
    ofRect(xPos, yPos, lineWidth, lineLength);

    
    ofPopMatrix();

    
    
    
    
}
