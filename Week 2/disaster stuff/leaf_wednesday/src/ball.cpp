//
//  ball.cpp
//  leaf_wednesday
//
//  Created by Shaun & Lauren on 9/16/15.
//
//

#include "ball.h"


ofBall::ofBall(){
    
    x = ofRandom(0, ofGetWidth()); //give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);
    speedY = ofRandom(-1, 1);
    
    dim = 20;
    
}

void ofBall::update(){
    if(x < 0){
        x = 0;
        speedX *= -1;
    } else if (x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0){
        y = 0;
        speedY *= 1;
    } else if (y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x+=speedX;
    y+=speedY;
    
}

void ofBall::draw(){
    //values for R, G, B
    ofSetColor(120, 120, 120);
    ofCircle(x, y, dim);
    
}