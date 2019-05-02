#include "Migos.h"

/*
	Loading fonts, mp3s, and images to the respective fields when creating a Migos Object
*/
Migos::Migos()
{
	
	// Loading mp3s for the adlib sound fields
	offset_offset.load("Adlib Files\\Migos\\Offset\\Offset_Offset.mp3");
	offset_dab.load("Adlib Files\\Migos\\Offset\\Offset_Dab.mp3");
	offset_hey.load("Adlib Files\\Migos\\Offset\\Offset_Hey.mp3");
	quavo_quavo.load("Adlib Files\\Migos\\Quavo\\Quavo_Quavo.mp3");
	quavo_mama.load("Adlib Files\\Migos\\Quavo\\Quavo_Mama.mp3");
	quavo_skrt_skrt.load("Adlib Files\\Migos\\Quavo\\Quavo_Skrt_Skrt.mp3");
	takeoff_takeoff.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Takeoff.mp3");
	takeoff_money.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Money.mp3");
	takeoff_migo.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Migo.mp3");

	// Loading the main title and subheader fonts
	migos_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	migos_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Loading images
	migos_image.load("Images\\Migos_Image.jpg");
	migos_offset_image.load("Images\\Offset_Image.jpg");;
	migos_quavo_image.load("Images\\Quavo_Image.jpg");;
	migos_takeoff_image.load("Images\\Takeoff_Image.jpg");

	// Loading the adlib titles fonts
	migos_offset_offset_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_offset_dab_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_offset_hey_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_quavo_quavo_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_quavo_mama_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_quavo_skrt_skrt_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_takeoff_takeoff_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_takeoff_money_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_takeoff_migo_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Loading the adlib titles fonts
	migos_1_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_2_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_3_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_4_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_5_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_6_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_7_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_8_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_9_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Action title and key fonts
	migos_clear_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_0_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_back_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_b_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
}

/*
	Destructor for this object
*/
Migos::~Migos()
{

}

/*
	Getter for the "Offset" adlib sound

	@return - offset_offset, an ofSoundplayer field that is the "Offset" adlib
*/
ofSoundPlayer Migos::GetOffset() {
	return offset_offset;
}

/*
	Getter for the "Dab" adlib sound

	@return - offset_dab, an ofSoundplayer field that is the "Dab" adlib
*/
ofSoundPlayer Migos::GetDab() {
	return offset_dab;
}

/*
	Getter for the "Hey" adlib sound

	@return - offset_hey, an ofSoundplayer field that is the "Hey" adlib
*/
ofSoundPlayer Migos::GetHey(){
	return offset_hey;
}

/*
	Getter for the "Quavo" adlib sound

	@return - quavo_quavo, an ofSoundplayer field that is the "Quavo" adlib
*/
ofSoundPlayer Migos::GetQuavo() {
	return quavo_quavo;
}

/*
	Getter for the "Mama" adlib sound

	@return - quavo_mama, an ofSoundplayer field that is the "Mama" adlib
*/
ofSoundPlayer Migos::GetMama() {
	return quavo_mama;
}

/*
	Getter for the "Skrt Skrt" adlib sound

	@return - quavo_skrt_skrt, an ofSoundplayer field that is the "Skrt Skrt" adlib
*/
ofSoundPlayer Migos::GetSkrtSkrt() {
	return quavo_skrt_skrt;
}

/*
	Getter for the "Takeoff" adlib sound

	@return - takeoff_takeoff, an ofSoundplayer field that is the "Takeoff" adlib
*/
ofSoundPlayer Migos::GetTakeoff() {
	return takeoff_takeoff;
}

/*
	Getter for the "Money" adlib sound

	@return - takeoff_money, an ofSoundplayer field that is the "Money" adlib
*/
ofSoundPlayer Migos::GetMoney() {
	return takeoff_money;
}

