#include "Producers.h"


Producers::Producers()
{
	london_on_da_track.load("Adlib Files\\Producers\\London_On_Da_Track.mp3");
	metro_boomin.load("Adlib Files\\Producers\\Metro_Boomin.mp3");
	mike_will_madeit.load("Adlib Files\\Producers\\Mike_WiLL_Made-it.mp3");
	murda_beatz.load("Adlib Files\\Producers\\Murda Beatz.mp3");
	pierre_bourne.load("Adlib Files\\Producers\\Pierre_Bourne.mp3");

	producers_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	producers_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);

	producers_image.load("Images\\Producers_Image.jpg");

	producers_london_on_da_track_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_metro_boomin_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_mike_will_madeit_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_murda_beatz_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_pierre_bourne_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	producers_1_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_2_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_3_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_4_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_5_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	producers_clear_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_0_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_back_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_b_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
}


Producers::~Producers()
{
}

ofSoundPlayer Producers::GetLondonOnDaTrack() {
	return london_on_da_track;
}

ofSoundPlayer Producers::GetMetroBoomin() {
	return metro_boomin;
}

ofSoundPlayer Producers::GetMikeWillMadeit() {
	return mike_will_madeit;
}

ofSoundPlayer Producers::GetMurdaBeatz() {
	return murda_beatz;
}

ofSoundPlayer Producers::GetPierreBourne() {
	return pierre_bourne;
}

ofImage Producers::GetProducersImage() {
	return producers_image;
}

