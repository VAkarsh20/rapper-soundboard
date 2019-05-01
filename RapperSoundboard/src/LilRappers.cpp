#include "LilRappers.h"

LilRappers::LilRappers() {
	
	J_ok.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_Ok.mp3");
	J_what.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_What.mp3");
	J_yeah.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_Yeah.mp3");
	
	U_huh.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Huh.mp3");
	U_ree.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Ree.mp3");
	U_yeah.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Yeah.mp3");
	
	W_laugh.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Laugh.mp3");
	W_tunechi.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Tunechi.mp3");
	W_young_mula_baby.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Young_Mula_Baby.mp3");

	lil_rappers_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	lil_rappers_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);

	lil_rappers_lil_jon_image.load("Images\\Lil_Jon_Image.jpg");
	lil_rappers_lil_uzi_vert_image.load("Images\\Lil_Uzi_Vert_Image.jpg");
	lil_rappers_lil_wayne_image.load("Images\\Lil_Wayne_Image.jpg");

	lil_rappers_lil_jon_ok_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_jon_what_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_jon_yeah_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_uzi_vert_huh_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_uzi_vert_ree_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_uzi_vert_yeah_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_wayne_laugh_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_wayne_tunechi_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_lil_wayne_young_mula_baby_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	lil_rappers_1_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_2_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_3_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_4_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_5_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_6_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_7_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_8_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	lil_rappers_9_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

}
LilRappers::~LilRappers() {

}

ofSoundPlayer LilRappers::GetLilJonOk() {
	return J_ok;
}

ofSoundPlayer LilRappers::GetLilJonWhat() {
	return J_what;
}
ofSoundPlayer LilRappers::GetLilJonYeah() {
	return J_yeah;
}
ofSoundPlayer LilRappers::GetLilUziVertHuh() {
	return U_huh;
}
ofSoundPlayer LilRappers::GetLilUziVertRee() {
	return U_ree;
}
ofSoundPlayer LilRappers::GetLilUziVertYeah() {
	return U_yeah;
}
ofSoundPlayer LilRappers::GetLilWayneLaugh() {
	return W_laugh;
}
ofSoundPlayer LilRappers::GetLilWayneTunechi() {
	return W_tunechi;
}
ofSoundPlayer LilRappers::GetLilWayneYoungMulaBaby() {
	return W_young_mula_baby;
}

ofImage LilRappers::GetLilUziVertImage() {
	return lil_rappers_lil_uzi_vert_image;
}