/*
	Getter for the "TMigo" adlib sound

	@return - takeoff_migo, an ofSoundplayer field that is the "Migo" adlib
*/
ofSoundPlayer Migos::GetMigo() {
	return takeoff_migo;
}

/*
	Getter for the the group Migos Image

	@return - migos_image, an ofImage field that is an image of the Migos
*/
ofImage Migos::GetMigosImage() {
	return migos_image;
}

/*
	Draws the Migos page for the application when called
*/
void Migos::DrawMigosPage() {

	// Drawing title and subheader fonts

	// Title
	float migos_title_box_y = migos_title_font.getLineHeight();
	ofRectangle migos_title_text_box = migos_title_font.getStringBoundingBox("Migos", 0, migos_title_box_y);
	int migos_title_x = (ofGetWindowWidth() / 2) - (migos_title_text_box.getWidth() / 2);
	int migos_title_y = migos_title_font.getLineHeight();
	migos_title_font.drawStringAsShapes("Migos", migos_title_x, migos_title_y);

	// Subheader
	float migos_subheader_box_y = migos_title_font.getLineHeight() + 50;
	ofRectangle migos_subheader_text_box = migos_subheader_font.getStringBoundingBox("Press the Key of the Adlib or Action you want to Use", 0, migos_subheader_box_y);
	int migos_subheader_x = (ofGetWindowWidth() / 2) - (migos_subheader_text_box.getWidth() / 2);
	int migos_subheader_y = migos_title_font.getLineHeight() + 50;
	migos_subheader_font.drawStringAsShapes("Press the Key of the Adlib or Action you want to Use", migos_subheader_x, migos_subheader_y);
	
	// Drawing image

	// Individual members Images
	migos_offset_image.draw((ofGetWindowWidth() * 0.25) - (migos_offset_image.getWidth() / 2), migos_title_font.getLineHeight() + 80);
	migos_quavo_image.draw((ofGetWindowWidth() * 0.50) - (migos_quavo_image.getWidth() / 2), migos_title_font.getLineHeight() + 80);
	migos_takeoff_image.draw((ofGetWindowWidth() * 0.75) - (migos_takeoff_image.getWidth() / 2), migos_title_font.getLineHeight() + 80);


	// Drawing adlib title Fonts

	// Offset: Offset
	float migos_offset_offset_title_box_y = migos_title_font.getLineHeight() + 350;
	ofRectangle migos_offset_offset_title_text_box = migos_offset_offset_title_font.getStringBoundingBox("Offset", 0, migos_offset_offset_title_box_y);
	int migos_offset_offset_title_x = (ofGetWindowWidth() * 0.25) - (migos_offset_offset_title_text_box.getWidth() / 2);
	int migos_offset_offset_title_y = migos_title_font.getLineHeight() + 350;
	migos_offset_offset_title_font.drawStringAsShapes("Offset", migos_offset_offset_title_x, migos_offset_offset_title_y);

	// Offset: Dab
	float migos_offset_dab_title_box_y = migos_title_font.getLineHeight() + 450;
	ofRectangle migos_offset_dab_title_text_box = migos_offset_dab_title_font.getStringBoundingBox("Dab", 0, migos_offset_dab_title_box_y);
	int migos_offset_dab_title_x = (ofGetWindowWidth() * 0.25) - (migos_offset_dab_title_text_box.getWidth() / 2);
	int migos_offset_dab_title_y = migos_title_font.getLineHeight() + 450;
	migos_offset_dab_title_font.drawStringAsShapes("Dab", migos_offset_dab_title_x, migos_offset_dab_title_y);

	// Offset: Hey
	float migos_offset_hey_title_box_y = migos_title_font.getLineHeight() + 550;
	ofRectangle migos_offset_hey_title_text_box = migos_offset_hey_title_font.getStringBoundingBox("Hey", 0, migos_offset_hey_title_box_y);
	int migos_offset_hey_title_x = (ofGetWindowWidth() * 0.25) - (migos_offset_hey_title_text_box.getWidth() / 2);
	int migos_offset_hey_title_y = migos_title_font.getLineHeight() + 550;
	migos_offset_hey_title_font.drawStringAsShapes("Hey", migos_offset_hey_title_x, migos_offset_hey_title_y);

	// Quavo: Quavo
	float migos_quavo_quavo_title_box_y = migos_title_font.getLineHeight() + 350;
	ofRectangle migos_quavo_quavo_title_text_box = migos_quavo_quavo_title_font.getStringBoundingBox("Quavo", 0, migos_quavo_quavo_title_box_y);
	int migos_quavo_quavo_title_x = (ofGetWindowWidth() * 0.50) - (migos_quavo_quavo_title_text_box.getWidth() / 2);
	int migos_quavo_quavo_title_y = migos_title_font.getLineHeight() + 350;
	migos_quavo_quavo_title_font.drawStringAsShapes("Quavo", migos_quavo_quavo_title_x, migos_quavo_quavo_title_y);

	// Quavo: Mama
	float migos_quavo_mama_title_box_y = migos_title_font.getLineHeight() + 450;
	ofRectangle migos_quavo_mama_title_text_box = migos_quavo_mama_title_font.getStringBoundingBox("Mama", 0, migos_quavo_mama_title_box_y);
	int migos_quavo_mama_title_x = (ofGetWindowWidth() * 0.50) - (migos_quavo_mama_title_text_box.getWidth() / 2);
	int migos_quavo_mama_title_y = migos_title_font.getLineHeight() + 450;
	migos_quavo_mama_title_font.drawStringAsShapes("Mama", migos_quavo_mama_title_x, migos_quavo_mama_title_y);

	// Quavo: Skrt Skrt
	float migos_quavo_skrt_skrt_title_box_y = migos_title_font.getLineHeight() + 550;
	ofRectangle migos_quavo_skrt_skrt_title_text_box = migos_quavo_skrt_skrt_title_font.getStringBoundingBox("Skrt Skrt", 0, migos_quavo_skrt_skrt_title_box_y);
	int migos_quavo_skrt_skrt_title_x = (ofGetWindowWidth() * 0.50) - (migos_quavo_skrt_skrt_title_text_box.getWidth() / 2);
	int migos_quavo_skrt_skrt_title_y = migos_title_font.getLineHeight() + 550;
	migos_quavo_skrt_skrt_title_font.drawStringAsShapes("Skrt Skrt", migos_quavo_skrt_skrt_title_x, migos_quavo_skrt_skrt_title_y);

	// Takeoff: Takeoff
	float migos_takeoff_takeoff_title_box_y = migos_title_font.getLineHeight() + 350;
	ofRectangle migos_takeoff_takeoff_title_text_box = migos_takeoff_takeoff_title_font.getStringBoundingBox("Takeoff", 0, migos_takeoff_takeoff_title_box_y);
	int migos_takeoff_takeoff_title_x = (ofGetWindowWidth() * 0.75) - (migos_takeoff_takeoff_title_text_box.getWidth() / 2);
	int migos_takeoff_takeoff_title_y = migos_title_font.getLineHeight() + 350;
	migos_takeoff_takeoff_title_font.drawStringAsShapes("Takeoff", migos_takeoff_takeoff_title_x, migos_takeoff_takeoff_title_y);

	// Takeoff: Money
	float migos_takeoff_money_title_box_y = migos_title_font.getLineHeight() + 450;
	ofRectangle migos_takeoff_money_title_text_box = migos_takeoff_money_title_font.getStringBoundingBox("Money", 0, migos_takeoff_money_title_box_y);
	int migos_takeoff_money_title_x = (ofGetWindowWidth() * 0.75) - (migos_takeoff_money_title_text_box.getWidth() / 2);
	int migos_takeoff_money_title_y = migos_title_font.getLineHeight() + 450;
	migos_takeoff_money_title_font.drawStringAsShapes("Money", migos_takeoff_money_title_x, migos_takeoff_money_title_y);

	// Takeoff: Migo
	float migos_takeoff_migo_title_box_y = migos_title_font.getLineHeight() + 550;
	ofRectangle migos_takeoff_migo_title_text_box = migos_takeoff_migo_title_font.getStringBoundingBox("Migo", 0, migos_takeoff_migo_title_box_y);
	int migos_takeoff_migo_title_x = (ofGetWindowWidth() * 0.75) - (migos_takeoff_migo_title_text_box.getWidth() / 2);
	int migos_takeoff_migo_title_y = migos_title_font.getLineHeight() + 550;
	migos_takeoff_migo_title_font.drawStringAsShapes("Migo", migos_takeoff_migo_title_x, migos_takeoff_migo_title_y);


	// Drawing key fonts

	// 1
	float migos_1_title_box_y = migos_title_font.getLineHeight() + 400;
	ofRectangle migos_1_title_text_box = migos_1_title_font.getStringBoundingBox("1", 0, migos_1_title_box_y);
	int migos_1_title_x = (ofGetWindowWidth() * 0.25) - (migos_1_title_text_box.getWidth() / 2);
	int migos_1_title_y = migos_title_font.getLineHeight() + 400;
	migos_1_title_font.drawStringAsShapes("1", migos_1_title_x, migos_1_title_y);

	// 2
	float migos_2_title_box_y = migos_title_font.getLineHeight() + 500;
	ofRectangle migos_2_title_text_box = migos_2_title_font.getStringBoundingBox("2", 0, migos_2_title_box_y);
	int migos_2_title_x = (ofGetWindowWidth() * 0.25) - (migos_2_title_text_box.getWidth() / 2);
	int migos_2_title_y = migos_title_font.getLineHeight() + 500;
	migos_2_title_font.drawStringAsShapes("2", migos_2_title_x, migos_2_title_y);

	// 3
	float migos_3_title_box_y = migos_title_font.getLineHeight() + 600;
	ofRectangle migos_3_title_text_box = migos_3_title_font.getStringBoundingBox("3", 0, migos_3_title_box_y);
	int migos_3_title_x = (ofGetWindowWidth() * 0.25) - (migos_3_title_text_box.getWidth() / 2);
	int migos_3_title_y = migos_title_font.getLineHeight() + 600;
	migos_3_title_font.drawStringAsShapes("3", migos_3_title_x, migos_3_title_y);

	// 4
	float migos_4_title_box_y = migos_title_font.getLineHeight() + 400;
	ofRectangle migos_4_title_text_box = migos_4_title_font.getStringBoundingBox("4", 0, migos_4_title_box_y);
	int migos_4_title_x = (ofGetWindowWidth() * 0.50) - (migos_4_title_text_box.getWidth() / 2);
	int migos_4_title_y = migos_title_font.getLineHeight() + 400;
	migos_4_title_font.drawStringAsShapes("4", migos_4_title_x, migos_4_title_y);

	// 5
	float migos_5_title_box_y = migos_title_font.getLineHeight() + 500;
	ofRectangle migos_5_title_text_box = migos_5_title_font.getStringBoundingBox("5", 0, migos_5_title_box_y);
	int migos_5_title_x = (ofGetWindowWidth() * 0.50) - (migos_5_title_text_box.getWidth() / 2);
	int migos_5_title_y = migos_title_font.getLineHeight() + 500;
	migos_5_title_font.drawStringAsShapes("5", migos_5_title_x, migos_5_title_y);

	// 6
	float migos_6_title_box_y = migos_title_font.getLineHeight() + 600;
	ofRectangle migos_6_title_text_box = migos_6_title_font.getStringBoundingBox("6", 0, migos_6_title_box_y);
	int migos_6_title_x = (ofGetWindowWidth() * 0.50) - (migos_6_title_text_box.getWidth() / 2);
	int migos_6_title_y = migos_title_font.getLineHeight() + 600;
	migos_6_title_font.drawStringAsShapes("6", migos_6_title_x, migos_6_title_y);

	// 7
	float migos_7_title_box_y = migos_title_font.getLineHeight() + 400;
	ofRectangle migos_7_title_text_box = migos_7_title_font.getStringBoundingBox("7", 0, migos_7_title_box_y);
	int migos_7_title_x = (ofGetWindowWidth() * 0.75) - (migos_7_title_text_box.getWidth() / 2);
	int migos_7_title_y = migos_title_font.getLineHeight() + 400;
	migos_7_title_font.drawStringAsShapes("7", migos_7_title_x, migos_7_title_y);

	// 8
	float migos_8_title_box_y = migos_title_font.getLineHeight() + 500;
	ofRectangle migos_8_title_text_box = migos_8_title_font.getStringBoundingBox("8", 0, migos_8_title_box_y);
	int migos_8_title_x = (ofGetWindowWidth() * 0.75) - (migos_8_title_text_box.getWidth() / 2);
	int migos_8_title_y = migos_title_font.getLineHeight() + 500;
	migos_8_title_font.drawStringAsShapes("8", migos_8_title_x, migos_8_title_y);

	// 9
	float migos_9_title_box_y = migos_title_font.getLineHeight() + 600;
	ofRectangle migos_9_title_text_box = migos_9_title_font.getStringBoundingBox("9", 0, migos_9_title_box_y);
	int migos_9_title_x = (ofGetWindowWidth() * 0.75) - (migos_9_title_text_box.getWidth() / 2);
	int migos_9_title_y = migos_title_font.getLineHeight() + 600;
	migos_9_title_font.drawStringAsShapes("9", migos_9_title_x, migos_9_title_y);


	// Drawing actin title and key fonts

	// Clear
	float migos_clear_title_box_y = migos_title_font.getLineHeight() + 450;
	ofRectangle migos_clear_title_text_box = migos_clear_title_font.getStringBoundingBox("Clear", 0, migos_clear_title_box_y);
	int migos_clear_title_x = (ofGetWindowWidth() * 0.9) - (migos_clear_title_text_box.getWidth() / 2);
	int migos_clear_title_y = migos_title_font.getLineHeight() + 450;
	migos_clear_title_font.drawStringAsShapes("Clear", migos_clear_title_x, migos_clear_title_y);

	// 0
	float migos_0_title_box_y = migos_title_font.getLineHeight() + 500;
	ofRectangle migos_0_title_text_box = migos_0_title_font.getStringBoundingBox("0", 0, migos_0_title_box_y);
	int migos_0_title_x = (ofGetWindowWidth() * 0.9) - (migos_0_title_text_box.getWidth() / 2);
	int migos_0_title_y = migos_title_font.getLineHeight() + 500;
	migos_0_title_font.drawStringAsShapes("0", migos_0_title_x, migos_0_title_y);

	// Back
	float migos_back_title_box_y = migos_title_font.getLineHeight() + 550;
	ofRectangle migos_back_title_text_box = migos_back_title_font.getStringBoundingBox("Back", 0, migos_back_title_box_y);
	int migos_back_title_x = (ofGetWindowWidth() * 0.9) - (migos_back_title_text_box.getWidth() / 2);
	int migos_back_title_y = migos_title_font.getLineHeight() + 550;
	migos_back_title_font.drawStringAsShapes("Back", migos_back_title_x, migos_back_title_y);

	// B
	float migos_b_title_box_y = migos_title_font.getLineHeight() + 600;
	ofRectangle migos_b_title_text_box = migos_b_title_font.getStringBoundingBox("B", 0, migos_b_title_box_y);
	int migos_b_title_x = (ofGetWindowWidth() * 0.9) - (migos_b_title_text_box.getWidth() / 2);
	int migos_b_title_y = migos_title_font.getLineHeight() + 600;
	migos_b_title_font.drawStringAsShapes("B", migos_b_title_x, migos_b_title_y);

}