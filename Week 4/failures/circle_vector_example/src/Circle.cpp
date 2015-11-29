//
//  Circle.cpp
//  Lauren_Tree_Test
//
//  Created by Shaun & Lauren on 9/27/15.
//
//

#include "Circle.h"

void Circle::setup(){
    
    //one method of putting circles in random places
        xPos = ofRandom(0, ofGetWidth());
        yPos = ofRandom (0,ofGetHeight());
    
//    xPos = ofGetWidth()/2;
//    yPos = ofGetHeight()/2;
    
    diameter = ofRandom(15,50);
    circleColor = ofColor(ofRandom(50,100), ofRandom(25,50), ofRandom(20,50));
}


void Circle::update(){
    
    //this is one way to do it - xpos plus 1
    //xPos = xPos + 1;
    
    xPos++;
    yPos++;
    
    
}

void Circle::draw(){
    
    ofSetColor(circleColor);
    ofCircle(xPos, yPos, diameter);
    
    //    ofCircle(xPos + 100, yPos +100, diameter);
    //    ofSetColor(circleColor);
    //
    
    
}



