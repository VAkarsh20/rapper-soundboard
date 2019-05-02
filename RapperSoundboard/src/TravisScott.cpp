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

	travis_scott_alright_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_straight_up_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_its_lit_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_la_flame_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_yeah_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	travis_scott_1_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_2_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_3_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_4_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_5_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	travis_scott_clear_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_0_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_back_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	travis_scott_b_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
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
	ofRectangle travis_scott_subheader_text_box = travis_scott_subheader_font.getStringBoundingBox("Press the Key of the Adlib or Action you want to Use", 0, travis_scott_subheader_box_y);
	int travis_scott_subheader_x = (ofGetWindowWidth() / 2) - (travis_scott_subheader_text_box.getWidth() / 2);
	int travis_scott_subheader_y = travis_scott_title_font.getLineHeight() + 50;
	travis_scott_subheader_font.drawStringAsShapes("Press the Key of the Adlib or Action you want to Use", travis_scott_subheader_x, travis_scott_subheader_y);

	travis_scott_image.draw((ofGetWindowWidth() / 2) - (travis_scott_image.getWidth() / 2), travis_scott_title_font.getLineHeight() + 80);
	
	float travis_scott_alright_title_box_y = travis_scott_title_font.getLineHeight() + 350;
	ofRectangle travis_scott_alright_title_text_box = travis_scott_alright_title_font.getStringBoundingBox("Alright", 0, travis_scott_alright_title_box_y);
	int travis_scott_alright_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_alright_title_text_box.getWidth() / 2);
	int travis_scott_alright_title_y = travis_scott_title_font.getLineHeight() + 350;
	travis_scott_alright_title_font.drawStringAsShapes("Alright", travis_scott_alright_title_x, travis_scott_alright_title_y);
	
	float travis_scott_straight_up_title_box_y = travis_scott_title_font.getLineHeight() + 350;
	ofRectangle travis_scott_straight_up_title_text_box = travis_scott_straight_up_title_font.getStringBoundingBox("Straight Up", 0, travis_scott_straight_up_title_box_y);
	int travis_scott_straight_up_title_x = (ofGetWindowWidth() * 0.50) - (travis_scott_straight_up_title_text_box.getWidth() / 2);
	int travis_scott_straight_up_title_y = travis_scott_title_font.getLineHeight() + 350;
	travis_scott_straight_up_title_font.drawStringAsShapes("Straight Up", travis_scott_straight_up_title_x, travis_scott_straight_up_title_y);

	float travis_scott_its_lit_title_box_y = travis_scott_title_font.getLineHeight() + 350;
	ofRectangle travis_scott_its_lit_title_text_box = travis_scott_its_lit_title_font.getStringBoundingBox("It's Lit", 0, travis_scott_its_lit_title_box_y);
	int travis_scott_its_lit_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_its_lit_title_text_box.getWidth() / 2);
	int travis_scott_its_lit_title_y = travis_scott_title_font.getLineHeight() + 350;
	travis_scott_its_lit_title_font.drawStringAsShapes("It's Lit", travis_scott_its_lit_title_x, travis_scott_its_lit_title_y);
	
	float travis_scott_la_flame_title_box_y = travis_scott_title_font.getLineHeight() + 450;
	ofRectangle travis_scott_la_flame_title_text_box = travis_scott_la_flame_title_font.getStringBoundingBox("La Flame", 0, travis_scott_la_flame_title_box_y);
	int travis_scott_la_flame_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_la_flame_title_text_box.getWidth() / 2);
	int travis_scott_la_flame_title_y = travis_scott_title_font.getLineHeight() + 450;
	travis_scott_la_flame_title_font.drawStringAsShapes("La Flame", travis_scott_la_flame_title_x, travis_scott_la_flame_title_y);

	float travis_scott_yeah_title_box_y = travis_scott_title_font.getLineHeight() + 450;
	ofRectangle travis_scott_yeah_title_text_box = travis_scott_yeah_title_font.getStringBoundingBox("Yeah", 0, travis_scott_yeah_title_box_y);
	int travis_scott_yeah_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_yeah_title_text_box.getWidth() / 2);
	int travis_scott_yeah_title_y = travis_scott_title_font.getLineHeight() + 450;
	travis_scott_yeah_title_font.drawStringAsShapes("Yeah", travis_scott_yeah_title_x, travis_scott_yeah_title_y);


	float travis_scott_1_title_box_y = travis_scott_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_1_title_text_box = travis_scott_1_title_font.getStringBoundingBox("1", 0, travis_scott_1_title_box_y);
	int travis_scott_1_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_1_title_text_box.getWidth() / 2);
	int travis_scott_1_title_y = travis_scott_title_font.getLineHeight() + 400;
	travis_scott_1_title_font.drawStringAsShapes("1", travis_scott_1_title_x, travis_scott_1_title_y);

	float travis_scott_2_title_box_y = travis_scott_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_2_title_text_box = travis_scott_2_title_font.getStringBoundingBox("2", 0, travis_scott_2_title_box_y);
	int travis_scott_2_title_x = (ofGetWindowWidth() * 0.50) - (travis_scott_2_title_text_box.getWidth() / 2);
	int travis_scott_2_title_y = travis_scott_title_font.getLineHeight() + 400;
	travis_scott_2_title_font.drawStringAsShapes("2", travis_scott_2_title_x, travis_scott_2_title_y);

	float travis_scott_3_title_box_y = travis_scott_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_3_title_text_box = travis_scott_3_title_font.getStringBoundingBox("3", 0, travis_scott_3_title_box_y);
	int travis_scott_3_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_3_title_text_box.getWidth() / 2);
	int travis_scott_3_title_y = travis_scott_title_font.getLineHeight() + 400;
	travis_scott_3_title_font.drawStringAsShapes("3", travis_scott_3_title_x, travis_scott_3_title_y);

	float travis_scott_4_title_box_y = travis_scott_title_font.getLineHeight() + 500;
	ofRectangle travis_scott_4_title_text_box = travis_scott_4_title_font.getStringBoundingBox("4", 0, travis_scott_4_title_box_y);
	int travis_scott_4_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_4_title_text_box.getWidth() / 2);
	int travis_scott_4_title_y = travis_scott_title_font.getLineHeight() + 500;
	travis_scott_4_title_font.drawStringAsShapes("4", travis_scott_4_title_x, travis_scott_4_title_y);

	float travis_scott_5_title_box_y = travis_scott_title_font.getLineHeight() + 500;
	ofRectangle travis_scott_5_title_text_box = travis_scott_5_title_font.getStringBoundingBox("5", 0, travis_scott_5_title_box_y);
	int travis_scott_5_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_5_title_text_box.getWidth() / 2);
	int travis_scott_5_title_y = travis_scott_title_font.getLineHeight() + 500;
	travis_scott_5_title_font.drawStringAsShapes("5", travis_scott_5_title_x, travis_scott_5_title_y);


	float travis_scott_clear_title_box_y = travis_scott_title_font.getLineHeight() + 450;
	ofRectangle travis_scott_clear_title_text_box = travis_scott_clear_title_font.getStringBoundingBox("Clear", 0, travis_scott_clear_title_box_y);
	int travis_scott_clear_title_x = (ofGetWindowWidth() * 0.9) - (travis_scott_clear_title_text_box.getWidth() / 2);
	int travis_scott_clear_title_y = travis_scott_title_font.getLineHeight() + 450;
	travis_scott_clear_title_font.drawStringAsShapes("Clear", travis_scott_clear_title_x, travis_scott_clear_title_y);

	float travis_scott_0_title_box_y = travis_scott_title_font.getLineHeight() + 500;
	ofRectangle travis_scott_0_title_text_box = travis_scott_0_title_font.getStringBoundingBox("0", 0, travis_scott_0_title_box_y);
	int travis_scott_0_title_x = (ofGetWindowWidth() * 0.9) - (travis_scott_0_title_text_box.getWidth() / 2);
	int travis_scott_0_title_y = travis_scott_title_font.getLineHeight() + 500;
	travis_scott_0_title_font.drawStringAsShapes("0", travis_scott_0_title_x, travis_scott_0_title_y);

	float travis_scott_back_title_box_y = travis_scott_title_font.getLineHeight() + 550;
	ofRectangle travis_scott_back_title_text_box = travis_scott_back_title_font.getStringBoundingBox("Back", 0, travis_scott_back_title_box_y);
	int travis_scott_back_title_x = (ofGetWindowWidth() * 0.9) - (travis_scott_back_title_text_box.getWidth() / 2);
	int travis_scott_back_title_y = travis_scott_title_font.getLineHeight() + 550;
	travis_scott_back_title_font.drawStringAsShapes("Back", travis_scott_back_title_x, travis_scott_back_title_y);

	float travis_scott_b_title_box_y = travis_scott_title_font.getLineHeight() + 600;
	ofRectangle travis_scott_b_title_text_box = travis_scott_b_title_font.getStringBoundingBox("B", 0, travis_scott_b_title_box_y);
	int travis_scott_b_title_x = (ofGetWindowWidth() * 0.9) - (travis_scott_b_title_text_box.getWidth() / 2);
	int travis_scott_b_title_y = travis_scott_title_font.getLineHeight() + 600;
	travis_scott_b_title_font.drawStringAsShapes("B", travis_scott_b_title_x, travis_scott_b_title_y);
}