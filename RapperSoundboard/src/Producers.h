#pragma once
#include "ofMain.h"

class Producers
{
	ofSoundPlayer london_on_da_track;
	ofSoundPlayer metro_boomin;
	ofSoundPlayer mike_will_madeit;
	ofSoundPlayer murda_beatz;
	ofSoundPlayer pierre_bourne;

	ofTrueTypeFont producers_title_font;
	ofTrueTypeFont producers_subheader_font;

	ofImage producers_image;

	ofTrueTypeFont producers_london_on_da_track_title_font;
	ofTrueTypeFont producers_metro_boomin_title_font;
	ofTrueTypeFont producers_mike_will_madeit_title_font;
	ofTrueTypeFont producers_murda_beatz_title_font;
	ofTrueTypeFont producers_pierre_bourne_title_font;

	ofTrueTypeFont producers_1_title_font;
	ofTrueTypeFont producers_2_title_font;
	ofTrueTypeFont producers_3_title_font;
	ofTrueTypeFont producers_4_title_font;
	ofTrueTypeFont producers_5_title_font;

	ofTrueTypeFont producers_clear_title_font;
	ofTrueTypeFont producers_0_title_font;
	ofTrueTypeFont producers_back_title_font;
	ofTrueTypeFont producers_b_title_font;

public:
	Producers();
	~Producers();

	ofSoundPlayer GetLondonOnDaTrack();
	ofSoundPlayer GetMetroBoomin();
	ofSoundPlayer GetMikeWillMadeit();
	ofSoundPlayer GetMurdaBeatz();
	ofSoundPlayer GetPierreBourne();

	ofImage GetProducersImage();

	void DrawProducersPage();
};

