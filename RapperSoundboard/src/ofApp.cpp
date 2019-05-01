#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	// Set background color to black
	ofSetBackgroundColor(0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	if (current_page == HOME) {
		main_page.DrawMainPage();
	}
	else if (current_page == TRAVIS_SCOTT) {
		travis_scott.DrawTravisScottPage();
	}
	else if (current_page == MIGOS) {
		migos.DrawMigosPage();
	}
	else if (current_page == LIL_RAPPERS) {
		lil_rappers.DrawLilRappersPage();
	}
	else if (current_page == PRODUCERS) {
		producers.DrawProducersPage();
	}
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	if (current_page == HOME) {
		if (key == '1') {
			current_page = TRAVIS_SCOTT;
		}
		else if (key == '2') {
			current_page = MIGOS;
		}
		else if (key == '3') {
			current_page = LIL_RAPPERS;
		}
		else if (key == '4') {
			current_page = PRODUCERS;
		}
	}
	else if (current_page == TRAVIS_SCOTT) {
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
		else if (key == 'b' || key == 'B') {
			current_page = HOME;
		}
	}
	else if (current_page == MIGOS) {
		if (key == '1') {
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
		}
		else if (key == 'b' || key == 'B') {
			current_page = HOME;
		}
	}
	else if (current_page == LIL_RAPPERS) {
		if (key == '1') {
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
		}
		else if (key == 'b' || key == 'B') {
			current_page = HOME;
		}
	}
	else if (current_page == PRODUCERS) {
		if (key == '1') {
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
		}
		else if (key == 'b' || key == 'B') {
			current_page = HOME;
		}
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
