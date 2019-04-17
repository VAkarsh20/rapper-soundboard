#include "LilRappers.h"

LilRappers::LilRappers() {
	
	J_ok.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_Ok.mp3");
	J_what.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_What.mp3");
	J_yeah.load("Adlib Files\\Lil Rappers\\Lil Jon\\Lil_Jon_Yeah.mp3");
	
	U_huh.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Huh.mp3");
	U_ree.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Ree.mp3");
	U_yeah.load("Adlib Files\\Lil Rappers\\Lil Uzi Vert\\Lil_Uzi_Vert_Yeah.mp3");
	
	W_laugh.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Laugh.mp3");
	W_tunechi.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Tunechi.mp3");
	W_young_mula_baby.load("Adlib Files\\Lil Rappers\\Lil Wayne\\Lil_Wayne_Young_Mula_Baby.mp3");
}
LilRappers::~LilRappers() {

}

ofSoundPlayer LilRappers::GetLilJonOk() {
	return J_ok;
}

ofSoundPlayer LilRappers::GetLilJonWhat() {
	return J_what;
}
ofSoundPlayer LilRappers::GetLilJonYeah() {
	return J_yeah;
}
ofSoundPlayer LilRappers::GetLilUziVertHuh() {
	return U_huh;
}
ofSoundPlayer LilRappers::GetLilUziVertRee() {
	return U_ree;
}
ofSoundPlayer LilRappers::GetLilUziVertYeah() {
	return U_yeah;
}
ofSoundPlayer LilRappers::GetLilWayneLaugh() {
	return W_laugh;
}
ofSoundPlayer LilRappers::GetLilWayneTunechi() {
	return W_tunechi;
}
ofSoundPlayer LilRappers::GetLilWayneYoungMulaBaby() {
	return W_young_mula_baby;
}



