#pragma once
#include "ofMain.h"


class LilRappers {
	
	// Adlibs for this grouping
	ofSoundPlayer lil_jon_ok;
	ofSoundPlayer lil_jon_what;
	ofSoundPlayer lil_jon_yeah;
	ofSoundPlayer lil_uzi_vert_huh;
	ofSoundPlayer lil_uzi_vert_ree;
	ofSoundPlayer lil_uzi_vert_yeah;
	ofSoundPlayer lil_wayne_laugh;
	ofSoundPlayer lil_wayne_tunechi;
	ofSoundPlayer lil_wayne_young_mula_baby;

	// Main title and subheader fonts
	ofTrueTypeFont lil_rappers_title_font;
	ofTrueTypeFont lil_rappers_subheader_font;
	
	// Lil Rappers Images
	ofImage lil_rappers_lil_uzi_vert_image;
	ofImage lil_rappers_lil_jon_image;
	ofImage lil_rappers_lil_wayne_image;

	// Adlib title fonts
	ofTrueTypeFont lil_rappers_lil_jon_ok_title_font;
	ofTrueTypeFont lil_rappers_lil_jon_what_title_font;
	ofTrueTypeFont lil_rappers_lil_jon_yeah_title_font;
	ofTrueTypeFont lil_rappers_lil_uzi_vert_huh_title_font;
	ofTrueTypeFont lil_rappers_lil_uzi_vert_ree_title_font;
	ofTrueTypeFont lil_rappers_lil_uzi_vert_yeah_title_font;
	ofTrueTypeFont lil_rappers_lil_wayne_laugh_title_font;
	ofTrueTypeFont lil_rappers_lil_wayne_tunechi_title_font;
	ofTrueTypeFont lil_rappers_lil_wayne_young_mula_baby_title_font;

	// Adlib key fonts
	ofTrueTypeFont lil_rappers_1_title_font;
	ofTrueTypeFont lil_rappers_2_title_font;
	ofTrueTypeFont lil_rappers_3_title_font;
	ofTrueTypeFont lil_rappers_4_title_font;
	ofTrueTypeFont lil_rappers_5_title_font;
	ofTrueTypeFont lil_rappers_6_title_font;
	ofTrueTypeFont lil_rappers_7_title_font;
	ofTrueTypeFont lil_rappers_8_title_font;
	ofTrueTypeFont lil_rappers_9_title_font;

	// Action title and key fonts
	ofTrueTypeFont lil_rappers_clear_title_font;
	ofTrueTypeFont lil_rappers_0_title_font;
	ofTrueTypeFont lil_rappers_back_title_font;
	ofTrueTypeFont lil_rappers_b_title_font;

public:
	LilRappers();
	~LilRappers();

	ofSoundPlayer GetLilJonOk();
	ofSoundPlayer GetLilJonWhat();
	ofSoundPlayer GetLilJonYeah();
	ofSoundPlayer GetLilUziVertHuh();
	ofSoundPlayer GetLilUziVertRee();
	ofSoundPlayer GetLilUziVertYeah();
	ofSoundPlayer GetLilWayneLaugh();
	ofSoundPlayer GetLilWayneTunechi();
	ofSoundPlayer GetLilWayneYoungMulaBaby();

	ofImage GetLilUziVertImage();

	void DrawLilRappersPage();
};