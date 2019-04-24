#include "Migos.h"

Migos::Migos()
{
	O_offset.load("Adlib Files\\Migos\\Offset\\Offset_Offset.mp3");
	O_dab.load("Adlib Files\\Migos\\Offset\\Offset_Dab.mp3");
	O_hey.load("Adlib Files\\Migos\\Offset\\Offset_Hey.mp3");

	Q_quavo.load("Adlib Files\\Migos\\Quavo\\Quavo_Quavo.mp3");
	Q_mama.load("Adlib Files\\Migos\\Quavo\\Quavo_Mama.mp3");
	Q_skrt_skrt.load("Adlib Files\\Migos\\Quavo\\Quavo_Skrt_Skrt.mp3");

	T_takeoff.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Takeoff.mp3");
	T_money.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Money.mp3");
	T_migo.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Migo.mp3");

	migos_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	migos_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);

	migos_image.load("Images\\Migos_Image.jpg");
}

Migos::~Migos()
{

}

ofSoundPlayer Migos::GetOffset() {
	return O_offset;
}
ofSoundPlayer Migos::GetDab() {
	return O_dab;
}
ofSoundPlayer Migos::GetHey(){
	return O_hey;
}

ofSoundPlayer Migos::GetQuavo() {
	return Q_quavo;
}
ofSoundPlayer Migos::GetMama() {
	return Q_mama;
}
ofSoundPlayer Migos::GetSkrtSkrt() {
	return Q_skrt_skrt;
}

ofSoundPlayer Migos::GetTakeoff() {
	return T_takeoff;
}
ofSoundPlayer Migos::GetMoney() {
	return T_money;
}
ofSoundPlayer Migos::GetMigo() {
	return T_migo;
}

ofImage Migos::GetMigosImage() {
	return migos_image;
}

void Migos::DrawMigosPage() {

	// Main Title
	float migos_title_box_y = migos_title_font.getLineHeight();
	ofRectangle migos_title_text_box = migos_title_font.getStringBoundingBox("Migos", 0, migos_title_box_y);
	int migos_title_x = (ofGetWindowWidth() / 2) - (migos_title_text_box.getWidth() / 2);
	int migos_title_y = migos_title_font.getLineHeight();
	migos_title_font.drawStringAsShapes("Migos", migos_title_x, migos_title_y);

	// Main Subheader
	float migos_subheader_box_y = migos_title_font.getLineHeight() + 50;
	ofRectangle migos_subheader_text_box = migos_subheader_font.getStringBoundingBox("Press the Number Key of the Adlib you want to Use", 0, migos_subheader_box_y);
	int migos_subheader_x = (ofGetWindowWidth() / 2) - (migos_subheader_text_box.getWidth() / 2);
	int migos_subheader_y = migos_title_font.getLineHeight() + 50;
	migos_subheader_font.drawStringAsShapes("Press the Number Key of the Adlib you want to Use", migos_subheader_x, migos_subheader_y);
	
	migos_image.draw((ofGetWindowWidth() / 2) - (migos_image.getWidth() / 2), migos_title_font.getLineHeight() + 80);
}