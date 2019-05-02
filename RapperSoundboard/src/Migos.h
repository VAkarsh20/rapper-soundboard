#pragma once
#include "ofMain.h"

class Migos {
	
	// Adlibs for this grouping
	ofSoundPlayer offset_offset;
	ofSoundPlayer offset_dab;
	ofSoundPlayer offset_hey;
	ofSoundPlayer quavo_quavo;
	ofSoundPlayer quavo_mama;
	ofSoundPlayer quavo_skrt_skrt;
	ofSoundPlayer takeoff_takeoff;
	ofSoundPlayer takeoff_money;
	ofSoundPlayer takeoff_migo;

	// Main title and subheader fonts
	ofTrueTypeFont migos_title_font;
	ofTrueTypeFont migos_subheader_font;

	// Migos images
	ofImage migos_image;
	ofImage migos_offset_image;
	ofImage migos_quavo_image;
	ofImage migos_takeoff_image;

	// Adlib title fonts
	ofTrueTypeFont migos_offset_offset_title_font;
	ofTrueTypeFont migos_offset_dab_title_font;
	ofTrueTypeFont migos_offset_hey_title_font;
	ofTrueTypeFont migos_quavo_quavo_title_font;
	ofTrueTypeFont migos_quavo_mama_title_font;
	ofTrueTypeFont migos_quavo_skrt_skrt_title_font;
	ofTrueTypeFont migos_takeoff_takeoff_title_font;
	ofTrueTypeFont migos_takeoff_money_title_font;
	ofTrueTypeFont migos_takeoff_migo_title_font;

	// Adlib key fonts
	ofTrueTypeFont migos_1_title_font;
	ofTrueTypeFont migos_2_title_font;
	ofTrueTypeFont migos_3_title_font;
	ofTrueTypeFont migos_4_title_font;
	ofTrueTypeFont migos_5_title_font;
	ofTrueTypeFont migos_6_title_font;
	ofTrueTypeFont migos_7_title_font;
	ofTrueTypeFont migos_8_title_font;
	ofTrueTypeFont migos_9_title_font;

	// Action title and key fonts
	ofTrueTypeFont migos_clear_title_font;
	ofTrueTypeFont migos_0_title_font;
	ofTrueTypeFont migos_back_title_font;
	ofTrueTypeFont migos_b_title_font;

public:
	Migos();
	~Migos();

	ofSoundPlayer GetOffset();
	ofSoundPlayer GetDab();
	ofSoundPlayer GetHey();
	ofSoundPlayer GetQuavo();
	ofSoundPlayer GetMama();
	ofSoundPlayer GetSkrtSkrt();
	ofSoundPlayer GetTakeoff();
	ofSoundPlayer GetMoney();
	ofSoundPlayer GetMigo();

	ofImage GetMigosImage();

	void DrawMigosPage();
};

