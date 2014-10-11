#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofBackground(100);
	wiringPiSetup();


	sensor0 = false;
	sensor1 = false;
	sensor2 = false;
	Switchpin1 = 0;
	Switchpin2 = 1;
	Switchpin3 = 2;

	pinMode(Switchpin1, INPUT);
	pinMode(Switchpin2, INPUT);
	pinMode(Switchpin3, INPUT);

	//digitalWrite(LEDpin, HIGH);
	//digitalWrite(LEDpin, LOW);
	
}

//--------------------------------------------------------------
void ofApp::update()
{
	
	if(digitalRead(0)!=0){
    	sensor0 = true;
    } else {
    	sensor0 = false;
    }

    if(digitalRead(1)!=0){
    	sensor1 = true;
    } else { 
    	sensor1 = false;
    }

    if(digitalRead(2)!=0){
    	sensor2 = true;
    } else {
    	sensor2 = false;
    }
    
    
    
	
}

//--------------------------------------------------------------
void ofApp::draw()
{

	ofBackground(ofColor(120,120,120));
    
    ofSetColor(100);
        if (sensor0 == true)
        {
        	ofDrawBitmapString("I am sad..make me happy...", 50, 50);
        	 ofEllipse(250, 250, 300 ,300);
        	  ofSetColor(0,0,255);
  			  ofFill();
			  ofRect(200, 210 , 30, 50);
			  ofSetColor(0,0,255);
			  ofFill();
			  ofRect(300, 210 , 30, 50);
			  ofSetColor(0,0,255);
			  ofFill();
			  //ofBezier(150, 295, 200, 370, 300, 370, 350, 295);
			  ofLine(150, 295, 350, 295);
			  ofLine(160, 180, 210, 135);
			  ofLine(160, 180, 290, 180);
        	
            
        }
        	
        

        if ((sensor0 == false) && (sensor1 == true))
        {
        	ofDrawBitmapString("Hey! You are awesome!", 50,50);
        	
        	 ofEllipse(250, 250, 300 ,300);
        	 ofSetColor(0,0,255);
  			  ofFill();
			  ofEllipse(200, 210 , 30, 70);
			  ofSetColor(0,0,255);
			  ofFill();
			  ofEllipse(300, 210 , 30, 70);
			  ofSetColor(0,0,255);
			  ofFill();
			  ofBezier(150, 295, 200, 370, 300, 370, 350, 295);
			  ofLine(150, 295, 350, 295);
			//  ofLine(160, 180, 210, 135);
			 // ofLine(160, 180, 290,180 ); 

        }


         if ((sensor0 == false) && (sensor1 == false) && (sensor2 == true)){
        	  ofDrawBitmapString("Hahahahaha", 50,50);
        	
        	 ofEllipse(250, 250, 300 ,300);
        	 ofSetColor(0,0,255);
  			  ofFill();
			  ofEllipse(200, 210 , 30, 70);
			  ofSetColor(0,0,255);
			  ofFill();
			  ofEllipse(300, 210 , 30, 70);
			  ofSetColor(0,0,255);
			  ofFill();
			 // ofBezier(150, 295, 200, 370, 300, 370, 350, 295);
			  ofEllipse(245,295,150,50);
			  //ofLine(150, 295, 350, 295); 
			//  ofLine(160, 180, 210, 135);
			 // ofLine(160, 180, 290,180 );
			}
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
