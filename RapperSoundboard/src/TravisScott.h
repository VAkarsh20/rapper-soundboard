#pragma once
#include "ofMain.h"

class TravisScott {
	ofSoundPlayer TS_alright;
	ofSoundPlayer TS_straight_up;
	ofSoundPlayer TS_its_lit;
	ofSoundPlayer TS_yeah;
	ofSoundPlayer TS_la_flame;

	ofTrueTypeFont travis_scott_title_font;
	ofTrueTypeFont travis_scott_subheader_font;

	ofImage travis_scott_image;

	ofTrueTypeFont travis_scott_alright_title_font;
	ofTrueTypeFont travis_scott_straight_up_title_font;
	ofTrueTypeFont travis_scott_its_lit_title_font;
	ofTrueTypeFont travis_scott_la_flame_title_font;
	ofTrueTypeFont travis_scott_yeah_title_font;

	ofTrueTypeFont travis_scott_1_title_font;
	ofTrueTypeFont travis_scott_2_title_font;
	ofTrueTypeFont travis_scott_3_title_font;
	ofTrueTypeFont travis_scott_4_title_font;
	ofTrueTypeFont travis_scott_5_title_font;


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