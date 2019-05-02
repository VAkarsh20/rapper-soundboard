#include "Producers.h"


Producers::Producers()
{
	// Loading mp3s for the adlib sound fields
	london_on_da_track.load("Adlib Files\\Producers\\London_On_Da_Track.mp3");
	metro_boomin.load("Adlib Files\\Producers\\Metro_Boomin.mp3");
	mike_will_madeit.load("Adlib Files\\Producers\\Mike_WiLL_Made-it.mp3");
	murda_beatz.load("Adlib Files\\Producers\\Murda Beatz.mp3");
	pierre_bourne.load("Adlib Files\\Producers\\Pierre_Bourne.mp3");

	// Loading the main title and subheader fonts
	producers_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	producers_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Loading the image
	producers_image.load("Images\\Producers_Image.jpg");

	// Loading the adlib titles fonts
	producers_london_on_da_track_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_metro_boomin_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_mike_will_madeit_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_murda_beatz_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_pierre_bourne_title_font.load("Righteous-Regular.ttf", 20, true, true, true);

	// Loading the adlib key fonts
	producers_1_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_2_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_3_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_4_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_5_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	
	// Action title and key fonts
	producers_clear_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_0_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_back_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
	producers_b_title_font.load("Righteous-Regular.ttf", 20, true, true, true);
}

/*
	Destructor for this object
*/
Producers::~Producers()
{
}

/*
	Getter for the London on da Track producer tag sound

	@return - london_on_da_track, an ofSoundplayer field that is the London on da Track producer tag
*/
ofSoundPlayer Producers::GetLondonOnDaTrack() {
	return london_on_da_track;
}

/*
	Getter for the Metro Boomin producer tag sound

	@return - metro_boomin, an ofSoundplayer field that is the Metro Boomin producer tag
*/
ofSoundPlayer Producers::GetMetroBoomin() {
	return metro_boomin;
}

/*
	Getter for the Mike WiLL Made-it producer tag sound

	@return - mike_will_madeit, an ofSoundplayer field that is the Mike WiLL Made-it producer tag
*/
ofSoundPlayer Producers::GetMikeWillMadeit() {
	return mike_will_madeit;
}

/*
	Getter for the Murda Beatz producer tag sound

	@return - murda_beatz, an ofSoundplayer field that is the Murda Beatz producer tag
*/
ofSoundPlayer Producers::GetMurdaBeatz() {
	return murda_beatz;
}

/*
	Getter for the P'ierre Bourne producer tag sound

	@return - pierre_bourne, an ofSoundplayer field that is the P'ierre Bourne producer tag
*/
ofSoundPlayer Producers::GetPierreBourne() {
	return pierre_bourne;
}

/*
	Getter for the the producer Image

	@return - producers_image, an ofImage field that is an represents the producers
*/
ofImage Producers::GetProducersImage() {
	return producers_image;
}

