#include "TravisScott.h"

/*
	Loading fonts, mp3s, and images to the respective fields when creating a Travis Scott Object
*/
TravisScott::TravisScott() {
	
	// Loading mp3s for the adlib sound fields
	travis_scott_alright.load("Adlib Files\\Travis Scott\\Travis_Scott_Alright.mp3");
	travis_scott_straight_up.load("Adlib Files\\Travis Scott\\Travis_Scott_Straight_Up.mp3");
	travis_scott_its_lit.load("Adlib Files\\Travis Scott\\Travis_Scott_Its_Lit.mp3");
	travis_scott_yeah.load("Adlib Files\\Travis Scott\\Travis_Scott_Yeah.mp3");
	travis_scott_la_flame.load("Adlib Files\\Travis Scott\\Travis_Scott_La_Flame.mp3");

	// Loading the main title and subheader fonts
	travis_scott_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	travis_scott_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Loading the image
	travis_scott_image.load("Images\\Travis_Scott_Image.jpg");

	// Loading the adlib titles fonts
	travis_scott_alright_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_straight_up_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_its_lit_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_la_flame_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_yeah_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Loading the adlib key fonts
	travis_scott_1_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_2_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_3_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_4_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_5_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Action title and key fonts
	travis_scott_clear_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_0_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_back_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_b_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

}

/*
	Destructor for this object
*/
TravisScott::~TravisScott() {

}

/*
	Getter for the "Alright" adlib sound

	@return - travis_scott_alright, an ofSoundplayer field that is the "Alright" adlib
*/
ofSoundPlayer TravisScott::GetAlright() {
	return travis_scott_alright;
}

/*
	Getter for the "Straight Up" adlib sound

	@return - travis_scott_straight_up, an ofSoundplayer field that is the "Straight Up" adlib
*/
ofSoundPlayer TravisScott::GetStraightUp() {
	return travis_scott_straight_up;
}

/*
	Getter for the "It's Lit" adlib sound

	@return - travis_scott_its_lit, an ofSoundplayer field that is the "It's Lit" adlib
*/
ofSoundPlayer TravisScott::GetItsLit() {
	return travis_scott_its_lit;
}

/*
	Getter for the "Yeah" adlib sound

	@return - travis_scott_yeah, an ofSoundplayer field that is the "Yeah" adlib
*/
ofSoundPlayer TravisScott::GetYeah() {
	return travis_scott_yeah;
}

/*
	Getter for the "La Flame" adlib sound

	@return - travis_scott_la_flame, an ofSoundplayer field that is the "La Flame" adlib
*/
ofSoundPlayer TravisScott::GetLaFlame() {
	return travis_scott_la_flame;
}

/*
	Getter for the the Travis Scott Image

	@return - travis_scott_image, an ofImage field that is an image of Travis Scott
*/
ofImage TravisScott::GetTravisScottImage() {
	return travis_scott_image;
}

