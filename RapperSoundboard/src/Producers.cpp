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

	float producers_london_on_da_track_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle producers_london_on_da_track_title_text_box = producers_london_on_da_track_title_font.getStringBoundingBox("London on da Track", 0, producers_london_on_da_track_title_box_y);
	int producers_london_on_da_track_title_x = (ofGetWindowWidth() * 0.25) - (producers_london_on_da_track_title_text_box.getWidth() / 2);
	int producers_london_on_da_track_title_y = producers_title_font.getLineHeight() + 350;
	producers_london_on_da_track_title_font.drawStringAsShapes("London on da Track", producers_london_on_da_track_title_x, producers_london_on_da_track_title_y);

	float producers_metro_boomin_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle producers_metro_boomin_title_text_box = producers_metro_boomin_title_font.getStringBoundingBox("Metro Boomin", 0, producers_metro_boomin_title_box_y);
	int travis_scott_straight_up_title_x = (ofGetWindowWidth() * 0.50) - (travis_scott_straight_up_title_text_box.getWidth() / 2);
	int travis_scott_straight_up_title_y = producers_title_font.getLineHeight() + 350;
	travis_scott_straight_up_title_font.drawStringAsShapes("Straight Up", travis_scott_straight_up_title_x, travis_scott_straight_up_title_y);

	float travis_scott_its_lit_title_box_y = producers_title_font.getLineHeight() + 350;
	ofRectangle travis_scott_its_lit_title_text_box = travis_scott_its_lit_title_font.getStringBoundingBox("It's Lit", 0, travis_scott_its_lit_title_box_y);
	int travis_scott_its_lit_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_its_lit_title_text_box.getWidth() / 2);
	int travis_scott_its_lit_title_y = producers_title_font.getLineHeight() + 350;
	travis_scott_its_lit_title_font.drawStringAsShapes("It's Lit", travis_scott_its_lit_title_x, travis_scott_its_lit_title_y);

	float travis_scott_la_flame_title_box_y = producers_title_font.getLineHeight() + 450;
	ofRectangle travis_scott_la_flame_title_text_box = travis_scott_la_flame_title_font.getStringBoundingBox("La Flame", 0, travis_scott_la_flame_title_box_y);
	int travis_scott_la_flame_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_la_flame_title_text_box.getWidth() / 2);
	int travis_scott_la_flame_title_y = producers_title_font.getLineHeight() + 450;
	travis_scott_la_flame_title_font.drawStringAsShapes("La Flame", travis_scott_la_flame_title_x, travis_scott_la_flame_title_y);

	float travis_scott_yeah_title_box_y = producers_title_font.getLineHeight() + 450;
	ofRectangle travis_scott_yeah_title_text_box = travis_scott_yeah_title_font.getStringBoundingBox("Yeah", 0, travis_scott_yeah_title_box_y);
	int travis_scott_yeah_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_yeah_title_text_box.getWidth() / 2);
	int travis_scott_yeah_title_y = producers_title_font.getLineHeight() + 450;
	travis_scott_yeah_title_font.drawStringAsShapes("Yeah", travis_scott_yeah_title_x, travis_scott_yeah_title_y);


	float travis_scott_1_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_1_title_text_box = travis_scott_1_title_font.getStringBoundingBox("1", 0, travis_scott_1_title_box_y);
	int travis_scott_1_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_1_title_text_box.getWidth() / 2);
	int travis_scott_1_title_y = producers_title_font.getLineHeight() + 400;
	travis_scott_1_title_font.drawStringAsShapes("1", travis_scott_1_title_x, travis_scott_1_title_y);

	float travis_scott_2_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_2_title_text_box = travis_scott_2_title_font.getStringBoundingBox("2", 0, travis_scott_2_title_box_y);
	int travis_scott_2_title_x = (ofGetWindowWidth() * 0.50) - (travis_scott_2_title_text_box.getWidth() / 2);
	int travis_scott_2_title_y = producers_title_font.getLineHeight() + 400;
	travis_scott_2_title_font.drawStringAsShapes("2", travis_scott_2_title_x, travis_scott_2_title_y);

	float travis_scott_3_title_box_y = producers_title_font.getLineHeight() + 400;
	ofRectangle travis_scott_3_title_text_box = travis_scott_3_title_font.getStringBoundingBox("3", 0, travis_scott_3_title_box_y);
	int travis_scott_3_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_3_title_text_box.getWidth() / 2);
	int travis_scott_3_title_y = producers_title_font.getLineHeight() + 400;
	travis_scott_3_title_font.drawStringAsShapes("3", travis_scott_3_title_x, travis_scott_3_title_y);

	float travis_scott_4_title_box_y = producers_title_font.getLineHeight() + 500;
	ofRectangle travis_scott_4_title_text_box = travis_scott_4_title_font.getStringBoundingBox("4", 0, travis_scott_4_title_box_y);
	int travis_scott_4_title_x = (ofGetWindowWidth() * 0.25) - (travis_scott_4_title_text_box.getWidth() / 2);
	int travis_scott_4_title_y = producers_title_font.getLineHeight() + 500;
	travis_scott_4_title_font.drawStringAsShapes("4", travis_scott_4_title_x, travis_scott_4_title_y);

	float travis_scott_5_title_box_y = producers_title_font.getLineHeight() + 500;
	ofRectangle travis_scott_5_title_text_box = travis_scott_5_title_font.getStringBoundingBox("5", 0, travis_scott_5_title_box_y);
	int travis_scott_5_title_x = (ofGetWindowWidth() * 0.75) - (travis_scott_5_title_text_box.getWidth() / 2);
	int travis_scott_5_title_y = producers_title_font.getLineHeight() + 500;
	travis_scott_5_title_font.drawStringAsShapes("5", travis_scott_5_title_x, travis_scott_5_title_y);
}