/*
	Draws the Producers page for the application when called
*/
void Producers::DrawProducersPage() {

	// Drawing title and subheader fonts

	// Title
	float producers_title_box_y = producers_title_font.getLineHeight();
	ofRectangle producers_title_text_box = producers_title_font.getStringBoundingBox("Producers", 0, producers_title_box_y);
	int producers_title_x = (ofGetWindowWidth() / 2) - (producers_title_text_box.getWidth() / 2);
	int producers_title_y = producers_title_font.getLineHeight();
	producers_title_font.drawStringAsShapes("Producers", producers_title_x, producers_title_y);

	// Subheader
	float producers_subheader_box_y = producers_title_font.getLineHeight() + 50;
	ofRectangle producers_subheader_text_box = producers_subheader_font.getStringBoundingBox("Press the Key of the Adlib or Action you want to Use", 0, producers_subheader_box_y);
	int producers_subheader_x = (ofGetWindowWidth() / 2) - (producers_subheader_text_box.getWidth() / 2);
	int producers_subheader_y = producers_title_font.getLineHeight() + 50;
	producers_subheader_font.drawStringAsShapes("Press the Key of the Adlib or Action you want to Use", producers_subheader_x, producers_subheader_y);


	// Drawing image

	// Producer Image
	producers_image.draw((ofGetWindowWidth() / 2) - (producers_image.getWidth() / 2), producers_title_font.getLineHeight() + 80);


	// Drawing adlib title Fonts

	// London on da Track
	float producers_london_on_da_track_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle producers_london_on_da_track_title_text_box = producers_london_on_da_track_title_font.getStringBoundingBox("London on da Track", 0, producers_london_on_da_track_title_box_y);
	int producers_london_on_da_track_title_x = (ofGetWindowWidth() * 0.25) - (producers_london_on_da_track_title_text_box.getWidth() / 2);
	int producers_london_on_da_track_title_y = producers_title_font.getLineHeight() + 350;
	producers_london_on_da_track_title_font.drawStringAsShapes("London on da Track", producers_london_on_da_track_title_x, producers_london_on_da_track_title_y);

	// Metro Boomin
	float producers_metro_boomin_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle producers_metro_boomin_title_text_box = producers_metro_boomin_title_font.getStringBoundingBox("Metro Boomin", 0, producers_metro_boomin_title_box_y);
	int producers_metro_boomin_title_x = (ofGetWindowWidth() * 0.50) - (producers_metro_boomin_title_text_box.getWidth() / 2);
	int producers_metro_boomin_title_y = producers_title_font.getLineHeight() + 350;
	producers_metro_boomin_title_font.drawStringAsShapes("Metro Boomin", producers_metro_boomin_title_x, producers_metro_boomin_title_y);

	// Mike WiLL Made-it
	float producers_mike_will_madeit_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle producers_mike_will_madeit_title_text_box = producers_mike_will_madeit_title_font.getStringBoundingBox("Mike WiLL Made-It", 0, producers_mike_will_madeit_title_box_y);
	int producers_mike_will_madeit_title_x = (ofGetWindowWidth() * 0.75) - (producers_mike_will_madeit_title_text_box.getWidth() / 2);
	int producers_mike_will_madeit_title_y = producers_title_font.getLineHeight() + 350;
	producers_mike_will_madeit_title_font.drawStringAsShapes("Mike WiLL Made-It", producers_mike_will_madeit_title_x, producers_mike_will_madeit_title_y);

	// Murda Beatz
	float producers_murda_beatz_title_box_y = producers_title_font.getLineHeight() + 450;
	ofRectangle producers_murda_beatz_title_text_box = producers_murda_beatz_title_font.getStringBoundingBox("Murda Beatz", 0, producers_murda_beatz_title_box_y);
	int producers_murda_beatz_title_x = (ofGetWindowWidth() * 0.25) - (producers_murda_beatz_title_text_box.getWidth() / 2);
	int producers_murda_beatz_title_y = producers_title_font.getLineHeight() + 450;
	producers_murda_beatz_title_font.drawStringAsShapes("Murda Beatz", producers_murda_beatz_title_x, producers_murda_beatz_title_y);

	// P'ierre Bourne
	float producers_pierre_bourne_title_box_y = producers_title_font.getLineHeight() + 450;
	ofRectangle producers_pierre_bourne_title_text_box = producers_pierre_bourne_title_font.getStringBoundingBox("Pi'erre Bourne", 0, producers_pierre_bourne_title_box_y);
	int producers_pierre_bourne_title_x = (ofGetWindowWidth() * 0.75) - (producers_pierre_bourne_title_text_box.getWidth() / 2);
	int producers_pierre_bourne_title_y = producers_title_font.getLineHeight() + 450;
	producers_pierre_bourne_title_font.drawStringAsShapes("Pi'erre Bourne", producers_pierre_bourne_title_x, producers_pierre_bourne_title_y);


	// Drawing key fonts

	// 1
	float producers_1_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle producers_1_title_text_box = producers_1_title_font.getStringBoundingBox("1", 0, producers_1_title_box_y);
	int producers_1_title_x = (ofGetWindowWidth() * 0.25) - (producers_1_title_text_box.getWidth() / 2);
	int producers_1_title_y = producers_title_font.getLineHeight() + 400;
	producers_1_title_font.drawStringAsShapes("1", producers_1_title_x, producers_1_title_y);

	// 2
	float producers_2_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle producers_2_title_text_box = producers_2_title_font.getStringBoundingBox("2", 0, producers_2_title_box_y);
	int producers_2_title_x = (ofGetWindowWidth() * 0.50) - (producers_2_title_text_box.getWidth() / 2);
	int producers_2_title_y = producers_title_font.getLineHeight() + 400;
	producers_2_title_font.drawStringAsShapes("2", producers_2_title_x, producers_2_title_y);

	// 3
	float producers_3_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle producers_3_title_text_box = producers_3_title_font.getStringBoundingBox("3", 0, producers_3_title_box_y);
	int producers_3_title_x = (ofGetWindowWidth() * 0.75) - (producers_3_title_text_box.getWidth() / 2);
	int producers_3_title_y = producers_title_font.getLineHeight() + 400;
	producers_3_title_font.drawStringAsShapes("3", producers_3_title_x, producers_3_title_y);

	// 4
	float producers_4_title_box_y = producers_title_font.getLineHeight() + 500;
	ofRectangle producers_4_title_text_box = producers_4_title_font.getStringBoundingBox("4", 0, producers_4_title_box_y);
	int producers_4_title_x = (ofGetWindowWidth() * 0.25) - (producers_4_title_text_box.getWidth() / 2);
	int producers_4_title_y = producers_title_font.getLineHeight() + 500;
	producers_4_title_font.drawStringAsShapes("4", producers_4_title_x, producers_4_title_y);

	// 5
	float producers_5_title_box_y = producers_title_font.getLineHeight() + 500;
	ofRectangle producers_5_title_text_box = producers_5_title_font.getStringBoundingBox("5", 0, producers_5_title_box_y);
	int producers_5_title_x = (ofGetWindowWidth() * 0.75) - (producers_5_title_text_box.getWidth() / 2);
	int producers_5_title_y = producers_title_font.getLineHeight() + 500;
	producers_5_title_font.drawStringAsShapes("5", producers_5_title_x, producers_5_title_y);
	
	
	// Drawing actin title and key fonts

	// Clear
	float producers_clear_title_box_y = producers_title_font.getLineHeight() + 450;
	ofRectangle producers_clear_title_text_box = producers_clear_title_font.getStringBoundingBox("Clear", 0, producers_clear_title_box_y);
	int producers_clear_title_x = (ofGetWindowWidth() * 0.9) - (producers_clear_title_text_box.getWidth() / 2);
	int producers_clear_title_y = producers_title_font.getLineHeight() + 450;
	producers_clear_title_font.drawStringAsShapes("Clear", producers_clear_title_x, producers_clear_title_y);

	// 0
	float producers_0_title_box_y = producers_title_font.getLineHeight() + 500;
	ofRectangle producers_0_title_text_box = producers_0_title_font.getStringBoundingBox("0", 0, producers_0_title_box_y);
	int producers_0_title_x = (ofGetWindowWidth() * 0.9) - (producers_0_title_text_box.getWidth() / 2);
	int producers_0_title_y = producers_title_font.getLineHeight() + 500;
	producers_0_title_font.drawStringAsShapes("0", producers_0_title_x, producers_0_title_y);

	// Back
	float producers_back_title_box_y = producers_title_font.getLineHeight() + 550;
	ofRectangle producers_back_title_text_box = producers_back_title_font.getStringBoundingBox("Back", 0, producers_back_title_box_y);
	int producers_back_title_x = (ofGetWindowWidth() * 0.9) - (producers_back_title_text_box.getWidth() / 2);
	int producers_back_title_y = producers_title_font.getLineHeight() + 550;
	producers_back_title_font.drawStringAsShapes("Back", producers_back_title_x, producers_back_title_y);

	// B
	float producers_b_title_box_y = producers_title_font.getLineHeight() + 600;
	ofRectangle producers_b_title_text_box = producers_b_title_font.getStringBoundingBox("B", 0, producers_b_title_box_y);
	int producers_b_title_x = (ofGetWindowWidth() * 0.9) - (producers_b_title_text_box.getWidth() / 2);
	int producers_b_title_y = producers_title_font.getLineHeight() + 600;
	producers_b_title_font.drawStringAsShapes("B", producers_b_title_x, producers_b_title_y);
}