/*
	Draws the Travis Scott page for the application when called
*/
void TravisScott::DrawTravisScottPage() {
	
	// Drawing title and subheader fonts

	// Title
	float travis_scott_title_box_y = travis_scott_title_font.getLineHeight();
	ofRectangle travis_scott_title_text_box = travis_scott_title_font.getStringBoundingBox("Travis Scott", 0, travis_scott_title_box_y);
	int travis_scott_title_x = (ofGetWindowWidth() / 2) - (travis_scott_title_text_box.getWidth() / 2);
	int travis_scott_title_y = travis_scott_title_font.getLineHeight();
	travis_scott_title_font.drawStringAsShapes("Travis Scott", travis_scott_title_x, travis_scott_title_y);

	// Subheader
	float travis_scott_subheader_box_y = travis_scott_title_font.getLineHeight() + 50;
	ofRectangle travis_scott_subheader_text_box = travis_scott_subheader_font.getStringBoundingBox("Press the Key of the Adlib or Action you want to Use", 0, travis_scott_subheader_box_y);
	int travis_scott_subheader_x = (ofGetWindowWidth() / 2) - (travis_scott_subheader_text_box.getWidth() / 2);
	int travis_scott_subheader_y = travis_scott_title_font.getLineHeight() + 50;
	travis_scott_subheader_font.drawStringAsShapes("Press the Key of the Adlib or Action you want to Use", travis_scott_subheader_x, travis_scott_subheader_y);


	// Drawing image
	
	// Travis Scott Image
	travis_scott_image.draw((ofGetWindowWidth() / 2) - (travis_scott_image.getWidth() / 2), travis_scott_title_font.getLineHeight() + 80);
	

	// Drawing adlib title Fonts

	// Alright
	float travis_scott_alright_title_box_y = travis_scott_title_font.getLineHeight() + 350;
	ofRectangle travis_scott_alright_title_text_box = travis_scott_alright_title_font.getStringBoundingBox("Alright", 0, travis_scott_alright_title_box_y);
	int travis_scott_alright_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_alright_title_text_box.getWidth() / 2);
	int travis_scott_alright_title_y = travis_scott_title_font.getLineHeight() + 350;
	travis_scott_alright_title_font.drawStringAsShapes("Alright", travis_scott_alright_title_x, travis_scott_alright_title_y);
	
	// Straight Up
	float travis_scott_straight_up_title_box_y = travis_scott_title_font.getLineHeight() + 350;
	ofRectangle travis_scott_straight_up_title_text_box = travis_scott_straight_up_title_font.getStringBoundingBox("Straight Up", 0, travis_scott_straight_up_title_box_y);
	int travis_scott_straight_up_title_x = (ofGetWindowWidth() * 0.50) - (travis_scott_straight_up_title_text_box.getWidth() / 2);
	int travis_scott_straight_up_title_y = travis_scott_title_font.getLineHeight() + 350;
	travis_scott_straight_up_title_font.drawStringAsShapes("Straight Up", travis_scott_straight_up_title_x, travis_scott_straight_up_title_y);

	// It's Lit
	float travis_scott_its_lit_title_box_y = travis_scott_title_font.getLineHeight() + 350;
	ofRectangle travis_scott_its_lit_title_text_box = travis_scott_its_lit_title_font.getStringBoundingBox("It's Lit", 0, travis_scott_its_lit_title_box_y);
	int travis_scott_its_lit_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_its_lit_title_text_box.getWidth() / 2);
	int travis_scott_its_lit_title_y = travis_scott_title_font.getLineHeight() + 350;
	travis_scott_its_lit_title_font.drawStringAsShapes("It's Lit", travis_scott_its_lit_title_x, travis_scott_its_lit_title_y);
	
	// La Flame
	float travis_scott_la_flame_title_box_y = travis_scott_title_font.getLineHeight() + 450;
	ofRectangle travis_scott_la_flame_title_text_box = travis_scott_la_flame_title_font.getStringBoundingBox("La Flame", 0, travis_scott_la_flame_title_box_y);
	int travis_scott_la_flame_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_la_flame_title_text_box.getWidth() / 2);
	int travis_scott_la_flame_title_y = travis_scott_title_font.getLineHeight() + 450;
	travis_scott_la_flame_title_font.drawStringAsShapes("La Flame", travis_scott_la_flame_title_x, travis_scott_la_flame_title_y);

	// Yeah
	float travis_scott_yeah_title_box_y = travis_scott_title_font.getLineHeight() + 450;
	ofRectangle travis_scott_yeah_title_text_box = travis_scott_yeah_title_font.getStringBoundingBox("Yeah", 0, travis_scott_yeah_title_box_y);
	int travis_scott_yeah_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_yeah_title_text_box.getWidth() / 2);
	int travis_scott_yeah_title_y = travis_scott_title_font.getLineHeight() + 450;
	travis_scott_yeah_title_font.drawStringAsShapes("Yeah", travis_scott_yeah_title_x, travis_scott_yeah_title_y);


	// Drawing key fonts

	// 1
	float travis_scott_1_title_box_y = travis_scott_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_1_title_text_box = travis_scott_1_title_font.getStringBoundingBox("1", 0, travis_scott_1_title_box_y);
	int travis_scott_1_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_1_title_text_box.getWidth() / 2);
	int travis_scott_1_title_y = travis_scott_title_font.getLineHeight() + 400;
	travis_scott_1_title_font.drawStringAsShapes("1", travis_scott_1_title_x, travis_scott_1_title_y);

	// 2
	float travis_scott_2_title_box_y = travis_scott_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_2_title_text_box = travis_scott_2_title_font.getStringBoundingBox("2", 0, travis_scott_2_title_box_y);
	int travis_scott_2_title_x = (ofGetWindowWidth() * 0.50) - (travis_scott_2_title_text_box.getWidth() / 2);
	int travis_scott_2_title_y = travis_scott_title_font.getLineHeight() + 400;
	travis_scott_2_title_font.drawStringAsShapes("2", travis_scott_2_title_x, travis_scott_2_title_y);

	// 3
	float travis_scott_3_title_box_y = travis_scott_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_3_title_text_box = travis_scott_3_title_font.getStringBoundingBox("3", 0, travis_scott_3_title_box_y);
	int travis_scott_3_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_3_title_text_box.getWidth() / 2);
	int travis_scott_3_title_y = travis_scott_title_font.getLineHeight() + 400;
	travis_scott_3_title_font.drawStringAsShapes("3", travis_scott_3_title_x, travis_scott_3_title_y);

	// 4
	float travis_scott_4_title_box_y = travis_scott_title_font.getLineHeight() + 500;
	ofRectangle travis_scott_4_title_text_box = travis_scott_4_title_font.getStringBoundingBox("4", 0, travis_scott_4_title_box_y);
	int travis_scott_4_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_4_title_text_box.getWidth() / 2);
	int travis_scott_4_title_y = travis_scott_title_font.getLineHeight() + 500;
	travis_scott_4_title_font.drawStringAsShapes("4", travis_scott_4_title_x, travis_scott_4_title_y);

	// 5
	float travis_scott_5_title_box_y = travis_scott_title_font.getLineHeight() + 500;
	ofRectangle travis_scott_5_title_text_box = travis_scott_5_title_font.getStringBoundingBox("5", 0, travis_scott_5_title_box_y);
	int travis_scott_5_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_5_title_text_box.getWidth() / 2);
	int travis_scott_5_title_y = travis_scott_title_font.getLineHeight() + 500;
	travis_scott_5_title_font.drawStringAsShapes("5", travis_scott_5_title_x, travis_scott_5_title_y);


	// Drawing actin title and key fonts

	// Clear
	float travis_scott_clear_title_box_y = travis_scott_title_font.getLineHeight() + 450;
	ofRectangle travis_scott_clear_title_text_box = travis_scott_clear_title_font.getStringBoundingBox("Clear", 0, travis_scott_clear_title_box_y);
	int travis_scott_clear_title_x = (ofGetWindowWidth() * 0.9) - (travis_scott_clear_title_text_box.getWidth() / 2);
	int travis_scott_clear_title_y = travis_scott_title_font.getLineHeight() + 450;
	travis_scott_clear_title_font.drawStringAsShapes("Clear", travis_scott_clear_title_x, travis_scott_clear_title_y);

	// 0
	float travis_scott_0_title_box_y = travis_scott_title_font.getLineHeight() + 500;
	ofRectangle travis_scott_0_title_text_box = travis_scott_0_title_font.getStringBoundingBox("0", 0, travis_scott_0_title_box_y);
	int travis_scott_0_title_x = (ofGetWindowWidth() * 0.9) - (travis_scott_0_title_text_box.getWidth() / 2);
	int travis_scott_0_title_y = travis_scott_title_font.getLineHeight() + 500;
	travis_scott_0_title_font.drawStringAsShapes("0", travis_scott_0_title_x, travis_scott_0_title_y);

	// Back
	float travis_scott_back_title_box_y = travis_scott_title_font.getLineHeight() + 550;
	ofRectangle travis_scott_back_title_text_box = travis_scott_back_title_font.getStringBoundingBox("Back", 0, travis_scott_back_title_box_y);
	int travis_scott_back_title_x = (ofGetWindowWidth() * 0.9) - (travis_scott_back_title_text_box.getWidth() / 2);
	int travis_scott_back_title_y = travis_scott_title_font.getLineHeight() + 550;
	travis_scott_back_title_font.drawStringAsShapes("Back", travis_scott_back_title_x, travis_scott_back_title_y);

	// B
	float travis_scott_b_title_box_y = travis_scott_title_font.getLineHeight() + 600;
	ofRectangle travis_scott_b_title_text_box = travis_scott_b_title_font.getStringBoundingBox("B", 0, travis_scott_b_title_box_y);
	int travis_scott_b_title_x = (ofGetWindowWidth() * 0.9) - (travis_scott_b_title_text_box.getWidth() / 2);
	int travis_scott_b_title_y = travis_scott_title_font.getLineHeight() + 600;
	travis_scott_b_title_font.drawStringAsShapes("B", travis_scott_b_title_x, travis_scott_b_title_y);

}