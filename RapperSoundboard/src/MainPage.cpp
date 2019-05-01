#include "MainPage.h"



MainPage::MainPage()
{
	main_title_font.load("Righteous-Regular.ttf", 50, true, true, true);
	main_subheader_font.load("Righteous-Regular.ttf", 20, true, true, true);
	main_travis_scott_font.load("Righteous-Regular.ttf", 20, true, true, true);
	main_migos_font.load("Righteous-Regular.ttf", 20, true, true, true);
	main_lil_rappers_font.load("Righteous-Regular.ttf", 20, true, true, true);
	main_producers_font.load("Righteous-Regular.ttf", 20, true, true, true);

	main_1_font.load("Righteous-Regular.ttf", 20, true, true, true);
	main_2_font.load("Righteous-Regular.ttf", 20, true, true, true);
	main_3_font.load("Righteous-Regular.ttf", 20, true, true, true);
	main_4_font.load("Righteous-Regular.ttf", 20, true, true, true);
}


MainPage::~MainPage()
{
}

void MainPage::DrawMainPage() {
	
	// Main Title
	float main_title_box_y = main_title_font.getLineHeight();
	ofRectangle main_title_text_box = main_title_font.getStringBoundingBox("Rapper Adlib Soundboard", 0, main_title_box_y);
	int main_title_x = (ofGetWindowWidth() / 2) - (main_title_text_box.getWidth() / 2);
	int main_title_y = main_title_font.getLineHeight();
	main_title_font.drawStringAsShapes("Rapper Adlib Soundboard", main_title_x, main_title_y);

	// Main Subheader
	float main_subheader_box_y = main_title_font.getLineHeight() + 50;
	ofRectangle main_subheader_text_box = main_subheader_font.getStringBoundingBox("Press the Number Key of the Adlib Group you want to Use", 0, main_subheader_box_y);
	int main_subheader_x = (ofGetWindowWidth() / 2) - (main_subheader_text_box.getWidth() / 2);
	int main_subheader_y = main_title_font.getLineHeight() + 50;
	main_subheader_font.drawStringAsShapes("Press the Number Key of the Adlib Group you want to Use", main_subheader_x, main_subheader_y);

	// Main Travis Scott Header
	float main_travis_scott_box_y = main_title_font.getLineHeight() + 150;
	ofRectangle main_travis_scott_text_box = main_travis_scott_font.getStringBoundingBox("Travis Scott", 0, main_travis_scott_box_y);
	int main_travis_scott_x = (ofGetWindowWidth() * 0.125) - (main_travis_scott_text_box.getWidth() / 2);
	int main_travis_scott_y = main_title_font.getLineHeight() + 150;
	main_travis_scott_font.drawStringAsShapes("Travis Scott", main_travis_scott_x, main_travis_scott_y);

	// Main Migos Header
	float main_migos_box_y = main_title_font.getLineHeight() + 150;
	ofRectangle main_migos_text_box = main_migos_font.getStringBoundingBox("Migos", 0, main_migos_box_y);
	int main_migos_x = (ofGetWindowWidth() * 0.375) - (main_migos_text_box.getWidth() / 2);
	int main_migos_y = main_title_font.getLineHeight() + 150;
	main_migos_font.drawStringAsShapes("Migos", main_migos_x, main_migos_y);

	// Main Lil Rappers Header
	float main_lil_rappers_box_y = main_title_font.getLineHeight() + 150;
	ofRectangle main_lil_rappers_text_box = main_lil_rappers_font.getStringBoundingBox("Lil Rappers", 0, main_lil_rappers_box_y);
	int main_lil_rappers_x = (ofGetWindowWidth() * 0.625) - (main_lil_rappers_text_box.getWidth() / 2);
	int main_lil_rappers_y = main_title_font.getLineHeight() + 150;
	main_lil_rappers_font.drawStringAsShapes("Lil Rappers", main_lil_rappers_x, main_lil_rappers_y);

	// Main Producers Header
	float main_producers_box_y = main_title_font.getLineHeight() + 150;
	ofRectangle main_producers_text_box = main_producers_font.getStringBoundingBox("Producers", 0, main_producers_box_y);
	int main_producers_x = (ofGetWindowWidth() * 0.875) - (main_producers_text_box.getWidth() / 2);
	int main_producers_y = main_title_font.getLineHeight() + 150;
	main_producers_font.drawStringAsShapes("Producers", main_producers_x, main_producers_y);


	// Images
	ofImage travis_scott_image = travis_scott.GetTravisScottImage();
	travis_scott_image.draw((ofGetWindowWidth() * 0.125) - (travis_scott_image.getWidth() / 2), main_title_font.getLineHeight() + 200);

	ofImage migos_image = migos.GetMigosImage();
	migos_image.draw((ofGetWindowWidth() * 0.375) - (migos_image.getWidth() / 2), main_title_font.getLineHeight() + 200);

	ofImage lil_rappers_image = lil_rappers.GetLilUziVertImage();
	lil_rappers_image.draw((ofGetWindowWidth() * 0.625) - (lil_rappers_image.getWidth() / 2), main_title_font.getLineHeight() + 200);

	ofImage producers_image = producers.GetProducersImage();
	producers_image.draw((ofGetWindowWidth() * 0.875) - (producers_image.getWidth() / 2), main_title_font.getLineHeight() + 200);

	// Main 1 Header
	float main_1_box_y = main_title_font.getLineHeight() + 500;
	ofRectangle main_1_text_box = main_1_font.getStringBoundingBox("1", 0, main_1_box_y);
	int main_1_x = (ofGetWindowWidth() * 0.125) - (main_1_text_box.getWidth() / 2);
	int main_1_y = main_title_font.getLineHeight() + 500;
	main_1_font.drawStringAsShapes("1", main_1_x, main_1_y);

	// Main 2 Header
	float main_2_box_y = main_title_font.getLineHeight() + 500;
	ofRectangle main_2_text_box = main_2_font.getStringBoundingBox("2", 0, main_2_box_y);
	int main_2_x = (ofGetWindowWidth() * 0.375) - (main_2_text_box.getWidth() / 2);
	int main_2_y = main_title_font.getLineHeight() + 500;
	main_2_font.drawStringAsShapes("2", main_2_x, main_2_y);

	float main_3_box_y = main_title_font.getLineHeight() + 500;
	ofRectangle main_3_text_box = main_3_font.getStringBoundingBox("3", 0, main_3_box_y);
	int main_3_x = (ofGetWindowWidth() * 0.625) - (main_3_text_box.getWidth() / 2);
	int main_3_y = main_title_font.getLineHeight() + 500;
	main_3_font.drawStringAsShapes("3", main_3_x, main_3_y);

	float main_4_box_y = main_4_font.getLineHeight() + 500;
	ofRectangle main_4_text_box = main_4_font.getStringBoundingBox("4", 0, main_4_box_y);
	int main_4_x = (ofGetWindowWidth() * 0.875) - (main_4_text_box.getWidth() / 2);
	int main_4_y = main_title_font.getLineHeight() + 500;
	main_4_font.drawStringAsShapes("4", main_4_x, main_4_y);
}