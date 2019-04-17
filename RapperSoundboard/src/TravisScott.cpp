#include "TravisScott.h"

TravisScott::TravisScott() {
	TS_alright.load("Adlib Files\\Travis Scott\\Travis_Scott_Alright.mp3");
	TS_straight_up.load("Adlib Files\\Travis Scott\\Travis_Scott_Straight_Up.mp3");
	TS_its_lit.load("Adlib Files\\Travis Scott\\Travis_Scott_Its_Lit.mp3");
	TS_yeah.load("Adlib Files\\Travis Scott\\Travis_Scott_Yeah.mp3");
	TS_la_flame.load("Adlib Files\\Travis Scott\\Travis_Scott_La_Flame.mp3");

}

TravisScott::~TravisScott() {

}

ofSoundPlayer TravisScott::GetAlright() {
	return TS_alright;
}

ofSoundPlayer TravisScott::GetStraightUp() {
	return TS_straight_up;
}

ofSoundPlayer TravisScott::GetItsLit() {
	return TS_its_lit;
}

ofSoundPlayer TravisScott::GetYeah() {
	return TS_yeah;
}

ofSoundPlayer TravisScott::GetLaFlame() {
	return TS_la_flame;
}