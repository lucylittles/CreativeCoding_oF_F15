//
//  Bird.cpp
//  Birds
//
//  Created by Shaun & Lauren on 11/19/15.
//
//

#include "Bird.h"

void Bird::setup(){

    pos.x = ofRandom(ofGetWidth());
    pos.y = ofRandom(ofGetHeight());
    vel.x = ofRandom (-3, 3);
    vel.y = ofRandom (-3, 3);
    acc.x = -2;
    acc.y = ofRandom (-2, 2);
    
    birdColor = ofColor (0, 0, 255);
    
    diameter = 15;


}


void Bird::update(){
    
    // update speed by acceleration
    vel.x += acc.x;
    vel.y += acc.y;
    
    // update position by speed
    pos.x += vel.x;
    pos.y += vel.y;

    if (pos.x > ofGetWidth()) { //if the ball hits the right edge
        pos.x = ofGetWidth(); //reset the position to the right edge minus the radius
        vel.x *= -1; //flip the horizontal speed (aka bounce!)
        //vel.x *= -bounciness;
    }
    if (pos.x < 0) { //if the ball hits the left edge
        pos.x = 0; //reset the position to the left edge plus the radius
        vel.x *= -1; //flip the horizontal speed (aka bounce!)
        //vel.x *= -bounciness;
    }
    
    if (pos.y > ofGetWidth()) { //if the ball hits the right edge
        pos.y = ofGetWidth(); //reset the position to the right edge minus the radius
        vel.y *= -1; //flip the horizontal speed (aka bounce!)
        //vel.x *= -bounciness;
    }
    if (pos.y < 0) { //if the ball hits the left edge
        pos.y = 0; //reset the position to the left edge plus the radius
        vel.y *= -1; //flip the horizontal speed (aka bounce!)
        //vel.x *= -bounciness;
    }


}



void Bird::draw(){

    ofEllipse(pos.x, pos.y, diameter, diameter);
    ofSetColor(birdColor);



}