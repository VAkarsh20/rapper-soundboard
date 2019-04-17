#include "Migos.h"

Migos::Migos()
{
	O_offset.load("Adlib Files\\Migos\\Offset\\Offset_Offset.mp3");
	O_dab.load("Adlib Files\\Migos\\Offset\\Offset_Dab.mp3");
	O_hey.load("Adlib Files\\Migos\\Offset\\Offset_Hey.mp3");

	Q_quavo.load("Adlib Files\\Migos\\Quavo\\Quavo_Quavo.mp3");
	Q_mama.load("Adlib Files\\Migos\\Quavo\\Quavo_Mama.mp3");
	Q_skrt_skrt.load("Adlib Files\\Migos\\Quavo\\Quavo_Skrt_Skrt.mp3");

	T_takeoff.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Takeoff.mp3");
	T_money.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Money.mp3");
	T_migo.load("Adlib Files\\Migos\\Takeoff\\Takeoff_Migo.mp3");
}

Migos::~Migos()
{

}

ofSoundPlayer Migos::GetOffset() {
	return O_offset;
}
ofSoundPlayer Migos::GetDab() {
	return O_dab;
}
ofSoundPlayer Migos::GetHey(){
	return O_hey;
}

ofSoundPlayer Migos::GetQuavo() {
	return Q_quavo;
}
ofSoundPlayer Migos::GetMama() {
	return Q_mama;
}
ofSoundPlayer Migos::GetSkrtSkrt() {
	return Q_skrt_skrt;
}

ofSoundPlayer Migos::GetTakeoff() {
	return T_takeoff;
}
ofSoundPlayer Migos::GetMoney() {
	return T_money;
}
ofSoundPlayer Migos::GetMigo() {
	return T_migo;
}
