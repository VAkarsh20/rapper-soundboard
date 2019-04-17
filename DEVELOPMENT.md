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