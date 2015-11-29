//
//  Branch.h
//  Lauren_Tree
//
//  Created by Shaun & Lauren on 9/24/15.
//
//

#ifndef __Branches__Branch__
#define __Branches__Branch__

#include "ofMain.h"
#include "Leaf.h"

class Branch : public ofBaseApp{
    
public:
    void setup(float george, float _yPos, float _width,
               float _length,
               float _splitPercentage,
               float _maxSplitAngle,
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
    float maxSplitAngle;
    int maxSubdivsions; //maxSubdivisions
    int maxSegments; //maxSegments ... we need to stop the recursion at some point!
    int segmentsSinceStart; //segmentsSinceStart ... in order to stop the recursion, we must keep track of how many times we've slpit
    float angle; //curvature ... to add some bendiness to our branches
    float curvature; //d_curvature ... to change the bendiness, making it look more organic
    bool hasLeaves; //true/false hasLeaves? (increase likelihood of leaves with each new segment bc more leaves at end of branches)
    ofColor color; // color of branches...
    
    //    Leaf myLeaf;
    int numLeaves;
    vector<Leaf> leaves;
    bool split;
    
};

#endif /* defined(__Branches__Branch__) */
