#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	/*
	if (key == 'q') {
		travis_scott.GetAlright().play();
	}
	else if (key == 'w') {
		travis_scott.GetStraightUp().play();
	}
	else if (key == 'e') {
		travis_scott.GetItsLit().play();
	}
	else if (key == 'r') {
		travis_scott.GetLaFlame().play();
	}
	else if (key == 't') {
		travis_scott.GetYeah().play();
	}
	else if (key == 'c') {
		ofSoundStopAll();
	}*/

	if (key == 'q') {
		migos.GetOffset().play();
	}
	else if (key == 'w') {
		migos.GetDab().play();
	}
	else if (key == 'e') {
		migos.GetHey().play();
	}
	else if (key == 'r') {
		travis_scott.GetLaFlame().play();
	}
	else if (key == 't') {
		travis_scott.GetYeah().play();
	}
	else if (key == 'c') {
		ofSoundStopAll();
	}
	
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
