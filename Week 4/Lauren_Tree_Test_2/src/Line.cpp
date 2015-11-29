//
//  Line.cpp
//  Lauren_Tree_Test_2
//
//  Created by Shaun & Lauren on 9/30/15.
//
//

#include "Line.h"


void Line::setup() {

    xPos = (ofGetWidth()/2);
    yPos = (ofGetHeight()/2);
    
    lineLength = ofRandom(50, 200);
    lineWidth = ofRandom(20, 50);
    lineColor = ofColor(ofRandom(0,20), ofRandom(100,150), ofRandom(0,255));

    //connor's stuff
    rotation = ofRandom(0,360);
    stemLength = ofRandom(50,100);
    stemWidth = ofRandom(2,4);
    leafLength = ofRandom(150,300);
    leafWidth = ofRandom(80,200);
    leafCurvature = ofRandom(1, 5);


}

void Line::update() {
    
    
}


void Line::draw() {
    
/* ------------------------------------------------ */
//this is Lauren's code using Connor's logic:
    
    ofPushMatrix();
    ofTranslate(xPos, yPos);
    ofRotateZ(rotation);
    
    ofSetColor(lineColor);
    
    ofBeginShape();
    
    float x0 = 0;
    float x1 = x0 - leafWidth;
    float x2 = x0 - leafWidth/leafCurvature;
    float x3 = x0;
    
    float y0 = 0 - stemLength;
    float y1 = y0 - leafLength/3;
    float y2 = y1 - leafLength/3;
    float y3 = y0 - leafLength;
    
    ofRect(x2, y2, lineWidth, lineLength);
    
    ofEndShape();

    ofPopMatrix();


    
/* ------------------------------------------------ */
//try uncommenting this and playing w your own shapes:
    
//    ofPushMatrix();
//    ofTranslate(xPos, yPos);
//    ofRotateZ(rotation);
//    
//    //draw rect
//    
//    ofSetColor(lineColor);
//    
//    //draw left half of leaf
//    
//    ofBeginShape();
//    
//    float x0 = 0;
//    float x1 = x0 - leafWidth;
//    float x2 = x0 - leafWidth/leafCurvature;
//    float x3 = x0;
//    
//    float y0 = 0 - stemLength;
//    float y1 = y0 - leafLength/3;
//    float y2 = y1 - leafLength/3;
//    float y3 = y0 - leafLength;
//    
//    ofVertex(x0,y0);
//    ofBezierVertex(x1,y1,x2,y2,x3,y3);
//    
//    ofEndShape();
//    
//    //draw right half of leaf
//    
//    ofBeginShape();
//    
//    x0 = 0;
//    x1 = x0 + leafWidth;
//    x2 = x0 + leafWidth/leafCurvature;
//    x3 = x0;
//    
//    y0 = 0 - stemLength;
//    y1 = y0 - leafLength/3;
//    y2 = y1 - leafLength/3;
//    y3 = y0 - leafLength;
//    
//    ofVertex(x0,y0);
//    ofBezierVertex(x1,y1,x2,y2,x3,y3);
//    
//    ofEndShape();
//    
//    ofPopMatrix();

/* ------------------------------------------------ */




}