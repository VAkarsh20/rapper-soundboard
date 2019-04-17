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
};

