#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetVerticalSync(true);
    
    //ofSetFrameRate(24);
    
    gui.setup(); // sets up the GUI
    bHide = true;
    
    videoOne.loadMovie("movies/VH water_oF 1.mp4");
    videoOne.play();
    
    videoTwo.loadMovie("movies/BOG_big white dots_63.mp4");
    videoTwo.play();
    
    
    //CONTROLS FOR VIDEO ONE
    
    gui.add(V1_r.setup("V1_red", 100, 0, 255));
    gui.add(V1_g.setup("V1_green", 100, 0, 255));
    gui.add(V1_b.setup("V1_blue", 100, 0, 255));
    gui.add(V1_a.setup("V1_fade", 255, 0, 255));
    
    gui.add(V1_posx.setup("V1_posx", 425, 0, ofGetWidth()));
    gui.add(V1_posy.setup("V1_posy", 200, 0, ofGetHeight()));
    
    
    gui.add(V1_width.setup("V1_width", 630, 0, 1280));
    gui.add(V1_height.setup("V1_height", 360, 0, 720));
    
    gui.add(V1_normpos.setup("V1 center lock", 0, 0, 20));
 //   gui.add(V1_switch.setup("V1 switch"));
    
    
    //CONTROLS FOR VIDEO TWO
    gui.add(V2_r.setup("V2_red", 100, 0, 255));
    gui.add(V2_g.setup("V2_green", 100, 0, 255));
    gui.add(V2_b.setup("V2_blue", 100, 0, 255));
    gui.add(V2_a.setup("V2_fade", 255, 0, 255));
    
    gui.add(V2_posx.setup("V2_posx", 425, 0, ofGetWidth()));
    gui.add(V2_posy.setup("V2_posy", 200, 0, ofGetHeight()));
    
    gui.add(V2_width.setup("V2_width", 630, 0, 1280));
    gui.add(V2_height.setup("V2_height", 360, 0, 720));
    
    gui.add(V2_normpos.setup("V2 center lock", 0, 0, 20));
//    gui.add(V2_normsize.setup("V2 size"));
    
    
    gui.add(lines_on.setup("Lines", 0, 100, 20));
    gui.add(dots_on.setup("Static", 0, 100, 20));
    
    
    //LINES FOR WWA
    numLines = ofRandom (100, 500);
    for (int i = 0; i < numLines; i++){
        Line temp;
        lines.push_back(temp);
        lines[i].setup();
    }
    
    numCircles = ofRandom (500, 5000);
//     numCircles = 10;  //this is for debugging
    for (int i = 0; i < numCircles; i++){
        Circle temp;
        circles.push_back(temp);
        circles[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    videoOne.update();
    videoTwo.update();
    
    //WWA LINES
    for (int i = 0; i < numLines; i++){
        lines[i].update();
    }
    
    //CIRCLES
    for (int i = 0; i < numCircles; i++){
        circles[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    if(lines_on){
    for (int i = 0; i < numLines; i++){
        lines[i].draw();
    }
    }
    else{
        for (int i = 0; i > numLines; i--){
            lines[i].draw();
        }
    }
    
    
    if(dots_on){
    for (int i = 0; i < numCircles; i++){
        circles[i].draw();
    }
    }
       else{
           for (int i = 0; i > numCircles; i--){
            circles[i].draw();
           }
       
       }
    
    
    //VIDEO ONE
    
    ofSetColor(V1_r, V1_g, V1_b, V1_a);
//    videoOne.draw(V1_posx, V1_posy, V1_width, V1_height);
    
    
    if(V1_normpos){
        videoOne.draw(425, 200, 630, 360);
        
    }else{
        videoOne.draw(V1_posx, V1_posy, V1_width, V1_height);
    }
    
    
    
    
    //VIDEO TWO
    
    ofSetColor(V2_r, V2_g, V2_b, V2_a);
//    videoTwo.draw(V2_posx, V2_posy, V2_width, V2_height);
    
    if(V2_normpos){
        videoTwo.draw(425, 200, 630, 360);
        
    }else{
        videoTwo.draw(V2_posx, V2_posy, V2_width, V2_height);
    }
    
    
    if( bHide ){
        gui.draw();
    }
    
    

    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int a){
//    circles.clear();
//    setup();

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){


}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    


}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
