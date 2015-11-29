//
//  Particle.cpp
//  Firework_02
//
//  Created by Shaun & Lauren on 10/12/15.
//
//

#include "Particle.h"



void Particle::setup(int posX, int posY){


    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
    
    vel.x = ofRandom(-2, 2); //initial horizontal speed
    vel.y = ofRandom(-2, 2); //initial vertical speed
    
    acc.x = ofRandom(-.2,.2); //initial horizontal acc (also influences direction)
    acc.y = ofRandom(-.2,.2); //initial vertical acc (also influences direction)
    
    diameter = ofRandom(5,20);
    
    ballColor = ofColor (ofRandom(150, 255), 0, 0); //red - center
    ballColor1 = ofColor (0, ofRandom(150, 255), 0); //green
    ballColor2 = ofColor (0, 0, ofRandom(150, 255)); //blue


}

//----------------------------------------------------------


void Particle::update(){

    //update speed by accelleration
    
    vel.x += acc.x;
    vel.y += acc.y;
    
    //update position by speed
    
    pos.x += vel.x;
    pos.y += vel.y;
    
    

}


//--------------------------------------------------------


void Particle::draw(){


    //red balls
//    ofEllipse(pos.x, pos.y, diameter, diameter);

    
    
    //
    
//    ofSetColor(ballColor);
//
//    
//    //green balls - don't know why I have to call the color directly
//    ofPushStyle();
//    ofSetColor(0, 255, 0);
//    ofEllipse(pos.x/2, pos.y/2, diameter, diameter);
//    ofPopStyle();
    

    
    ofSetColor(ballColor);
    ofBeginShape();
    ofEllipse(pos.x, pos.y + 50, diameter, diameter);

    
    //draw green

    
    ofSetColor(ballColor1);
    ofEllipse(pos.x/2, pos.y/2, diameter, diameter);
    
    ofPopStyle();
    
    //draw blue
    
    ofPushStyle();
    
    ofSetColor(ballColor2);
    ofEllipse(pos.x + 250, pos.y -100, diameter, diameter);

    



}