//
//  Branch.h
//  Lauren_Branch
//
//  Created by Shaun & Lauren on 9/17/15.
//
//

#ifndef __Lauren_Branch__Branch__
#define __Lauren_Branch__Branch__

#include "ofMain.h"

class Branch : public ofBaseApp{
    
public:
    void setup (float george, float _yPos, float _width,
                float _length,
                float _splitPercentage,
                int _maxSubdivisions,
                int _maxSegments,
                int _segmentsSinceStart,
                float _angle,
                float _curvature,
                ofColor _color,
                int numberOfBobs);
    
    void update();
    void draw();
    
private:
    
    float xPos, yPos; //position
    float width, length; //width, length
    float splitPercentage; //splitPercentage
    int maxSubdivisions; //masSubdivisions
    int maxSegments; //maxSegments ... we need to stop the recursion at some point!
    int segmentsSinceStart; //segmentsSinceStart...in order to stop the recursion - keep track of how many times we've split
    float angle; //curvature...to add some bendiness to our branches
    float curvature; //d_curvature...to change the bendiness, making it look more organic
    bool hasLeaves; //true/false has leaves? (increase the likelihood of leaves
    ofColor color; //color of branches...
    
    //Leaf myLeaf;
    
    
    
};

#endif /* defined(__Lauren_Branch__Branch__) */
