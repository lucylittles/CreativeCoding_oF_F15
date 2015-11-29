//
//  Petal.cpp
//  Petals
//
//  Created by Shaun & Lauren on 9/30/15.
//
//

#include "Petal.h"


void Petal::setup(){

    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    petalLength = ofRandom(100,150);
    petalWidth = ofRandom(100, 200);
    petalColor = ofColor (ofRandom(200,255), ofRandom(200,255), ofRandom(0, 50));
    dotsColor = ofColor (ofRandom(50, 100), ofRandom(200, 255), ofRandom(200,255));
    rotation = ofRandom(0, 360);
    scaleFactor = ofRandom(.5, 1);
    
}

//--------------------------------------------------------------
void Petal::update(){
    
}

//--------------------------------------------------------------
void Petal::draw(){
    
    
    //draw petal
    
    
    ofPushMatrix();
    ofTranslate(xPos, yPos);
    ofScale(scaleFactor, scaleFactor);
    ofRotate(rotation);
    
   
    
    ofSetColor(petalColor);
    ofBeginShape();
    
    float x0 = 0;
    float x1 = 150;
    float x2 = 150;
    float x3 = 0;
    
    float y0 = 10;
    float y1 = 20;
    float y2 = 200;
    float y3 = 10;
    
    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    

    
    //draw dots in space
    
    ofPushStyle();
    
    ofSetColor(dotsColor);
    ofCircle(xPos, yPos, 20);
    
    ofPopStyle();
  
    
    ofEndShape();
    
    ofPopMatrix();
    
    
    //draw center of flower
    
    
    ofPushStyle();
    ofSetColor(100, 50, 0);
    ofCircle(xPos, yPos, 20);
    ofPopStyle();
    
    
    
}