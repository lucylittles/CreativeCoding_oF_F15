//
//  Particle.cpp
//  Lauren_Particles
//
//  Created by Shaun & Lauren on 9/16/15.
//
//

#include "Particle.h"

Particle::Particle(){
    
    x = ofRandom(0, ofGetWidth()); //give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);
    speedY = ofRandom(-5, 5);
    
    dim = ofRandom(5, 50);
    
}

void Particle::update(){
    if(x < 0){
        x = 0;
        speedX *= -1;
    } else if (x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0){
        y = 0;
        speedY *= -1;
    } else if (y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x+=speedX;
    y+=speedY;
    
}

void Particle::draw(){
    //values for R, G, B
    //ofSetColor(0, 255, 0);
    ofCircle(x, y, dim);
    
}
