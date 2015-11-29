//
//  Line.cpp
//  Lines_for_WWA
//
//  Created by Shaun & Lauren on 10/15/15.
//
//

#include "Line.h"


void Line::setup(){
    pos.x = ofRandomWidth();
    pos.y = ofRandom(0, 768);
    vel.x = ofRandom(3); //initial speed in the horizontal direction
    vel.y = 0; //initial speed in the vertical direction
    acc.x = 0; //initial horizontal acceleration - or direction
    acc.y = 0; //initial vertical acceleration - or direction
    
    
    lineColor = ofColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
    
    rectWidth = ofRandom(50, 500);
    rectHeight = ofRandom (3, 10);


}


void Line::update(){

    // update speed by acceleration
    vel.x += acc.x;
    vel.y += acc.y;

    // update position by speed
    pos.x += vel.x;
    pos.y += vel.y;
   
    
}


void Line::draw(){

    //ofRect(pos.x, pos.y, ofRandom(50,150), ofRandom(3, 10));
    
    ofRect(pos.x, pos.y, rectWidth, rectHeight);
    ofSetColor(lineColor);


};