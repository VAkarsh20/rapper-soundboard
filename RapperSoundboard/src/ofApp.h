#pragma once

#include "ofMain.h"
#include "TravisScott.h"
#include "Migos.h"
#include "LilRappers.h"
#include "Producers.h"
#include "MainPage.h"

class ofApp : public ofBaseApp{
	
	// Page states
	enum Page {
		HOME,
		TRAVIS_SCOTT,
		MIGOS,
		LIL_RAPPERS,
		PRODUCERS
	};

	// Current page
	Page current_page = HOME;

	// Adlib groupings
	TravisScott travis_scott;
	Migos migos;
	LilRappers lil_rappers;
	Producers producers;

	// Main page
	MainPage main_page;


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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
