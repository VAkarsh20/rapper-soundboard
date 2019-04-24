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

	lil_uzi_vert_image.load("Images\\Lil_Uzi_Vert_Image.jpg");
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
	return lil_uzi_vert_image;
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

	lil_uzi_vert_image.draw((ofGetWindowWidth() / 2) - (lil_uzi_vert_image.getWidth() / 2), lil_rappers_title_font.getLineHeight() + 80);
}


