#pragma once
#include "ofMain.h"
class Migos {
	ofSoundPlayer O_offset;
	ofSoundPlayer O_dab;
	ofSoundPlayer O_hey;

public:
	Migos();
	~Migos();

	ofSoundPlayer GetOffset();
	ofSoundPlayer GetDab();
	ofSoundPlayer GetHey();
};

