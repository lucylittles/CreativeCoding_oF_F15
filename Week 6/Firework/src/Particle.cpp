//
//  Particle.cpp
//  Firework
//
//  Created by Shaun & Lauren on 10/10/15.
//
//

#include "Particle.h"


void Particle::setup(){

    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
    
    vel.x = ofRandom(-5, 5); //initial speed horizontal
    vel.y = 0; //initial speed vertical
    
    acc.x = 0; //initial horizontal accelleration - determines direction
    acc.y = (-.5,.1); //initial vertical accelleration - determines direction
    
    diameter = ofRandom(1, 50);
    
    particleColor = ofColor(255, 0, 0);

    
    
}

//----------------------------------------


void Particle::update(){
    
    // update speed by acceleration
    vel.x += acc.x;
    vel.y += acc.y;
    
    // update position by speed
    pos.x += vel.x;
    pos.y += vel.y;


}


//---------------------------------------

void Particle::draw(){


    ofEllipse(pos.x, pos.y, diameter, diameter);
    ofSetColor(particleColor);
}
