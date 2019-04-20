#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	// Set background color to black
	ofSetBackgroundColor(0);
	
	
	main_title_font.load("Righteous-Regular.ttf",50, true,true,true);
	
	
	float main_title_box_y = main_title_font.getLineHeight();
	ofRectangle main_title_text_box = main_title_font.getStringBoundingBox("Rapper Adlib Soundboard", 0, main_title_box_y);
	int main_title_x = (ofGetWindowWidth() / 2) - (main_title_text_box.getWidth() / 2);
	int main_title_y = main_title_font.getLineHeight();
	main_title_font.drawStringAsShapes("Rapper Adlib Soundboard", main_title_x, main_title_y);
	
	
	main_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);
	main_subheader_font.setLineHeight(main_subheader_font.getLineHeight() * 0.9);

	float main_subheader_box_y = main_subheader_font.getLineHeight() + 100;
	ofRectangle main_subheader_text_box = main_subheader_font.getStringBoundingBox("Press the Number Key of the Adlib Group you want to Use", 0, main_subheader_box_y);
	int main_subheader_x = (ofGetWindowWidth() / 2) - (main_subheader_text_box.getWidth() / 2);
	int main_subheader_y = main_subheader_font.getLineHeight() + 100;
	main_subheader_font.drawStringAsShapes("Press the Number Key of the Adlib Group you want to Use", main_subheader_x, main_subheader_y);
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	if (key == '1') {
		travis_scott.GetAlright().play();
	}
	else if (key == '2') {
		travis_scott.GetStraightUp().play();
	}
	else if (key == '3') {
		travis_scott.GetItsLit().play();
	}
	else if (key == '4') {
		travis_scott.GetLaFlame().play();
	}
	else if (key == '5') {
		travis_scott.GetYeah().play();
	}
	else if (key == '0') {
		ofSoundStopAll();
	}

	
	/*if (key == '1') {
		migos.GetOffset().play();
	}
	else if (key == '2') {
		migos.GetDab().play();
	}
	else if (key == '3') {
		migos.GetHey().play();
	}
	else if (key == '4') {
		migos.GetQuavo().play();
	}
	else if (key == '5') {
		migos.GetMama().play();
	}
	else if (key == '6') {
		migos.GetSkrtSkrt().play();
	}
	else if (key == '7') {
		migos.GetTakeoff().play();
	}
	else if (key == '8') {
		migos.GetMoney().play();
	}
	else if (key == '9') {
		migos.GetMigo().play();
	}
	else if (key == '0') {
		ofSoundStopAll();
	}*/
	
	
	/*if (key == '1') {
		lil_rappers.GetLilJonOk().play();
	}
	else if (key == '2') {
		lil_rappers.GetLilJonWhat().play();
	}
	else if (key == '3') {
		lil_rappers.GetLilJonYeah().play();
	}
	else if (key == '4') {
		lil_rappers.GetLilUziVertHuh().play();
	}
	else if (key == '5') {
		lil_rappers.GetLilUziVertRee().play();
	}
	else if (key == '6') {
		lil_rappers.GetLilUziVertYeah().play();
	}
	else if (key == '7') {
		lil_rappers.GetLilWayneLaugh().play();
	}
	else if (key == '8') {
		lil_rappers.GetLilWayneTunechi().play();
	}
	else if (key == '9') {
		lil_rappers.GetLilWayneYoungMulaBaby().play();
	}
	else if (key == '0') {
		ofSoundStopAll();
	}*/
	
	/*if (key == '1') {
		producers.GetLondonOnDaTrack().play();
	}
	else if (key == '2') {
		producers.GetMetroBoomin().play();
	}
	else if (key == '3') {
		producers.GetMikeWillMadeit().play();
	}
	else if (key == '4') {
		producers.GetMurdaBeatz().play();
	}
	else if (key == '5') {
		producers.GetPierreBourne().play();
	}
	else if (key == '0') {
		ofSoundStopAll();
	}*/

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
