#include <string>
using  namespace std;
struct Path;

struct Room{
	char name[128];
	string description;
	Path doors[19]; // see: env_dir for definitions
};
