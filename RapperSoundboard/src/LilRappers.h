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
};