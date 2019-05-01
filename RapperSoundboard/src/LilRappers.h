#pragma once
#include "ofMain.h"


class LilRappers {
	ofSoundPlayer J_ok;
	ofSoundPlayer J_what;
	ofSoundPlayer J_yeah;
	ofSoundPlayer U_huh;
	ofSoundPlayer U_ree;
	ofSoundPlayer U_yeah;
	ofSoundPlayer W_laugh;
	ofSoundPlayer W_tunechi;
	ofSoundPlayer W_young_mula_baby;

	ofTrueTypeFont lil_rappers_title_font;
	ofTrueTypeFont lil_rappers_subheader_font;

	ofImage lil_rappers_lil_uzi_vert_image;
	ofImage lil_rappers_lil_jon_image;
	ofImage lil_rappers_lil_wayne_image;

	ofTrueTypeFont lil_rappers_lil_jon_ok_title_font;
	ofTrueTypeFont lil_rappers_lil_jon_what_title_font;
	ofTrueTypeFont lil_rappers_lil_jon_yeah_title_font;
	ofTrueTypeFont lil_rappers_lil_uzi_vert_huh_title_font;
	ofTrueTypeFont lil_rappers_lil_uzi_vert_ree_title_font;
	ofTrueTypeFont lil_rappers_lil_uzi_vert_yeah_title_font;
	ofTrueTypeFont lil_rappers_lil_wayne_laugh_title_font;
	ofTrueTypeFont lil_rappers_lil_wayne_tunechi_title_font;
	ofTrueTypeFont lil_rappers_lil_wayne_young_mula_baby_title_font;

	ofTrueTypeFont lil_rappers_1_title_font;
	ofTrueTypeFont lil_rappers_2_title_font;
	ofTrueTypeFont lil_rappers_3_title_font;
	ofTrueTypeFont lil_rappers_4_title_font;
	ofTrueTypeFont lil_rappers_5_title_font;
	ofTrueTypeFont lil_rappers_6_title_font;
	ofTrueTypeFont lil_rappers_7_title_font;
	ofTrueTypeFont lil_rappers_8_title_font;
	ofTrueTypeFont lil_rappers_9_title_font;

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