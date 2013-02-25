#include <string>
#include "Direction.h"
#include "Path.h"
#include "Room.h"

#define LOOK "look"
#define HELP "help"
#define QUIT "quit"
#define EXIT "exit"
#define GO "go"
#define NORTH "n"
#define SOUTH "s"
#define EAST "e"
#define WEST "w"
#define NNW "nnw"
#define NW "nw"
#define WNW "wnw"
#define NE "ne"
#define NNE "nne"
#define ENE "ene"
#define SE "se"
#define SSE "sse"
#define ESE "ese"
#define SW "sw"
#define SSW "ssw"
#define WSW "wsw"
#define UP "up"
#define DOWN "down"

using namespace std;

class Environment{
	public:
		string go(Direction d);
		string look(Direction d);
		void parseCommand(string command);		
		bool parseFile(char *file, string &message);
		void usage();
		
	private:
		Room rooms[19];
		Room *currentRoom;
		string toLower(string);		
};
