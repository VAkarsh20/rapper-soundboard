#include "TravisScott.h"

TravisScott::TravisScott() {
	TS_alright.load("Adlib Files\\Travis Scott\\Travis_Scott_Alright.mp3");
	TS_straight_up.load("Adlib Files\\Travis Scott\\Travis_Scott_Straight_Up.mp3");
	TS_its_lit.load("Adlib Files\\Travis Scott\\Travis_Scott_Its_Lit.mp3");
	TS_yeah.load("Adlib Files\\Travis Scott\\Travis_Scott_Yeah.mp3");
	TS_la_flame.load("Adlib Files\\Travis Scott\\Travis_Scott_La_Flame.mp3");

	travis_scott_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	travis_scott_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);

	travis_scott_image.load("Images\\Travis_Scott_Image.jpg");
}

TravisScott::~TravisScott() {

}

ofSoundPlayer TravisScott::GetAlright() {
	return TS_alright;
}

ofSoundPlayer TravisScott::GetStraightUp() {
	return TS_straight_up;
}

ofSoundPlayer TravisScott::GetItsLit() {
	return TS_its_lit;
}

ofSoundPlayer TravisScott::GetYeah() {
	return TS_yeah;
}

ofSoundPlayer TravisScott::GetLaFlame() {
	return TS_la_flame;
}

ofImage TravisScott::GetTravisScottImage() {
	return travis_scott_image;
}

void TravisScott::DrawTravisScottPage() {
	
	// Main Title
	float travis_scott_title_box_y = travis_scott_title_font.getLineHeight();
	ofRectangle travis_scott_title_text_box = travis_scott_title_font.getStringBoundingBox("Travis Scott", 0, travis_scott_title_box_y);
	int travis_scott_title_x = (ofGetWindowWidth() / 2) - (travis_scott_title_text_box.getWidth() / 2);
	int travis_scott_title_y = travis_scott_title_font.getLineHeight();
	travis_scott_title_font.drawStringAsShapes("Travis Scott", travis_scott_title_x, travis_scott_title_y);

	// Main Subheader
	float travis_scott_subheader_box_y = travis_scott_title_font.getLineHeight() + 50;
	ofRectangle travis_scott_subheader_text_box = travis_scott_subheader_font.getStringBoundingBox("Press the Number Key of the Adlib you want to Use", 0, travis_scott_subheader_box_y);
	int travis_scott_subheader_x = (ofGetWindowWidth() / 2) - (travis_scott_subheader_text_box.getWidth() / 2);
	int travis_scott_subheader_y = travis_scott_title_font.getLineHeight() + 50;
	travis_scott_subheader_font.drawStringAsShapes("Press the Number Key of the Adlib you want to Use", travis_scott_subheader_x, travis_scott_subheader_y);

	travis_scott_image.draw((ofGetWindowWidth() / 2) - (travis_scott_image.getWidth() / 2), travis_scott_title_font.getLineHeight() + 80);
}