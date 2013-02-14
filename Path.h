
struct Room;

struct Path{
	Room *from;
	Room *to;
	bool open; // open=id>0
	bool exit; // if exit=id==1
};
