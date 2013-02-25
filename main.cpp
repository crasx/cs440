//#include "Environment.h"
#include "Environment.cpp"

int main(int argc, char *argv[]){
	Environment *env=new Environment();
	//string message="";
	//env->parseFile("sixRooms.gdf", message);
	string command;
	if(argc<3)
		command+=argv[1];
	else if(argc<4){
		command+=argv[1];
		command+=argv[2];
	}
	else{
		cout<<"need atleast two args\n";
		return 0;
	}
	env->parseCommand(command);
}
