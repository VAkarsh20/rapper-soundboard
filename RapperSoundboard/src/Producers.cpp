#include "Producers.h"


Producers::Producers()
{
	london_on_da_track.load("Adlib Files\\Producers\\London_On_Da_Track.mp3");
	metro_boomin.load("Adlib Files\\Producers\\Metro_Boomin.mp3");
	mike_will_madeit.load("Adlib Files\\Producers\\Mike_WiLL_Made-it.mp3");
	murda_beatz.load("Adlib Files\\Producers\\Murda Beatz.mp3");
	pierre_bourne.load("Adlib Files\\Producers\\Pierre_Bourne.mp3");
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

