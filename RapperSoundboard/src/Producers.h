#pragma once
#include "ofMain.h"

class Producers
{
	ofSoundPlayer london_on_da_track;
	ofSoundPlayer metro_boomin;
	ofSoundPlayer mike_will_madeit;
	ofSoundPlayer murda_beatz;
	ofSoundPlayer pierre_bourne;
public:
	Producers();
	~Producers();

	ofSoundPlayer GetLondonOnDaTrack();
	ofSoundPlayer GetMetroBoomin();
	ofSoundPlayer GetMikeWillMadeit();
	ofSoundPlayer GetMurdaBeatz();
	ofSoundPlayer GetPierreBourne();
};

