#pragma once

#include "ofMain.h"
#include "ofxShadow.h"

class ofApp : public ofBaseApp{

public:

    void setup();
    void update();
    void draw();

    ofEasyCam cam;
	ofVec3f light_pos;
	ofxShadow simple_shadow;

};
