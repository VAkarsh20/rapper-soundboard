#include "LilRappers.h"

/*
	Loading fonts, mp3s, and images to the respective fields when creating a Lil Rappers Object
*/
LilRappers::LilRappers() {
	
	// Loading mp3s for the adlib sound fields
	lil_jon_ok.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_Ok.mp3");
	lil_jon_what.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_What.mp3");
	lil_jon_yeah.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_Yeah.mp3");
	lil_uzi_vert_huh.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Huh.mp3");
	lil_uzi_vert_ree.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Ree.mp3");
	lil_uzi_vert_yeah.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Yeah.mp3");
	lil_wayne_laugh.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Laugh.mp3");
	lil_wayne_tunechi.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Tunechi.mp3");
	lil_wayne_young_mula_baby.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Young_Mula_Baby.mp3");

	// Loading the main title and subheader fonts
	lil_rappers_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	lil_rappers_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Loading images
	lil_rappers_lil_jon_image.load("Images\\Lil_Jon_Image.jpg");
	lil_rappers_lil_uzi_vert_image.load("Images\\Lil_Uzi_Vert_Image.jpg");
	lil_rappers_lil_wayne_image.load("Images\\Lil_Wayne_Image.jpg");

	// Loading the adlib titles fonts
	lil_rappers_lil_jon_ok_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_jon_what_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_jon_yeah_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_uzi_vert_huh_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_uzi_vert_ree_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_uzi_vert_yeah_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_wayne_laugh_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_wayne_tunechi_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_wayne_young_mula_baby_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Loading the adlib key fonts
	lil_rappers_1_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_2_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_3_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_4_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_5_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_6_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_7_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_8_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_9_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Action title and key fonts
	lil_rappers_clear_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_0_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_back_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_b_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

}

/*
	Destructor for this object
*/
LilRappers::~LilRappers() {

}

/*
	Getter for the Lil Jon "Ok" adlib sound

	@return - lil_jon_ok, an ofSoundplayer field that is the Lil Jon "Ok" adlib
*/
ofSoundPlayer LilRappers::GetLilJonOk() {
	return lil_jon_ok;
}

/*
	Getter for the Lil Jon "What" adlib sound

	@return - lil_jon_ok, an ofSoundplayer field that is the Lil Jon "What" adlib
*/
ofSoundPlayer LilRappers::GetLilJonWhat() {
	return lil_jon_what;
}

/*
	Getter for the Lil Jon "Yeah" adlib sound

	@return - lil_jon_yeah, an ofSoundplayer field that is the Lil Jon "Yeah" adlib
*/
ofSoundPlayer LilRappers::GetLilJonYeah() {
	return lil_jon_yeah;
}

/*
	Getter for the Lil Uzi Vert "Huh" adlib sound

	@return - lil_uzi_vert_huh, an ofSoundplayer field that is the Lil Uzi Vert "Huh" adlib
*/
ofSoundPlayer LilRappers::GetLilUziVertHuh() {
	return lil_uzi_vert_huh;
}

/*
	Getter for the Lil Uzi Vert "Ree" adlib sound

	@return - lil_uzi_vert_ree, an ofSoundplayer field that is the Lil Uzi Vert "Ree" adlib
*/
ofSoundPlayer LilRappers::GetLilUziVertRee() {
	return lil_uzi_vert_ree;
}

/*
	Getter for the Lil Uzi Vert "Yeah" adlib sound

	@return - lil_uzi_vert_yeah, an ofSoundplayer field that is the Lil Uzi Vert "Yeah" adlib
*/
ofSoundPlayer LilRappers::GetLilUziVertYeah() {
	return lil_uzi_vert_yeah;
}

/*
	Getter for the Lil Wayne "Haha" adlib sound

	@return - lil_wayne_laugh, an ofSoundplayer field that is the Lil Wayne "Haha" adlib
*/
ofSoundPlayer LilRappers::GetLilWayneLaugh() {
	return lil_wayne_laugh;
}

/*
	Getter for the Lil Wayne "Tunechi" adlib sound

	@return - lil_wayne_tunechi, an ofSoundplayer field that is the Lil Wayne "Tunechi" adlib
*/
ofSoundPlayer LilRappers::GetLilWayneTunechi() {
	return lil_wayne_tunechi;
}

/*
	Getter for the Lil Wayne "Young Mula Baby" adlib sound

	@return - lil_wayne_young_mula_baby, an ofSoundplayer field that is the Lil Wayne "Young Mula Baby" adlib
*/
ofSoundPlayer LilRappers::GetLilWayneYoungMulaBaby() {
	return lil_wayne_young_mula_baby;
}

