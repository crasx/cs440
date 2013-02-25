#include "Environment.h"
#include <stdlib.h>
#include "regexp/Pattern.h"
#include "regexp/Matcher.h"
#include <fstream>
#include <iostream>
using namespace std;

string Environment::go(Direction d){	
//	return "something";	
return NULL;
}

string Environment::look(Direction d){
//	return "something";	
return NULL;
}

//converts a given string to all lower case 
string Environment::toLower(string upperCommand){
	string lowerCommand;
	for(int i=0;i<upperCommand.length();i++){
		if(upperCommand[i]>=(int)'A' && upperCommand[i]<=(int)'Z')
			lowerCommand+=(char)((int)'a'+(upperCommand[i]-(int)'A'));
		else
			lowerCommand+=upperCommand[i];
	}
	cout<<lowerCommand<<endl;
	return lowerCommand;
}

void Environment::usage(){
	cout<<"help - display this help message\n";
	cout<<"look [up, down, n,s,e,w,nw,ne,se,sw,nnw,wnw,nne,ene,sse,ese,ssw,wsw] - look in the given direction\n";
	cout<<"quit/exit - quit/exit the game\n";
	cout<<"go [up, down, n,s,e,w,nw,ne,se,sw,nnw,wnw,nne,ene,sse,ese,ssw,wsw] - go in the given direction\n";
}

void Environment::parseCommand(string command){
	string lowerCommand=toLower(command);
	//for LOOK
	if(lowerCommand.find(LOOK)!=string::npos){
		if(lowerCommand.find(NORTH,lowerCommand.find(LOOK))!=string::npos)
			cout<<"LOOK N"<<endl;
		else if(lowerCommand.find(SOUTH,lowerCommand.find(LOOK))!=string::npos)
             cout<<"LOOK S"<<endl;
		else if(lowerCommand.find(EAST,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK E"<<endl;
        else if(lowerCommand.find(WEST,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK W"<<endl;
        else if(lowerCommand.find(NNW,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK NNW"<<endl;
        else if(lowerCommand.find(WNW,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK WNW"<<endl;
        else if(lowerCommand.find(NW,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK NW"<<endl;
        else if(lowerCommand.find(NE,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK NE"<<endl;
        else if(lowerCommand.find(NNE,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK NNE"<<endl;
        else if(lowerCommand.find(ENE,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK ENE"<<endl;
        else if(lowerCommand.find(SW,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK SW"<<endl;
        else if(lowerCommand.find(WSW,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK WSW"<<endl;
        else if(lowerCommand.find(SSW,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK SSW"<<endl;
        else if(lowerCommand.find(SE,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK SE"<<endl;
        else if(lowerCommand.find(SSE,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK SSE"<<endl;
        else if(lowerCommand.find(ESE,lowerCommand.find(LOOK))!=string::npos)
			  cout<<"LOOK ESE"<<endl;
        else if(lowerCommand.find(UP,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK UP"<<endl;
        else if(lowerCommand.find(DOWN,lowerCommand.find(LOOK))!=string::npos)
              cout<<"LOOK DOWN"<<endl;
        else
			  cout<<"LOOK HERE"<<endl;
	}
	//for GO
	else if(lowerCommand.find(GO)!=string::npos){
		if(lowerCommand.find(NORTH,lowerCommand.find(GO))!=string::npos)
			cout<<"GO N"<<endl;
        else if(lowerCommand.find(SOUTH,lowerCommand.find(GO))!=string::npos)
            cout<<"GO S"<<endl;
        else if(lowerCommand.find(EAST,lowerCommand.find(GO))!=string::npos)
            cout<<"GO E"<<endl;
        else if(lowerCommand.find(WEST,lowerCommand.find(GO))!=string::npos)
            cout<<"GO W"<<endl;
        else if(lowerCommand.find(NNW,lowerCommand.find(GO))!=string::npos)
            cout<<"GO NNW"<<endl;
        else if(lowerCommand.find(WNW,lowerCommand.find(GO))!=string::npos)
            cout<<"GO WNW"<<endl;
        else if(lowerCommand.find(NW,lowerCommand.find(GO))!=string::npos)
            cout<<"GO NW"<<endl;
        else if(lowerCommand.find(NE,lowerCommand.find(GO))!=string::npos)
            cout<<"GO NE"<<endl;
        else if(lowerCommand.find(NNE,lowerCommand.find(GO))!=string::npos)
            cout<<"GO NNE"<<endl;
        else if(lowerCommand.find(ENE,lowerCommand.find(GO))!=string::npos)
            cout<<"GO ENE"<<endl;
        else if(lowerCommand.find(SW,lowerCommand.find(GO))!=string::npos)
            cout<<"GO SW"<<endl;
        else if(lowerCommand.find(WSW,lowerCommand.find(GO))!=string::npos)
            cout<<"GO WSW"<<endl;
        else if(lowerCommand.find(SSW,lowerCommand.find(GO))!=string::npos)
            cout<<"GO SSW"<<endl;
		else if(lowerCommand.find(SE,lowerCommand.find(GO))!=string::npos)
            cout<<"GO SE"<<endl;
        else if(lowerCommand.find(SSE,lowerCommand.find(GO))!=string::npos)
            cout<<"GO SSE"<<endl;
        else if(lowerCommand.find(ESE,lowerCommand.find(GO))!=string::npos)
            cout<<"GO ESE"<<endl;
        else if(lowerCommand.find(UP,lowerCommand.find(GO))!=string::npos)
            cout<<"GO UP"<<endl;
        else if(lowerCommand.find(DOWN,lowerCommand.find(GO))!=string::npos)
            cout<<"GO DOWN"<<endl;
	}
	//for HELP
	else if(lowerCommand.find(HELP)!=string::npos){
		cout<<"HELP"<<endl;
		usage();
	}
	//for EXIT
	else if(lowerCommand.find(EXIT)!=string::npos || lowerCommand.find(QUIT)!=string::npos){
		cout<<"EXIT"<<endl;
		exit(0);
	}	
	else
		usage();
}


/*bool Environment::parseFile(char *file, string &message){
	ifstream infile(file);
	string line;
	
	Pattern *p = Pattern::compile("//(.*)");

	while (getline(infile, line))
	{
		Matcher * m0 = p->createMatcher(line);
		cout<<line<< endl<<"matches: "<<(m0->matches() ? "true" : "false")<<endl;
		//unsigned comment=string.find("//");
		//if(comment!=string::npos){
		//	line=line.substr(0, comment);
		//}
	
	    // process pair (a,b)
	}
	
	return false;
}*/
