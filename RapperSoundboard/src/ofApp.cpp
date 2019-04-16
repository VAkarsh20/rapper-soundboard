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
	if (key == 'p') {
		mySound.load("Travis_Scott_Its_Lit_Old.mp3");
		mySound.play();
	}
	else if (key == 'q') {
		mySound.load("Travis_Scott_Alright.mp3");
		mySound.play();
	}
	else if (key == 'w') {
		mySound.load("Travis_Scott_Its_Lit.mp3");
		mySound.play();
	}
	else if (key == 'e') {
		mySound.load("Travis_Scott_La_Flame.mp3");
		mySound.play();
	}
	else if (key == 'r') {
		mySound.load("Travis_Scott_Straight_Up.mp3");
		mySound.play();
	}
	else if (key == 't') {
		mySound.load("Travis_Scott_Yeah.mp3");
		mySound.play();
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
