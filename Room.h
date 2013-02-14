struct Path;

struct Room{
	char name[128];
	char *description;
	Path doors[19]; // see: env_dir for definitions
};
