//
//  Circle.cpp
//  WWA_Circles
//
//  Created by Shaun & Lauren on 10/29/15.
//
//

#include "Circle.h"

void Circle::setup(){
    pos.x = ofRandom(0, 1024);
    pos.y = ofRandom(0, 768);
//    vel.x = ofRandom(-3, 3); //initial speed in the horizontal direction
//    vel.y = ofRandom(-3, 3); //initial speed in the vertical direction
//    acc.x = ofRandom(-1, 2); //initial horizontal acceleration - or direction
//    acc.y = ofRandom(-2, 1); //initial vertical acceleration - or direction
    
        vel.x = ofRandom(-10, 10); //initial speed in the horizontal direction
        vel.y = 0; //initial speed in the vertical direction
        acc.x = 0; //initial horizontal acceleration - or direction
        acc.y = 0; //initial vertical acceleration - or direction
    
    
    circleColor = ofColor(255,255,255, ofRandom(0, 255));
    
    //diameter = ofRandom(10, 50);

    
    
}

void Circle::update(){
    
    // update speed by acceleration
    vel.x += acc.x;
    vel.y += acc.y;
    
    // update position by speed
    pos.x += vel.x;
    pos.y += vel.y;
    
    
    // BOUNCE OFF WALLS
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


void Circle::draw(){
    
    //ofEllipse(diameter, diameter, pos.x, pos.y);
    
    ofCircle(pos.x, pos.y, ofRandom(0, 3));
    ofSetColor(circleColor);


};
