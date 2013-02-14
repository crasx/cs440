cs440
=====

First Scenario ( Story ) 
The player starts the game by typing the name of the executable program, passing a filename as a command-line argument. 

When the user first launches the program, the system displays an opening welcome screen, and briefly describes its purpose and how to play.  ( Full details are available by typing HELP at any time. )   

The game then attempts to open the file  specified by the user and read in its contents, building the environment described in the file.  The game should be able to read any file that conforms to the GDF 1.0 file specification provided.  If there are any problems reading the file the program may either ignore content that it does not understand or abort, depending on the severity of the problem.  Upon success the game “displays” the initial starting place, which by default is the first place in the file 

The system then accepts commands from the user, which may be any of QUIT, EXIT, HELP, GO, or LOOK, in any case or case combination. 

The GO command must be followed by a direction, which must be one of: N, NORTH, S, SOUTH, E,  EAST, W, WEST, U, UP, D, DOWN, NE, NW, SE, SW, NNE, NNW, SSE, SSW, ENE, ESE, WNW, WSW. 

The LOOK command may be followed by one of the aforementioned directions, or it may be entered without a direction.  ( “LOOK” by itself basically means “LOOK HERE”. ) 

Based on the user input, the game allows the user to wander around the environment and explore the space.  If a user cannot go in the direction they requested, the system should have separate ( different ) messages distinguishing between there being no path in that direction and there being a path that the user cannot follow.  ( Using the sample environment file sixRooms.gdf, the user should get a different message when they try to go south than the one when they try to go east. ) 

When the user exits the game, either by typing EXIT or  QUIT or by going out of the environment exit, then the program should print out a final “conclusion” screen, and thank them for coming. 