#include "Migos.h"

Migos::Migos()
{
	O_offset.load("Offset_Offset.mp3");
	O_dab.load("Offset_Dab.mp3");
	O_hey.load("Offset_Hey.mp3");
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
