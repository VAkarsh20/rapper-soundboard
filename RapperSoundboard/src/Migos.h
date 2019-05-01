#pragma once
#include "ofMain.h"
class Migos {
	ofSoundPlayer O_offset;
	ofSoundPlayer O_dab;
	ofSoundPlayer O_hey;
	ofSoundPlayer Q_quavo;
	ofSoundPlayer Q_mama;
	ofSoundPlayer Q_skrt_skrt;
	ofSoundPlayer T_takeoff;
	ofSoundPlayer T_money;
	ofSoundPlayer T_migo;

	ofTrueTypeFont migos_title_font;
	ofTrueTypeFont migos_subheader_font;

	ofImage migos_image;
	ofImage migos_offset_image;
	ofImage migos_quavo_image;
	ofImage migos_takeoff_image;

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

