#pragma once
#include "ofMain.h"

class TravisScott {
	
	// Adlibs for this grouping
	ofSoundPlayer travis_scott_alright;
	ofSoundPlayer travis_scott_straight_up;
	ofSoundPlayer travis_scott_its_lit;
	ofSoundPlayer travis_scott_yeah;
	ofSoundPlayer travis_scott_la_flame;

	// Main title and subheader fonts
	ofTrueTypeFont travis_scott_title_font;
	ofTrueTypeFont travis_scott_subheader_font;

	// Travis Scott image
	ofImage travis_scott_image;

	// Adlib title fonts
	ofTrueTypeFont travis_scott_alright_title_font;
	ofTrueTypeFont travis_scott_straight_up_title_font;
	ofTrueTypeFont travis_scott_its_lit_title_font;
	ofTrueTypeFont travis_scott_la_flame_title_font;
	ofTrueTypeFont travis_scott_yeah_title_font;

	// Adlib key fonts
	ofTrueTypeFont travis_scott_1_title_font;
	ofTrueTypeFont travis_scott_2_title_font;
	ofTrueTypeFont travis_scott_3_title_font;
	ofTrueTypeFont travis_scott_4_title_font;
	ofTrueTypeFont travis_scott_5_title_font;

	// Action title and key fonts
	ofTrueTypeFont travis_scott_clear_title_font;
	ofTrueTypeFont travis_scott_0_title_font;
	ofTrueTypeFont travis_scott_back_title_font;
	ofTrueTypeFont travis_scott_b_title_font;

public:

	TravisScott();
	~TravisScott();

	ofSoundPlayer GetAlright();
	ofSoundPlayer GetStraightUp();
	ofSoundPlayer GetItsLit();
	ofSoundPlayer GetYeah();
	ofSoundPlayer GetLaFlame();

	ofImage GetTravisScottImage();

	void DrawTravisScottPage();
};