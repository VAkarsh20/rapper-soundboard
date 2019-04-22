#pragma once

#include "ofMain.h"
#include "TravisScott.h"
#include "Migos.h"
#include "LilRappers.h"
#include "Producers.h"

class ofApp : public ofBaseApp{
	
	enum Page {
		HOME,
		TRAVIS_SCOTT,
		MIGOS,
		LIL_RAPPERS,
		PRODUCERS
	};

	Page current_page = HOME;

	TravisScott travis_scott;
	Migos migos;
	LilRappers lil_rappers;
	Producers producers;

	ofTrueTypeFont main_title_font;
	ofTrueTypeFont main_subheader_font;
	ofTrueTypeFont main_travis_scott_font;
	ofTrueTypeFont main_migos_font;
	ofTrueTypeFont main_lil_rappers_font;
	ofTrueTypeFont main_producers_font;

	ofImage travis_scott_image;
	ofImage migos_image;
	ofImage lil_rappers_image;
	ofImage producers_image;

	ofTrueTypeFont main_1_font;
	ofTrueTypeFont main_2_font;
	ofTrueTypeFont main_3_font;
	ofTrueTypeFont main_4_font;

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
