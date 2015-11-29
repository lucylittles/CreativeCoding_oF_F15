#pragma once

#include "ofMain.h"
#include "Particle.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //One Particle
    //defining variable of the data type particle
    
    Particle MyParticle1;
    Particle MyParticle2;
    Particle MyParticle3;
    
    //Many balls
    //vector< Particle > MyMultipleParticles;
    
    vector<Particle> particles;
    
    int numParticles;
		
};
