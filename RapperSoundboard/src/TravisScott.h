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