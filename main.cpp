#include "Environment.h"


int main(int argc, char *argv[]){
	Environment *e=new Environment();
	string message="";
	e->parseFile("sixRooms.gdf", message);
}