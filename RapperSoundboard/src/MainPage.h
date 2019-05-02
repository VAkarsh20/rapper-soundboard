#pragma once
#include "ofMain.h"
#include "TravisScott.h"
#include "Migos.h"
#include "LilRappers.h"
#include "Producers.h"

class MainPage
{
	// Title fonts
	ofTrueTypeFont main_title_font;
	ofTrueTypeFont main_subheader_font;
	ofTrueTypeFont main_travis_scott_font;
	ofTrueTypeFont main_migos_font;
	ofTrueTypeFont main_lil_rappers_font;
	ofTrueTypeFont main_producers_font;

	// Number Key Fonts
	ofTrueTypeFont main_1_font;
	ofTrueTypeFont main_2_font;
	ofTrueTypeFont main_3_font;
	ofTrueTypeFont main_4_font;

	// Adlib groupings
	TravisScott travis_scott;
	Migos migos;
	LilRappers lil_rappers;
	Producers producers;

public:
	MainPage();
	~MainPage();

	void DrawMainPage();
};

