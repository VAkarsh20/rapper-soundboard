# Development
## Week 1
* Researched different ideas to work on for the final project
	* Looked at prior examples for final projects to get a general grasp at what students have done in the past
	* Narrowed down to 3 different ideas
		* Legend of Zelda Dungeon:
			* Pros: Very fun to do and something I enjoy, very similar to adventure mp
			* Cons: Very time consuming and may be out of scope for what I can accomplish
		* Rapper Soundboard:
			* Pros: Something I have been interested in for a while, can incorporate different elements of sound and visuals
			* Cons: Might not incorporate desired libraries to meet requirements, may not be challenging
		* Matrix Multiplier:
			* Pros: Can incorporate different topics I have learned in the past year from MATH415 and CS357
			* Cons: May be too simple
	* Picked the Rapper Soundboard due to the customablility
* Researched the different libraries needed to be incorporated
	* Found that ofSoundPlayer is a library that can be used to meet the requirement (said by Professor on Piazza)
		* Tested ofSoundPlayer in a seperate openFrameworks application
			* Played Star Wars Theme
			* Very simple to work with, found a guide online to see how to use ofSoundPlayer to play an MP3
	* Looked at ofxGui to add as a window for the application
	* Looked at ofxFft as a music visualizer for the project
* Wrote Proposal for the project
## Week 2
* Worked on Getting Adlib Files (Majority of the Week)
	* Created 4 different groupings for Rapper Adlibs
		* Travis Scott
		* Migos
			* Offset
			* Quavo
			* Takeoff
		* Lil Rappers
			* Lil Jon
			* Lil Uzi Vert
			* Lil Wayne
		* Producers
	* Researched their most famous Adlibs through the following sites
		* http://www.therapboard.com/
		* https://genius.com/Rap-genius-ad-libs-explained-lyrics
	* Extracted Adlibs and Save files
		* Algorithm to do so
			* Go on Youtube to Find Either Song Acapella, Soundeffect, or Full Song Version
			* Convert the video and download to Mp3 File
			* Isolate Vocals, Extract Adlibs, and Touch up sound through Audacity
* Created Project with OpenFrameworks and Visual Studio
* Created 4 different classes for the 4 groupings of Rappers above
* Put all the adlibs in one file to test and was successful in doing so.
## Week 3
* Worked on Implementing Different Pages for the Adlib Groupings
	* This required extensive research into how to work with the draw method
	* Looked into ofTrueTypeFont in order to learn how to change the fonts of texts as well as the size
		* Went into Google Fonts and picked "Righteous" as the font for the app
		* Looked up tutorials on how to use the library and how to work with the spacing when implementing
	* I researched which images I need to put into the app
		* Found that Icon size images were the best because they were 250x250 and a good size to work with
			* This would keep all of the sizes constant
		* Attributed the images for their specific classes
	* Made the different pages and the ability to switch pages with enums
		* Created an enum for every page and a tracking field for the page to navigate through the different pages
	* Made a MainPage and attributed the specific pages to their respective grouping class
		* Drew the page once their page is called in the ofApp
* Cleaned up some syntax and commenting issues
## Week 4
* Finished Implementing the Differnet Pages for the Adlib Groupings
	* Added Text to all the pages to show what keys did what
	* Had a part in the page that showed how to clear the sounds and how to go back to the main page
* Cleaned up code and added documentation
* Decieded there was no need for test code due to that fact there was no major backend implementation