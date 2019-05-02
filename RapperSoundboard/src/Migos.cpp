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
	migos_offset_image.load("Images\\Offset_Image.jpg");;
	migos_quavo_image.load("Images\\Quavo_Image.jpg");;
	migos_takeoff_image.load("Images\\Takeoff_Image.jpg");

	migos_offset_offset_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_offset_dab_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_offset_hey_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_quavo_quavo_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_quavo_mama_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_quavo_skrt_skrt_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_takeoff_takeoff_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_takeoff_money_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_takeoff_migo_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	migos_1_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_2_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_3_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_4_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_5_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_6_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_7_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_8_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_9_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	migos_clear_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_0_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_back_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	migos_b_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
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
	ofRectangle migos_subheader_text_box = migos_subheader_font.getStringBoundingBox("Press the Key of the Adlib or Action you want to Use", 0, migos_subheader_box_y);
	int migos_subheader_x = (ofGetWindowWidth() / 2) - (migos_subheader_text_box.getWidth() / 2);
	int migos_subheader_y = migos_title_font.getLineHeight() + 50;
	migos_subheader_font.drawStringAsShapes("Press the Key of the Adlib or Action you want to Use", migos_subheader_x, migos_subheader_y);
	
	// Migos Images
	migos_offset_image.draw((ofGetWindowWidth() * 0.25) - (migos_offset_image.getWidth() / 2), migos_title_font.getLineHeight() + 80);
	migos_quavo_image.draw((ofGetWindowWidth() * 0.50) - (migos_quavo_image.getWidth() / 2), migos_title_font.getLineHeight() + 80);
	migos_takeoff_image.draw((ofGetWindowWidth() * 0.75) - (migos_takeoff_image.getWidth() / 2), migos_title_font.getLineHeight() + 80);


	float migos_offset_offset_title_box_y = migos_title_font.getLineHeight() + 350;
	ofRectangle migos_offset_offset_title_text_box = migos_offset_offset_title_font.getStringBoundingBox("Offset", 0, migos_offset_offset_title_box_y);
	int migos_offset_offset_title_x = (ofGetWindowWidth() * 0.25) - (migos_offset_offset_title_text_box.getWidth() / 2);
	int migos_offset_offset_title_y = migos_title_font.getLineHeight() + 350;
	migos_offset_offset_title_font.drawStringAsShapes("Offset", migos_offset_offset_title_x, migos_offset_offset_title_y);

	float migos_offset_dab_title_box_y = migos_title_font.getLineHeight() + 450;
	ofRectangle migos_offset_dab_title_text_box = migos_offset_dab_title_font.getStringBoundingBox("Dab", 0, migos_offset_dab_title_box_y);
	int migos_offset_dab_title_x = (ofGetWindowWidth() * 0.25) - (migos_offset_dab_title_text_box.getWidth() / 2);
	int migos_offset_dab_title_y = migos_title_font.getLineHeight() + 450;
	migos_offset_dab_title_font.drawStringAsShapes("Dab", migos_offset_dab_title_x, migos_offset_dab_title_y);

	float migos_offset_hey_title_box_y = migos_title_font.getLineHeight() + 550;
	ofRectangle migos_offset_hey_title_text_box = migos_offset_hey_title_font.getStringBoundingBox("Hey", 0, migos_offset_hey_title_box_y);
	int migos_offset_hey_title_x = (ofGetWindowWidth() * 0.25) - (migos_offset_hey_title_text_box.getWidth() / 2);
	int migos_offset_hey_title_y = migos_title_font.getLineHeight() + 550;
	migos_offset_hey_title_font.drawStringAsShapes("Hey", migos_offset_hey_title_x, migos_offset_hey_title_y);

	float migos_quavo_quavo_title_box_y = migos_title_font.getLineHeight() + 350;
	ofRectangle migos_quavo_quavo_title_text_box = migos_quavo_quavo_title_font.getStringBoundingBox("Quavo", 0, migos_quavo_quavo_title_box_y);
	int migos_quavo_quavo_title_x = (ofGetWindowWidth() * 0.50) - (migos_quavo_quavo_title_text_box.getWidth() / 2);
	int migos_quavo_quavo_title_y = migos_title_font.getLineHeight() + 350;
	migos_quavo_quavo_title_font.drawStringAsShapes("Quavo", migos_quavo_quavo_title_x, migos_quavo_quavo_title_y);

	float migos_quavo_mama_title_box_y = migos_title_font.getLineHeight() + 450;
	ofRectangle migos_quavo_mama_title_text_box = migos_quavo_mama_title_font.getStringBoundingBox("Mama", 0, migos_quavo_mama_title_box_y);
	int migos_quavo_mama_title_x = (ofGetWindowWidth() * 0.50) - (migos_quavo_mama_title_text_box.getWidth() / 2);
	int migos_quavo_mama_title_y = migos_title_font.getLineHeight() + 450;
	migos_quavo_mama_title_font.drawStringAsShapes("Mama", migos_quavo_mama_title_x, migos_quavo_mama_title_y);

	float migos_quavo_skrt_skrt_title_box_y = migos_title_font.getLineHeight() + 550;
	ofRectangle migos_quavo_skrt_skrt_title_text_box = migos_quavo_skrt_skrt_title_font.getStringBoundingBox("Skrt Skrt", 0, migos_quavo_skrt_skrt_title_box_y);
	int migos_quavo_skrt_skrt_title_x = (ofGetWindowWidth() * 0.50) - (migos_quavo_skrt_skrt_title_text_box.getWidth() / 2);
	int migos_quavo_skrt_skrt_title_y = migos_title_font.getLineHeight() + 550;
	migos_quavo_skrt_skrt_title_font.drawStringAsShapes("Skrt Skrt", migos_quavo_skrt_skrt_title_x, migos_quavo_skrt_skrt_title_y);

	float migos_takeoff_takeoff_title_box_y = migos_title_font.getLineHeight() + 350;
	ofRectangle migos_takeoff_takeoff_title_text_box = migos_takeoff_takeoff_title_font.getStringBoundingBox("Takeoff", 0, migos_takeoff_takeoff_title_box_y);
	int migos_takeoff_takeoff_title_x = (ofGetWindowWidth() * 0.75) - (migos_takeoff_takeoff_title_text_box.getWidth() / 2);
	int migos_takeoff_takeoff_title_y = migos_title_font.getLineHeight() + 350;
	migos_takeoff_takeoff_title_font.drawStringAsShapes("Takeoff", migos_takeoff_takeoff_title_x, migos_takeoff_takeoff_title_y);

	float migos_takeoff_money_title_box_y = migos_title_font.getLineHeight() + 450;
	ofRectangle migos_takeoff_money_title_text_box = migos_takeoff_money_title_font.getStringBoundingBox("Money", 0, migos_takeoff_money_title_box_y);
	int migos_takeoff_money_title_x = (ofGetWindowWidth() * 0.75) - (migos_takeoff_money_title_text_box.getWidth() / 2);
	int migos_takeoff_money_title_y = migos_title_font.getLineHeight() + 450;
	migos_takeoff_money_title_font.drawStringAsShapes("Money", migos_takeoff_money_title_x, migos_takeoff_money_title_y);

	float migos_takeoff_migo_title_box_y = migos_title_font.getLineHeight() + 550;
	ofRectangle migos_takeoff_migo_title_text_box = migos_takeoff_migo_title_font.getStringBoundingBox("Migo", 0, migos_takeoff_migo_title_box_y);
	int migos_takeoff_migo_title_x = (ofGetWindowWidth() * 0.75) - (migos_takeoff_migo_title_text_box.getWidth() / 2);
	int migos_takeoff_migo_title_y = migos_title_font.getLineHeight() + 550;
	migos_takeoff_migo_title_font.drawStringAsShapes("Migo", migos_takeoff_migo_title_x, migos_takeoff_migo_title_y);


	float migos_1_title_box_y = migos_title_font.getLineHeight() + 400;
	ofRectangle migos_1_title_text_box = migos_1_title_font.getStringBoundingBox("1", 0, migos_1_title_box_y);
	int migos_1_title_x = (ofGetWindowWidth() * 0.25) - (migos_1_title_text_box.getWidth() / 2);
	int migos_1_title_y = migos_title_font.getLineHeight() + 400;
	migos_1_title_font.drawStringAsShapes("1", migos_1_title_x, migos_1_title_y);

	float migos_2_title_box_y = migos_title_font.getLineHeight() + 500;
	ofRectangle migos_2_title_text_box = migos_2_title_font.getStringBoundingBox("2", 0, migos_2_title_box_y);
	int migos_2_title_x = (ofGetWindowWidth() * 0.25) - (migos_2_title_text_box.getWidth() / 2);
	int migos_2_title_y = migos_title_font.getLineHeight() + 500;
	migos_2_title_font.drawStringAsShapes("2", migos_2_title_x, migos_2_title_y);

	float migos_3_title_box_y = migos_title_font.getLineHeight() + 600;
	ofRectangle migos_3_title_text_box = migos_3_title_font.getStringBoundingBox("3", 0, migos_3_title_box_y);
	int migos_3_title_x = (ofGetWindowWidth() * 0.25) - (migos_3_title_text_box.getWidth() / 2);
	int migos_3_title_y = migos_title_font.getLineHeight() + 600;
	migos_3_title_font.drawStringAsShapes("3", migos_3_title_x, migos_3_title_y);

	float migos_4_title_box_y = migos_title_font.getLineHeight() + 400;
	ofRectangle migos_4_title_text_box = migos_4_title_font.getStringBoundingBox("4", 0, migos_4_title_box_y);
	int migos_4_title_x = (ofGetWindowWidth() * 0.50) - (migos_4_title_text_box.getWidth() / 2);
	int migos_4_title_y = migos_title_font.getLineHeight() + 400;
	migos_4_title_font.drawStringAsShapes("4", migos_4_title_x, migos_4_title_y);

	float migos_5_title_box_y = migos_title_font.getLineHeight() + 500;
	ofRectangle migos_5_title_text_box = migos_5_title_font.getStringBoundingBox("5", 0, migos_5_title_box_y);
	int migos_5_title_x = (ofGetWindowWidth() * 0.50) - (migos_5_title_text_box.getWidth() / 2);
	int migos_5_title_y = migos_title_font.getLineHeight() + 500;
	migos_5_title_font.drawStringAsShapes("5", migos_5_title_x, migos_5_title_y);

	float migos_6_title_box_y = migos_title_font.getLineHeight() + 600;
	ofRectangle migos_6_title_text_box = migos_6_title_font.getStringBoundingBox("6", 0, migos_6_title_box_y);
	int migos_6_title_x = (ofGetWindowWidth() * 0.50) - (migos_6_title_text_box.getWidth() / 2);
	int migos_6_title_y = migos_title_font.getLineHeight() + 600;
	migos_6_title_font.drawStringAsShapes("6", migos_6_title_x, migos_6_title_y);

	float migos_7_title_box_y = migos_title_font.getLineHeight() + 400;
	ofRectangle migos_7_title_text_box = migos_7_title_font.getStringBoundingBox("7", 0, migos_7_title_box_y);
	int migos_7_title_x = (ofGetWindowWidth() * 0.75) - (migos_7_title_text_box.getWidth() / 2);
	int migos_7_title_y = migos_title_font.getLineHeight() + 400;
	migos_7_title_font.drawStringAsShapes("7", migos_7_title_x, migos_7_title_y);

	float migos_8_title_box_y = migos_title_font.getLineHeight() + 500;
	ofRectangle migos_8_title_text_box = migos_8_title_font.getStringBoundingBox("8", 0, migos_8_title_box_y);
	int migos_8_title_x = (ofGetWindowWidth() * 0.75) - (migos_8_title_text_box.getWidth() / 2);
	int migos_8_title_y = migos_title_font.getLineHeight() + 500;
	migos_8_title_font.drawStringAsShapes("8", migos_8_title_x, migos_8_title_y);

	float migos_9_title_box_y = migos_title_font.getLineHeight() + 600;
	ofRectangle migos_9_title_text_box = migos_9_title_font.getStringBoundingBox("9", 0, migos_9_title_box_y);
	int migos_9_title_x = (ofGetWindowWidth() * 0.75) - (migos_9_title_text_box.getWidth() / 2);
	int migos_9_title_y = migos_title_font.getLineHeight() + 600;
	migos_9_title_font.drawStringAsShapes("9", migos_9_title_x, migos_9_title_y);


	float migos_clear_title_box_y = migos_title_font.getLineHeight() + 450;
	ofRectangle migos_clear_title_text_box = migos_clear_title_font.getStringBoundingBox("Clear", 0, migos_clear_title_box_y);
	int migos_clear_title_x = (ofGetWindowWidth() * 0.9) - (migos_clear_title_text_box.getWidth() / 2);
	int migos_clear_title_y = migos_title_font.getLineHeight() + 450;
	migos_clear_title_font.drawStringAsShapes("Clear", migos_clear_title_x, migos_clear_title_y);

	float migos_0_title_box_y = migos_title_font.getLineHeight() + 500;
	ofRectangle migos_0_title_text_box = migos_0_title_font.getStringBoundingBox("0", 0, migos_0_title_box_y);
	int migos_0_title_x = (ofGetWindowWidth() * 0.9) - (migos_0_title_text_box.getWidth() / 2);
	int migos_0_title_y = migos_title_font.getLineHeight() + 500;
	migos_0_title_font.drawStringAsShapes("0", migos_0_title_x, migos_0_title_y);

	float migos_back_title_box_y = migos_title_font.getLineHeight() + 550;
	ofRectangle migos_back_title_text_box = migos_back_title_font.getStringBoundingBox("Back", 0, migos_back_title_box_y);
	int migos_back_title_x = (ofGetWindowWidth() * 0.9) - (migos_back_title_text_box.getWidth() / 2);
	int migos_back_title_y = migos_title_font.getLineHeight() + 550;
	migos_back_title_font.drawStringAsShapes("Back", migos_back_title_x, migos_back_title_y);

	float migos_b_title_box_y = migos_title_font.getLineHeight() + 600;
	ofRectangle migos_b_title_text_box = migos_b_title_font.getStringBoundingBox("B", 0, migos_b_title_box_y);
	int migos_b_title_x = (ofGetWindowWidth() * 0.9) - (migos_b_title_text_box.getWidth() / 2);
	int migos_b_title_y = migos_title_font.getLineHeight() + 600;
	migos_b_title_font.drawStringAsShapes("B", migos_b_title_x, migos_b_title_y);
}