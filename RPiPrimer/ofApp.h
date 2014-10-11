#pragma once

#include "ofMain.h"
#include "ofxWiringPi.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		bool sensor0;
		bool sensor1;
		bool sensor2;		//stores the state of the pin
		int Switchpin1;
		int Switchpin2;
		int Switchpin3;			//the pin number for the LED
		//int seconds;		//value to store system seconds
};
