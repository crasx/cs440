#include "Direction.h"
#include "Path.h"
#include "Room.h"

class Environment{
	public:
		char *Go(Direction d);
		char *Look(Direction d);	
		
	private:
		Room rooms[19];
		Room *currentRoom;
		
};