/*
	Getter for the the Lil Uzi Vert Image

	@return - lil_rappers_lil_uzi_vert_image, an ofImage field that is an image of Lil Uzi Vert
*/
ofImage LilRappers::GetLilUziVertImage() {
	return lil_rappers_lil_uzi_vert_image;
}

/*
	Draws the Lil Rappers page for the application when called
*/
void LilRappers::DrawLilRappersPage() {

	// Drawing title and subheader fonts

	// Title
	float lil_rappers_title_box_y = lil_rappers_title_font.getLineHeight();
	ofRectangle lil_rappers_title_text_box = lil_rappers_title_font.getStringBoundingBox("Lil Rappers", 0, lil_rappers_title_box_y);
	int lil_rappers_title_x = (ofGetWindowWidth() / 2) - (lil_rappers_title_text_box.getWidth() / 2);
	int lil_rappers_title_y = lil_rappers_title_font.getLineHeight();
	lil_rappers_title_font.drawStringAsShapes("Lil Rappers", lil_rappers_title_x, lil_rappers_title_y);

	// Subheader
	float lil_rappers_subheader_box_y = lil_rappers_title_font.getLineHeight() + 50;
	ofRectangle lil_rappers_subheader_text_box = lil_rappers_subheader_font.getStringBoundingBox("Press the Key of the Adlib or Action you want to Use", 0, lil_rappers_subheader_box_y);
	int lil_rappers_subheader_x = (ofGetWindowWidth() / 2) - (lil_rappers_subheader_text_box.getWidth() / 2);
	int lil_rappers_subheader_y = lil_rappers_title_font.getLineHeight() + 50;
	lil_rappers_subheader_font.drawStringAsShapes("Press the Key of the Adlib or Action you want to Use", lil_rappers_subheader_x, lil_rappers_subheader_y);


	// Drawing image

	// Individual Lil Rappers Images
	lil_rappers_lil_jon_image.draw((ofGetWindowWidth() * 0.25) - (lil_rappers_lil_jon_image.getWidth() / 2), lil_rappers_title_font.getLineHeight() + 80);
	lil_rappers_lil_uzi_vert_image.draw((ofGetWindowWidth() * 0.50) - (lil_rappers_lil_uzi_vert_image.getWidth() / 2), lil_rappers_title_font.getLineHeight() + 80);
	lil_rappers_lil_wayne_image.draw((ofGetWindowWidth() * 0.75) - (lil_rappers_lil_wayne_image.getWidth() / 2), lil_rappers_title_font.getLineHeight() + 80);


	// Drawing adlib title Fonts

	// Lil Jon: Ok
	float lil_rappers_lil_jon_ok_title_box_y = lil_rappers_title_font.getLineHeight() + 350;
	ofRectangle lil_rappers_lil_jon_ok_title_text_box = lil_rappers_lil_jon_ok_title_font.getStringBoundingBox("Ok", 0, lil_rappers_lil_jon_ok_title_box_y);
	int lil_rappers_lil_jon_ok_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_lil_jon_ok_title_text_box.getWidth() / 2);
	int lil_rappers_lil_jon_ok_title_y = lil_rappers_title_font.getLineHeight() + 350;
	lil_rappers_lil_jon_ok_title_font.drawStringAsShapes("Ok", lil_rappers_lil_jon_ok_title_x, lil_rappers_lil_jon_ok_title_y);

	// Lil Jon: What
	float lil_rappers_lil_jon_what_title_box_y = lil_rappers_title_font.getLineHeight() + 450;
	ofRectangle lil_rappers_lil_jon_what_title_text_box = lil_rappers_lil_jon_what_title_font.getStringBoundingBox("What", 0, lil_rappers_lil_jon_what_title_box_y);
	int lil_rappers_lil_jon_what_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_lil_jon_what_title_text_box.getWidth() / 2);
	int lil_rappers_lil_jon_what_title_y = lil_rappers_title_font.getLineHeight() + 450;
	lil_rappers_lil_jon_what_title_font.drawStringAsShapes("What", lil_rappers_lil_jon_what_title_x, lil_rappers_lil_jon_what_title_y);

	// Lil Jon: Yeah
	float lil_rappers_lil_jon_yeah_title_box_y = lil_rappers_title_font.getLineHeight() + 550;
	ofRectangle lil_rappers_lil_jon_yeah_title_text_box = lil_rappers_lil_jon_yeah_title_font.getStringBoundingBox("Yeah", 0, lil_rappers_lil_jon_yeah_title_box_y);
	int lil_rappers_lil_jon_yeah_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_lil_jon_yeah_title_text_box.getWidth() / 2);
	int lil_rappers_lil_jon_yeah_title_y = lil_rappers_title_font.getLineHeight() + 550;
	lil_rappers_lil_jon_yeah_title_font.drawStringAsShapes("Yeah", lil_rappers_lil_jon_yeah_title_x, lil_rappers_lil_jon_yeah_title_y);

	// Lil Uzi Vert: Huh
	float lil_rappers_lil_uzi_vert_huh_title_box_y = lil_rappers_title_font.getLineHeight() + 350;
	ofRectangle lil_rappers_lil_uzi_vert_huh_title_text_box = lil_rappers_lil_uzi_vert_huh_title_font.getStringBoundingBox("Huh", 0, lil_rappers_lil_uzi_vert_huh_title_box_y);
	int lil_rappers_lil_uzi_vert_huh_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_lil_uzi_vert_huh_title_text_box.getWidth() / 2);
	int lil_rappers_lil_uzi_vert_huh_title_y = lil_rappers_title_font.getLineHeight() + 350;
	lil_rappers_lil_uzi_vert_huh_title_font.drawStringAsShapes("Huh", lil_rappers_lil_uzi_vert_huh_title_x, lil_rappers_lil_uzi_vert_huh_title_y);

	// Lil Uzi Vert: Ree
	float lil_rappers_lil_uzi_vert_ree_title_box_y = lil_rappers_title_font.getLineHeight() + 450;
	ofRectangle lil_rappers_lil_uzi_vert_ree_title_text_box = lil_rappers_lil_uzi_vert_ree_title_font.getStringBoundingBox("Ree", 0, lil_rappers_lil_uzi_vert_ree_title_box_y);
	int lil_rappers_lil_uzi_vert_ree_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_lil_uzi_vert_ree_title_text_box.getWidth() / 2);
	int lil_rappers_lil_uzi_vert_ree_title_y = lil_rappers_title_font.getLineHeight() + 450;
	lil_rappers_lil_uzi_vert_ree_title_font.drawStringAsShapes("Ree", lil_rappers_lil_uzi_vert_ree_title_x, lil_rappers_lil_uzi_vert_ree_title_y);

	// Lil Uzi Vert: Yeah
	float lil_rappers_lil_uzi_vert_yeah_title_box_y = lil_rappers_title_font.getLineHeight() + 550;
	ofRectangle lil_rappers_lil_uzi_vert_yeah_title_text_box = lil_rappers_lil_uzi_vert_yeah_title_font.getStringBoundingBox("Yeah", 0, lil_rappers_lil_uzi_vert_yeah_title_box_y);
	int lil_rappers_lil_uzi_vert_yeah_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_lil_uzi_vert_yeah_title_text_box.getWidth() / 2);
	int lil_rappers_lil_uzi_vert_yeah_title_y = lil_rappers_title_font.getLineHeight() + 550;
	lil_rappers_lil_uzi_vert_yeah_title_font.drawStringAsShapes("Yeah", lil_rappers_lil_uzi_vert_yeah_title_x, lil_rappers_lil_uzi_vert_yeah_title_y);

	// Lil Wayne: Laugh
	float lil_rappers_lil_wayne_laugh_title_box_y = lil_rappers_title_font.getLineHeight() + 350;
	ofRectangle lil_rappers_lil_wayne_laugh_title_text_box = lil_rappers_lil_wayne_laugh_title_font.getStringBoundingBox("Haha", 0, lil_rappers_lil_wayne_laugh_title_box_y);
	int lil_rappers_lil_wayne_laugh_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_lil_wayne_laugh_title_text_box.getWidth() / 2);
	int lil_rappers_lil_wayne_laugh_title_y = lil_rappers_title_font.getLineHeight() + 350;
	lil_rappers_lil_wayne_laugh_title_font.drawStringAsShapes("Haha", lil_rappers_lil_wayne_laugh_title_x, lil_rappers_lil_wayne_laugh_title_y);

	// Lil Wayne: Tunechi
	float lil_rappers_lil_wayne_tunechi_title_box_y = lil_rappers_title_font.getLineHeight() + 450;
	ofRectangle lil_rappers_lil_wayne_tunechi_title_text_box = lil_rappers_lil_wayne_tunechi_title_font.getStringBoundingBox("Tunechi", 0, lil_rappers_lil_wayne_tunechi_title_box_y);
	int lil_rappers_lil_wayne_tunechi_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_lil_wayne_tunechi_title_text_box.getWidth() / 2);
	int lil_rappers_lil_wayne_tunechi_title_y = lil_rappers_title_font.getLineHeight() + 450;
	lil_rappers_lil_wayne_tunechi_title_font.drawStringAsShapes("Tunechi", lil_rappers_lil_wayne_tunechi_title_x, lil_rappers_lil_wayne_tunechi_title_y);
	
	// Lil Wayne: Young Mula Baby
	float lil_rappers_lil_wayne_young_mula_baby_title_box_y = lil_rappers_title_font.getLineHeight() + 550;
	ofRectangle lil_rappers_lil_wayne_young_mula_baby_title_text_box = lil_rappers_lil_wayne_young_mula_baby_title_font.getStringBoundingBox("Young Mula Baby", 0, lil_rappers_lil_wayne_young_mula_baby_title_box_y);
	int lil_rappers_lil_wayne_young_mula_baby_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_lil_wayne_young_mula_baby_title_text_box.getWidth() / 2);
	int lil_rappers_lil_wayne_young_mula_baby_title_y = lil_rappers_title_font.getLineHeight() + 550;
	lil_rappers_lil_wayne_young_mula_baby_title_font.drawStringAsShapes("Young Mula Baby", lil_rappers_lil_wayne_young_mula_baby_title_x, lil_rappers_lil_wayne_young_mula_baby_title_y);


	// Drawing key fonts

	// 1
	float lil_rappers_1_title_box_y = lil_rappers_title_font.getLineHeight() + 400;
	ofRectangle lil_rappers_1_title_text_box = lil_rappers_1_title_font.getStringBoundingBox("1", 0, lil_rappers_1_title_box_y);
	int lil_rappers_1_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_1_title_text_box.getWidth() / 2);
	int lil_rappers_1_title_y = lil_rappers_title_font.getLineHeight() + 400;
	lil_rappers_1_title_font.drawStringAsShapes("1", lil_rappers_1_title_x, lil_rappers_1_title_y);

	// 2
	float lil_rappers_2_title_box_y = lil_rappers_title_font.getLineHeight() + 500;
	ofRectangle lil_rappers_2_title_text_box = lil_rappers_2_title_font.getStringBoundingBox("2", 0, lil_rappers_2_title_box_y);
	int lil_rappers_2_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_2_title_text_box.getWidth() / 2);
	int lil_rappers_2_title_y = lil_rappers_title_font.getLineHeight() + 500;
	lil_rappers_2_title_font.drawStringAsShapes("2", lil_rappers_2_title_x, lil_rappers_2_title_y);

	// 3
	float lil_rappers_3_title_box_y = lil_rappers_title_font.getLineHeight() + 600;
	ofRectangle lil_rappers_3_title_text_box = lil_rappers_3_title_font.getStringBoundingBox("3", 0, lil_rappers_3_title_box_y);
	int lil_rappers_3_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_3_title_text_box.getWidth() / 2);
	int lil_rappers_3_title_y = lil_rappers_title_font.getLineHeight() + 600;
	lil_rappers_3_title_font.drawStringAsShapes("3", lil_rappers_3_title_x, lil_rappers_3_title_y);

	// 4
	float lil_rappers_4_title_box_y = lil_rappers_title_font.getLineHeight() + 400;
	ofRectangle lil_rappers_4_title_text_box = lil_rappers_4_title_font.getStringBoundingBox("4", 0, lil_rappers_4_title_box_y);
	int lil_rappers_4_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_4_title_text_box.getWidth() / 2);
	int lil_rappers_4_title_y = lil_rappers_title_font.getLineHeight() + 400;
	lil_rappers_4_title_font.drawStringAsShapes("4", lil_rappers_4_title_x, lil_rappers_4_title_y);

	// 5
	float lil_rappers_5_title_box_y = lil_rappers_title_font.getLineHeight() + 500;
	ofRectangle lil_rappers_5_title_text_box = lil_rappers_5_title_font.getStringBoundingBox("5", 0, lil_rappers_5_title_box_y);
	int lil_rappers_5_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_5_title_text_box.getWidth() / 2);
	int lil_rappers_5_title_y = lil_rappers_title_font.getLineHeight() + 500;
	lil_rappers_5_title_font.drawStringAsShapes("5", lil_rappers_5_title_x, lil_rappers_5_title_y);

	// 6
	float lil_rappers_6_title_box_y = lil_rappers_title_font.getLineHeight() + 600;
	ofRectangle lil_rappers_6_title_text_box = lil_rappers_6_title_font.getStringBoundingBox("6", 0, lil_rappers_6_title_box_y);
	int lil_rappers_6_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_6_title_text_box.getWidth() / 2);
	int lil_rappers_6_title_y = lil_rappers_title_font.getLineHeight() + 600;
	lil_rappers_6_title_font.drawStringAsShapes("6", lil_rappers_6_title_x, lil_rappers_6_title_y);

	// 7
	float lil_rappers_7_title_box_y = lil_rappers_title_font.getLineHeight() + 400;
	ofRectangle lil_rappers_7_title_text_box = lil_rappers_7_title_font.getStringBoundingBox("7", 0, lil_rappers_7_title_box_y);
	int lil_rappers_7_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_7_title_text_box.getWidth() / 2);
	int lil_rappers_7_title_y = lil_rappers_title_font.getLineHeight() + 400;
	lil_rappers_7_title_font.drawStringAsShapes("7", lil_rappers_7_title_x, lil_rappers_7_title_y);

	// 8
	float lil_rappers_8_title_box_y = lil_rappers_title_font.getLineHeight() + 500;
	ofRectangle lil_rappers_8_title_text_box = lil_rappers_8_title_font.getStringBoundingBox("8", 0, lil_rappers_8_title_box_y);
	int lil_rappers_8_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_8_title_text_box.getWidth() / 2);
	int lil_rappers_8_title_y = lil_rappers_title_font.getLineHeight() + 500;
	lil_rappers_8_title_font.drawStringAsShapes("8", lil_rappers_8_title_x, lil_rappers_8_title_y);

	// 9
	float lil_rappers_9_title_box_y = lil_rappers_title_font.getLineHeight() + 600;
	ofRectangle lil_rappers_9_title_text_box = lil_rappers_9_title_font.getStringBoundingBox("9", 0, lil_rappers_9_title_box_y);
	int lil_rappers_9_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_8_title_text_box.getWidth() / 2);
	int lil_rappers_9_title_y = lil_rappers_title_font.getLineHeight() + 600;
	lil_rappers_9_title_font.drawStringAsShapes("9", lil_rappers_9_title_x, lil_rappers_9_title_y);


	// Drawing actin title and key fonts

	// Clear
	float lil_rappers_clear_title_box_y = lil_rappers_title_font.getLineHeight() + 450;
	ofRectangle lil_rappers_clear_title_text_box = lil_rappers_clear_title_font.getStringBoundingBox("Clear", 0, lil_rappers_clear_title_box_y);
	int lil_rappers_clear_title_x = (ofGetWindowWidth() * 0.9) - (lil_rappers_clear_title_text_box.getWidth() / 2);
	int lil_rappers_clear_title_y = lil_rappers_title_font.getLineHeight() + 450;
	lil_rappers_clear_title_font.drawStringAsShapes("Clear", lil_rappers_clear_title_x, lil_rappers_clear_title_y);

	// 0
	float lil_rappers_0_title_box_y = lil_rappers_title_font.getLineHeight() + 500;
	ofRectangle lil_rappers_0_title_text_box = lil_rappers_0_title_font.getStringBoundingBox("0", 0, lil_rappers_0_title_box_y);
	int lil_rappers_0_title_x = (ofGetWindowWidth() * 0.9) - (lil_rappers_0_title_text_box.getWidth() / 2);
	int lil_rappers_0_title_y = lil_rappers_title_font.getLineHeight() + 500;
	lil_rappers_0_title_font.drawStringAsShapes("0", lil_rappers_0_title_x, lil_rappers_0_title_y);

	// Back
	float lil_rappers_back_title_box_y = lil_rappers_title_font.getLineHeight() + 550;
	ofRectangle lil_rappers_back_title_text_box = lil_rappers_back_title_font.getStringBoundingBox("Back", 0, lil_rappers_back_title_box_y);
	int lil_rappers_back_title_x = (ofGetWindowWidth() * 0.9) - (lil_rappers_back_title_text_box.getWidth() / 2);
	int lil_rappers_back_title_y = lil_rappers_title_font.getLineHeight() + 550;
	lil_rappers_back_title_font.drawStringAsShapes("Back", lil_rappers_back_title_x, lil_rappers_back_title_y);

	// B
	float lil_rappers_b_title_box_y = lil_rappers_title_font.getLineHeight() + 600;
	ofRectangle lil_rappers_b_title_text_box = lil_rappers_b_title_font.getStringBoundingBox("B", 0, lil_rappers_b_title_box_y);
	int lil_rappers_b_title_x = (ofGetWindowWidth() * 0.9) - (lil_rappers_b_title_text_box.getWidth() / 2);
	int lil_rappers_b_title_y = lil_rappers_title_font.getLineHeight() + 600;
	lil_rappers_b_title_font.drawStringAsShapes("B", lil_rappers_b_title_x, lil_rappers_b_title_y);

}


