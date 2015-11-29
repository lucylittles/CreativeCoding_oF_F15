//
//  Branch.cpp
//  Lauren_Branch
//
//  Created by Shaun & Lauren on 9/17/15.
//
//

#include "Branch.h"

//------------------------------------------------------------------

void Branch::setup(float _xPos,
                   float _yPos,
                   float _width,
                   float _length,
                   float _splitPercentage,
                   int _maxSubdivisions,
                   int _maxSegments,
                   int _segmentsSinceStart,
                   float _angle,
                   float _curvature,
                   ofColor _color,
                   int numberofBobs){
    
    //set incoming values based on what was passed in from previous instance of branch
    xPos = _xPos;
    yPos = _yPos;
    width = _width;
    length = _length;
    splitPercentage = _splitPercentage;
    maxSubdivisions = _maxSubdivisions;
    maxSegments = _maxSegments;
    segmentsSinceStart = _segmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;
    
    //myleaf.setup();
    
    //store branch in MAIN vector<> of branches...
    
    cout << "New Branch" << endl;
    cout << "Segment Count = ";
    cout << segmentsSinceStart << endl;
    
    //draw current branch instance
    ofSetColor(color);
    ofSetLineWidth((int)width);
    ofLine(xPos, yPos, xPos + length*cos(angle), yPos + length*sin(angle)); //draw the branch segment
    
    //update variables to pass to next sub branch
    xPos += length*cos(angle);
    yPos += length*sin(angle);
    width = width*(ofRandom(0.5,0.8));
    segmentsSinceStart += 1;
    angle += curvature;
    curvature += ofRandom(0, (float)(2*PI)/360.0);
    
    //myLeaf.draw(xPos, yPos);
    
    //RECURSION!
    if(segmentsSinceStart <= maxSegments) {
        //roll the dice...will the branch split
        if(ofRandom(0, 1) > splitPercentage){ //NO
            Branch subBranch;
            subBranch.setup(xPos, yPos, width, length, splitPercentage, maxSubdivisions, maxSegments, segmentsSinceStart, angle, curvature, color, 5);
        } else { //Yes!
            cout << "split" << endl;
            Branch subBranch1;
            float angle1 = angle + ofRandom(0, 3*(PI/8));
            Branch subBranch2;
            float angle2 = angle - ofRandom(0, 3*(PI/8));
            
            subBranch1.setup(xPos, yPos, width, length, splitPercentage, maxSubdivisions, maxSegments, segmentsSinceStart, angle1, curvature, color, 5);
            
            subBranch2.setup(xPos, yPos, width, length, splitPercentage, maxSubdivisions, maxSegments, segmentsSinceStart, angle2, curvature, color, 5);
            
            
        }
        
    }
    
}
