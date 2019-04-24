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
	ofRectangle producers_subheader_text_box = producers_subheader_font.getStringBoundingBox("Press the Number Key of the Producer Tag you want to Use", 0, producers_subheader_box_y);
	int producers_subheader_x = (ofGetWindowWidth() / 2) - (producers_subheader_text_box.getWidth() / 2);
	int producers_subheader_y = producers_title_font.getLineHeight() + 50;
	producers_subheader_font.drawStringAsShapes("Press the Number Key of the Producer Tag you want to Use", producers_subheader_x, producers_subheader_y);

	producers_image.draw((ofGetWindowWidth() / 2) - (producers_image.getWidth() / 2), producers_title_font.getLineHeight() + 80);
}