void Producers::DrawProducersPage() {

	// Main Title
	float producers_title_box_y = producers_title_font.getLineHeight();
	ofRectangle producers_title_text_box = producers_title_font.getStringBoundingBox("Producers", 0, producers_title_box_y);
	int producers_title_x = (ofGetWindowWidth() / 2) - (producers_title_text_box.getWidth() / 2);
	int producers_title_y = producers_title_font.getLineHeight();
	producers_title_font.drawStringAsShapes("Producers", producers_title_x, producers_title_y);

	// Main Subheader
	float producers_subheader_box_y = producers_title_font.getLineHeight() + 50;
	ofRectangle producers_subheader_text_box = producers_subheader_font.getStringBoundingBox("Press the Key of the Adlib or Action you want to Use", 0, producers_subheader_box_y);
	int producers_subheader_x = (ofGetWindowWidth() / 2) - (producers_subheader_text_box.getWidth() / 2);
	int producers_subheader_y = producers_title_font.getLineHeight() + 50;
	producers_subheader_font.drawStringAsShapes("Press the Key of the Adlib or Action you want to Use", producers_subheader_x, producers_subheader_y);


	producers_image.draw((ofGetWindowWidth() / 2) - (producers_image.getWidth() / 2), producers_title_font.getLineHeight() + 80);


	float producers_london_on_da_track_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle producers_london_on_da_track_title_text_box = producers_london_on_da_track_title_font.getStringBoundingBox("London on da Track", 0, producers_london_on_da_track_title_box_y);
	int producers_london_on_da_track_title_x = (ofGetWindowWidth() * 0.25) - (producers_london_on_da_track_title_text_box.getWidth() / 2);
	int producers_london_on_da_track_title_y = producers_title_font.getLineHeight() + 350;
	producers_london_on_da_track_title_font.drawStringAsShapes("London on da Track", producers_london_on_da_track_title_x, producers_london_on_da_track_title_y);

	float producers_metro_boomin_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle producers_metro_boomin_title_text_box = producers_metro_boomin_title_font.getStringBoundingBox("Metro Boomin", 0, producers_metro_boomin_title_box_y);
	int producers_metro_boomin_title_x = (ofGetWindowWidth() * 0.50) - (producers_metro_boomin_title_text_box.getWidth() / 2);
	int producers_metro_boomin_title_y = producers_title_font.getLineHeight() + 350;
	producers_metro_boomin_title_font.drawStringAsShapes("Metro Boomin", producers_metro_boomin_title_x, producers_metro_boomin_title_y);

	float producers_mike_will_madeit_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle producers_mike_will_madeit_title_text_box = producers_mike_will_madeit_title_font.getStringBoundingBox("Mike WiLL Made-It", 0, producers_mike_will_madeit_title_box_y);
	int producers_mike_will_madeit_title_x = (ofGetWindowWidth() * 0.75) - (producers_mike_will_madeit_title_text_box.getWidth() / 2);
	int producers_mike_will_madeit_title_y = producers_title_font.getLineHeight() + 350;
	producers_mike_will_madeit_title_font.drawStringAsShapes("Mike WiLL Made-It", producers_mike_will_madeit_title_x, producers_mike_will_madeit_title_y);

	float producers_murda_beatz_title_box_y = producers_title_font.getLineHeight() + 450;
	ofRectangle producers_murda_beatz_title_text_box = producers_murda_beatz_title_font.getStringBoundingBox("Murda Beatz", 0, producers_murda_beatz_title_box_y);
	int producers_murda_beatz_title_x = (ofGetWindowWidth() * 0.25) - (producers_murda_beatz_title_text_box.getWidth() / 2);
	int producers_murda_beatz_title_y = producers_title_font.getLineHeight() + 450;
	producers_murda_beatz_title_font.drawStringAsShapes("Murda Beatz", producers_murda_beatz_title_x, producers_murda_beatz_title_y);

	float producers_pierre_bourne_title_box_y = producers_title_font.getLineHeight() + 450;
	ofRectangle producers_pierre_bourne_title_text_box = producers_pierre_bourne_title_font.getStringBoundingBox("Pi'erre Bourne", 0, producers_pierre_bourne_title_box_y);
	int producers_pierre_bourne_title_x = (ofGetWindowWidth() * 0.75) - (producers_pierre_bourne_title_text_box.getWidth() / 2);
	int producers_pierre_bourne_title_y = producers_title_font.getLineHeight() + 450;
	producers_pierre_bourne_title_font.drawStringAsShapes("Pi'erre Bourne", producers_pierre_bourne_title_x, producers_pierre_bourne_title_y);


	float producers_1_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle producers_1_title_text_box = producers_1_title_font.getStringBoundingBox("1", 0, producers_1_title_box_y);
	int producers_1_title_x = (ofGetWindowWidth() * 0.25) - (producers_1_title_text_box.getWidth() / 2);
	int producers_1_title_y = producers_title_font.getLineHeight() + 400;
	producers_1_title_font.drawStringAsShapes("1", producers_1_title_x, producers_1_title_y);

	float producers_2_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle producers_2_title_text_box = producers_2_title_font.getStringBoundingBox("2", 0, producers_2_title_box_y);
	int producers_2_title_x = (ofGetWindowWidth() * 0.50) - (producers_2_title_text_box.getWidth() / 2);
	int producers_2_title_y = producers_title_font.getLineHeight() + 400;
	producers_2_title_font.drawStringAsShapes("2", producers_2_title_x, producers_2_title_y);

	float producers_3_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle producers_3_title_text_box = producers_3_title_font.getStringBoundingBox("3", 0, producers_3_title_box_y);
	int producers_3_title_x = (ofGetWindowWidth() * 0.75) - (producers_3_title_text_box.getWidth() / 2);
	int producers_3_title_y = producers_title_font.getLineHeight() + 400;
	producers_3_title_font.drawStringAsShapes("3", producers_3_title_x, producers_3_title_y);

	float producers_4_title_box_y = producers_title_font.getLineHeight() + 500;
	ofRectangle producers_4_title_text_box = producers_4_title_font.getStringBoundingBox("4", 0, producers_4_title_box_y);
	int producers_4_title_x = (ofGetWindowWidth() * 0.25) - (producers_4_title_text_box.getWidth() / 2);
	int producers_4_title_y = producers_title_font.getLineHeight() + 500;
	producers_4_title_font.drawStringAsShapes("4", producers_4_title_x, producers_4_title_y);

	float producers_5_title_box_y = producers_title_font.getLineHeight() + 500;
	ofRectangle producers_5_title_text_box = producers_5_title_font.getStringBoundingBox("5", 0, producers_5_title_box_y);
	int producers_5_title_x = (ofGetWindowWidth() * 0.75) - (producers_5_title_text_box.getWidth() / 2);
	int producers_5_title_y = producers_title_font.getLineHeight() + 500;
	producers_5_title_font.drawStringAsShapes("5", producers_5_title_x, producers_5_title_y);
	
	
	float producers_clear_title_box_y = producers_title_font.getLineHeight() + 450;
	ofRectangle producers_clear_title_text_box = producers_clear_title_font.getStringBoundingBox("Clear", 0, producers_clear_title_box_y);
	int producers_clear_title_x = (ofGetWindowWidth() * 0.9) - (producers_clear_title_text_box.getWidth() / 2);
	int producers_clear_title_y = producers_title_font.getLineHeight() + 450;
	producers_clear_title_font.drawStringAsShapes("Clear", producers_clear_title_x, producers_clear_title_y);

	float producers_0_title_box_y = producers_title_font.getLineHeight() + 500;
	ofRectangle producers_0_title_text_box = producers_0_title_font.getStringBoundingBox("0", 0, producers_0_title_box_y);
	int producers_0_title_x = (ofGetWindowWidth() * 0.9) - (producers_0_title_text_box.getWidth() / 2);
	int producers_0_title_y = producers_title_font.getLineHeight() + 500;
	producers_0_title_font.drawStringAsShapes("0", producers_0_title_x, producers_0_title_y);

	float producers_back_title_box_y = producers_title_font.getLineHeight() + 550;
	ofRectangle producers_back_title_text_box = producers_back_title_font.getStringBoundingBox("Back", 0, producers_back_title_box_y);
	int producers_back_title_x = (ofGetWindowWidth() * 0.9) - (producers_back_title_text_box.getWidth() / 2);
	int producers_back_title_y = producers_title_font.getLineHeight() + 550;
	producers_back_title_font.drawStringAsShapes("Back", producers_back_title_x, producers_back_title_y);

	float producers_b_title_box_y = producers_title_font.getLineHeight() + 600;
	ofRectangle producers_b_title_text_box = producers_b_title_font.getStringBoundingBox("B", 0, producers_b_title_box_y);
	int producers_b_title_x = (ofGetWindowWidth() * 0.9) - (producers_b_title_text_box.getWidth() / 2);
	int producers_b_title_y = producers_title_font.getLineHeight() + 600;
	producers_b_title_font.drawStringAsShapes("B", producers_b_title_x, producers_b_title_y);
}

