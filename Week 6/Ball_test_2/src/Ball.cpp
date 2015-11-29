//
//  Ball.cpp
//  Ball_test_2
//
//  Created by Shaun & Lauren on 10/10/15.
//
//

#include "Ball.h"



void Ball::setup(){

//    xPos = ofGetWidth()/2;
//    yPos = ofGetHeight()/2;
    
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    vel.x = ofRandom(-2,2); //initial speed in the horizontal direction
    vel.y = ofRandom(-2,2); //initial speed in the vertical direction
    acc.x = ofRandom(2, -2); //initial horizontal acceleration - or direction
    acc.y = ofRandom(-1,1); //initial vertical acceleration - or direction
    
    diameter = ofRandom(1, 20);
    bounciness = .9;

    
    ballColor = ofColor(ofRandom(0,50), ofRandom(100,150), ofRandom(150, 255));
    ballColor1 = ofColor(ofRandom(200,250), ofRandom(0,10), ofRandom(0, 10));


}

//----------------------------------------------------

void Ball::update(){
    
    // update speed by acceleration
    vel.x += acc.x;
    vel.y += acc.y;
    
    // update position by speed
    pos.x += vel.x;
    pos.y += vel.y;
    
    //    // BOUNCE OFF WALLS
    if ((pos.x + diameter/2) > ofGetWidth()) { //if the ball hits the right edge
        pos.x = ofGetWidth() - diameter/2; //reset the position to the right edge minus the radius
        vel.x *= -1; //flip the horizontal speed (aka bounce!)
        //vel.x *= -bounciness;
    }
    if ((pos.x - diameter/2) < 0) { //if the ball hits the left edge
        pos.x = 0 + diameter/2; //reset the position to the left edge plus the radius
        vel.x *= -1; //flip the horizontal speed (aka bounce!)
        //vel.x *= -bounciness;
    }
    if ((pos.y + diameter/2) > ofGetHeight()) { //if the ball hits the bottom edge
        pos.y = ofGetHeight() - diameter/2; //set the y position to the bottom edge minus the radius
        vel.y *= -1; //flip the vertical speed (aka bounce!)
        //        vel.y *= -bounciness; // bounce with
        //        vel.x *= bounciness; // slow the horizontal speed down each time the ball touches the bottom edge ... but don't reverse the direction
    }
    if ((pos.y - diameter/2) < 0) {  //if the ball hits the top edge
        pos.y = 0 + diameter/2; //set the ball to the top edge + the radius
        vel.y *= -1; //flip the vertical speed (aka bounce!)
        //        vel.y *= -bounciness;
        //        vel.x *= bounciness; //slow the horizontal speed down each time the ball touches the top wall ... but don't reverse the direction
   }
    
    
    


}


//----------------------------------------------------

void Ball::draw(){


    ofPushStyle();
    ofBeginShape();
    ofSetColor(ballColor);
    ofEllipse(pos.x, pos.y, diameter, diameter);
    ofEndShape();
    ofPopStyle();
    
    
//    ofPushStyle();
//    ofBeginShape();
//    ofSetColor(ballColor1);
//    ofEllipse(pos.x, pos.y, diameter, diameter);
//    ofEndShape();
//    ofPopStyle();

    
    
}