void LilRappers::DrawLilRappersPage() {

	// Main Title
	float lil_rappers_title_box_y = lil_rappers_title_font.getLineHeight();
	ofRectangle lil_rappers_title_text_box = lil_rappers_title_font.getStringBoundingBox("Lil Rappers", 0, lil_rappers_title_box_y);
	int lil_rappers_title_x = (ofGetWindowWidth() / 2) - (lil_rappers_title_text_box.getWidth() / 2);
	int lil_rappers_title_y = lil_rappers_title_font.getLineHeight();
	lil_rappers_title_font.drawStringAsShapes("Lil Rappers", lil_rappers_title_x, lil_rappers_title_y);

	// Main Subheader
	float lil_rappers_subheader_box_y = lil_rappers_title_font.getLineHeight() + 50;
	ofRectangle lil_rappers_subheader_text_box = lil_rappers_subheader_font.getStringBoundingBox("Press the Number Key of the Adlib you want to Use", 0, lil_rappers_subheader_box_y);
	int lil_rappers_subheader_x = (ofGetWindowWidth() / 2) - (lil_rappers_subheader_text_box.getWidth() / 2);
	int lil_rappers_subheader_y = lil_rappers_title_font.getLineHeight() + 50;
	lil_rappers_subheader_font.drawStringAsShapes("Press the Number Key of the Adlib you want to Use", lil_rappers_subheader_x, lil_rappers_subheader_y);


	lil_rappers_lil_jon_image.draw((ofGetWindowWidth() * 0.25) - (lil_rappers_lil_jon_image.getWidth() / 2), lil_rappers_title_font.getLineHeight() + 80);
	lil_rappers_lil_uzi_vert_image.draw((ofGetWindowWidth() * 0.50) - (lil_rappers_lil_uzi_vert_image.getWidth() / 2), lil_rappers_title_font.getLineHeight() + 80);
	lil_rappers_lil_wayne_image.draw((ofGetWindowWidth() * 0.75) - (lil_rappers_lil_wayne_image.getWidth() / 2), lil_rappers_title_font.getLineHeight() + 80);

	float lil_rappers_lil_jon_ok_title_box_y = lil_rappers_title_font.getLineHeight() + 350;
	ofRectangle lil_rappers_lil_jon_ok_title_text_box = lil_rappers_lil_jon_ok_title_font.getStringBoundingBox("Ok", 0, lil_rappers_lil_jon_ok_title_box_y);
	int lil_rappers_lil_jon_ok_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_lil_jon_ok_title_text_box.getWidth() / 2);
	int lil_rappers_lil_jon_ok_title_y = lil_rappers_title_font.getLineHeight() + 350;
	lil_rappers_lil_jon_ok_title_font.drawStringAsShapes("Ok", lil_rappers_lil_jon_ok_title_x, lil_rappers_lil_jon_ok_title_y);

	float lil_rappers_lil_jon_what_title_box_y = lil_rappers_title_font.getLineHeight() + 450;
	ofRectangle lil_rappers_lil_jon_what_title_text_box = lil_rappers_lil_jon_what_title_font.getStringBoundingBox("What", 0, lil_rappers_lil_jon_what_title_box_y);
	int lil_rappers_lil_jon_what_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_lil_jon_what_title_text_box.getWidth() / 2);
	int lil_rappers_lil_jon_what_title_y = lil_rappers_title_font.getLineHeight() + 450;
	lil_rappers_lil_jon_what_title_font.drawStringAsShapes("What", lil_rappers_lil_jon_what_title_x, lil_rappers_lil_jon_what_title_y);

	float lil_rappers_lil_jon_yeah_title_box_y = lil_rappers_title_font.getLineHeight() + 550;
	ofRectangle lil_rappers_lil_jon_yeah_title_text_box = lil_rappers_lil_jon_yeah_title_font.getStringBoundingBox("Yeah", 0, lil_rappers_lil_jon_yeah_title_box_y);
	int lil_rappers_lil_jon_yeah_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_lil_jon_yeah_title_text_box.getWidth() / 2);
	int lil_rappers_lil_jon_yeah_title_y = lil_rappers_title_font.getLineHeight() + 550;
	lil_rappers_lil_jon_yeah_title_font.drawStringAsShapes("Yeah", lil_rappers_lil_jon_yeah_title_x, lil_rappers_lil_jon_yeah_title_y);

	float lil_rappers_lil_uzi_vert_huh_title_box_y = lil_rappers_title_font.getLineHeight() + 350;
	ofRectangle lil_rappers_lil_uzi_vert_huh_title_text_box = lil_rappers_lil_uzi_vert_huh_title_font.getStringBoundingBox("Huh", 0, lil_rappers_lil_uzi_vert_huh_title_box_y);
	int lil_rappers_lil_uzi_vert_huh_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_lil_uzi_vert_huh_title_text_box.getWidth() / 2);
	int lil_rappers_lil_uzi_vert_huh_title_y = lil_rappers_title_font.getLineHeight() + 350;
	lil_rappers_lil_uzi_vert_huh_title_font.drawStringAsShapes("Huh", lil_rappers_lil_uzi_vert_huh_title_x, lil_rappers_lil_uzi_vert_huh_title_y);

	float lil_rappers_lil_uzi_vert_ree_title_box_y = lil_rappers_title_font.getLineHeight() + 450;
	ofRectangle lil_rappers_lil_uzi_vert_ree_title_text_box = lil_rappers_lil_uzi_vert_ree_title_font.getStringBoundingBox("Ree", 0, lil_rappers_lil_uzi_vert_ree_title_box_y);
	int lil_rappers_lil_uzi_vert_ree_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_lil_uzi_vert_ree_title_text_box.getWidth() / 2);
	int lil_rappers_lil_uzi_vert_ree_title_y = lil_rappers_title_font.getLineHeight() + 450;
	lil_rappers_lil_uzi_vert_ree_title_font.drawStringAsShapes("Ree", lil_rappers_lil_uzi_vert_ree_title_x, lil_rappers_lil_uzi_vert_ree_title_y);

	float lil_rappers_lil_uzi_vert_yeah_title_box_y = lil_rappers_title_font.getLineHeight() + 550;
	ofRectangle lil_rappers_lil_uzi_vert_yeah_title_text_box = lil_rappers_lil_uzi_vert_yeah_title_font.getStringBoundingBox("Yeah", 0, lil_rappers_lil_uzi_vert_yeah_title_box_y);
	int lil_rappers_lil_uzi_vert_yeah_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_lil_uzi_vert_yeah_title_text_box.getWidth() / 2);
	int lil_rappers_lil_uzi_vert_yeah_title_y = lil_rappers_title_font.getLineHeight() + 550;
	lil_rappers_lil_uzi_vert_yeah_title_font.drawStringAsShapes("Yeah", lil_rappers_lil_uzi_vert_yeah_title_x, lil_rappers_lil_uzi_vert_yeah_title_y);

	float lil_rappers_lil_wayne_laugh_title_box_y = lil_rappers_title_font.getLineHeight() + 350;
	ofRectangle lil_rappers_lil_wayne_laugh_title_text_box = lil_rappers_lil_wayne_laugh_title_font.getStringBoundingBox("Haha", 0, lil_rappers_lil_wayne_laugh_title_box_y);
	int lil_rappers_lil_wayne_laugh_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_lil_wayne_laugh_title_text_box.getWidth() / 2);
	int lil_rappers_lil_wayne_laugh_title_y = lil_rappers_title_font.getLineHeight() + 350;
	lil_rappers_lil_wayne_laugh_title_font.drawStringAsShapes("Haha", lil_rappers_lil_wayne_laugh_title_x, lil_rappers_lil_wayne_laugh_title_y);

	float lil_rappers_lil_wayne_tunechi_title_box_y = lil_rappers_title_font.getLineHeight() + 450;
	ofRectangle lil_rappers_lil_wayne_tunechi_title_text_box = lil_rappers_lil_wayne_tunechi_title_font.getStringBoundingBox("Tunechi", 0, lil_rappers_lil_wayne_tunechi_title_box_y);
	int lil_rappers_lil_wayne_tunechi_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_lil_wayne_tunechi_title_text_box.getWidth() / 2);
	int lil_rappers_lil_wayne_tunechi_title_y = lil_rappers_title_font.getLineHeight() + 450;
	lil_rappers_lil_wayne_tunechi_title_font.drawStringAsShapes("Tunechi", lil_rappers_lil_wayne_tunechi_title_x, lil_rappers_lil_wayne_tunechi_title_y);
	
	float lil_rappers_lil_wayne_young_mula_baby_title_box_y = lil_rappers_title_font.getLineHeight() + 550;
	ofRectangle lil_rappers_lil_wayne_young_mula_baby_title_text_box = lil_rappers_lil_wayne_young_mula_baby_title_font.getStringBoundingBox("Young Mula Baby", 0, lil_rappers_lil_wayne_young_mula_baby_title_box_y);
	int lil_rappers_lil_wayne_young_mula_baby_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_lil_wayne_young_mula_baby_title_text_box.getWidth() / 2);
	int lil_rappers_lil_wayne_young_mula_baby_title_y = lil_rappers_title_font.getLineHeight() + 550;
	lil_rappers_lil_wayne_young_mula_baby_title_font.drawStringAsShapes("Young Mula Baby", lil_rappers_lil_wayne_young_mula_baby_title_x, lil_rappers_lil_wayne_young_mula_baby_title_y);


	float lil_rappers_1_title_box_y = lil_rappers_title_font.getLineHeight() + 400;
	ofRectangle lil_rappers_1_title_text_box = lil_rappers_1_title_font.getStringBoundingBox("1", 0, lil_rappers_1_title_box_y);
	int lil_rappers_1_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_1_title_text_box.getWidth() / 2);
	int lil_rappers_1_title_y = lil_rappers_title_font.getLineHeight() + 400;
	lil_rappers_1_title_font.drawStringAsShapes("1", lil_rappers_1_title_x, lil_rappers_1_title_y);

	float lil_rappers_2_title_box_y = lil_rappers_title_font.getLineHeight() + 500;
	ofRectangle lil_rappers_2_title_text_box = lil_rappers_2_title_font.getStringBoundingBox("2", 0, lil_rappers_2_title_box_y);
	int lil_rappers_2_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_2_title_text_box.getWidth() / 2);
	int lil_rappers_2_title_y = lil_rappers_title_font.getLineHeight() + 500;
	lil_rappers_2_title_font.drawStringAsShapes("2", lil_rappers_2_title_x, lil_rappers_2_title_y);

	float lil_rappers_3_title_box_y = lil_rappers_title_font.getLineHeight() + 600;
	ofRectangle lil_rappers_3_title_text_box = lil_rappers_3_title_font.getStringBoundingBox("3", 0, lil_rappers_3_title_box_y);
	int lil_rappers_3_title_x = (ofGetWindowWidth() * 0.25) - (lil_rappers_3_title_text_box.getWidth() / 2);
	int lil_rappers_3_title_y = lil_rappers_title_font.getLineHeight() + 600;
	lil_rappers_3_title_font.drawStringAsShapes("3", lil_rappers_3_title_x, lil_rappers_3_title_y);

	float lil_rappers_4_title_box_y = lil_rappers_title_font.getLineHeight() + 400;
	ofRectangle lil_rappers_4_title_text_box = lil_rappers_4_title_font.getStringBoundingBox("4", 0, lil_rappers_4_title_box_y);
	int lil_rappers_4_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_4_title_text_box.getWidth() / 2);
	int lil_rappers_4_title_y = lil_rappers_title_font.getLineHeight() + 400;
	lil_rappers_4_title_font.drawStringAsShapes("4", lil_rappers_4_title_x, lil_rappers_4_title_y);

	float lil_rappers_5_title_box_y = lil_rappers_title_font.getLineHeight() + 500;
	ofRectangle lil_rappers_5_title_text_box = lil_rappers_5_title_font.getStringBoundingBox("5", 0, lil_rappers_5_title_box_y);
	int lil_rappers_5_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_5_title_text_box.getWidth() / 2);
	int lil_rappers_5_title_y = lil_rappers_title_font.getLineHeight() + 500;
	lil_rappers_5_title_font.drawStringAsShapes("5", lil_rappers_5_title_x, lil_rappers_5_title_y);

	float lil_rappers_6_title_box_y = lil_rappers_title_font.getLineHeight() + 600;
	ofRectangle lil_rappers_6_title_text_box = lil_rappers_6_title_font.getStringBoundingBox("6", 0, lil_rappers_6_title_box_y);
	int lil_rappers_6_title_x = (ofGetWindowWidth() * 0.50) - (lil_rappers_6_title_text_box.getWidth() / 2);
	int lil_rappers_6_title_y = lil_rappers_title_font.getLineHeight() + 600;
	lil_rappers_6_title_font.drawStringAsShapes("6", lil_rappers_6_title_x, lil_rappers_6_title_y);

	float lil_rappers_7_title_box_y = lil_rappers_title_font.getLineHeight() + 400;
	ofRectangle lil_rappers_7_title_text_box = lil_rappers_7_title_font.getStringBoundingBox("7", 0, lil_rappers_7_title_box_y);
	int lil_rappers_7_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_7_title_text_box.getWidth() / 2);
	int lil_rappers_7_title_y = lil_rappers_title_font.getLineHeight() + 400;
	lil_rappers_7_title_font.drawStringAsShapes("7", lil_rappers_7_title_x, lil_rappers_7_title_y);

	float lil_rappers_8_title_box_y = lil_rappers_title_font.getLineHeight() + 500;
	ofRectangle lil_rappers_8_title_text_box = lil_rappers_8_title_font.getStringBoundingBox("8", 0, lil_rappers_8_title_box_y);
	int lil_rappers_8_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_8_title_text_box.getWidth() / 2);
	int lil_rappers_8_title_y = lil_rappers_title_font.getLineHeight() + 500;
	lil_rappers_8_title_font.drawStringAsShapes("8", lil_rappers_8_title_x, lil_rappers_8_title_y);

	float lil_rappers_9_title_box_y = lil_rappers_title_font.getLineHeight() + 600;
	ofRectangle lil_rappers_9_title_text_box = lil_rappers_9_title_font.getStringBoundingBox("9", 0, lil_rappers_9_title_box_y);
	int lil_rappers_9_title_x = (ofGetWindowWidth() * 0.75) - (lil_rappers_8_title_text_box.getWidth() / 2);
	int lil_rappers_9_title_y = lil_rappers_title_font.getLineHeight() + 600;
	lil_rappers_9_title_font.drawStringAsShapes("9", lil_rappers_9_title_x, lil_rappers_9_title_y);

}


