#include <string>
#include "Direction.h"
#include "Path.h"
#include "Room.h"

using namespace std;

class Environment{
	public:
		string go(Direction d);
		string look(Direction d);	
		bool parseFile(char *file, string &message);
		
	private:
		Room rooms[19];
		Room *currentRoom;
		
};