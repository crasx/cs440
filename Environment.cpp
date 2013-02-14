#include "Environment.h"

#include "regexp/Pattern.h"
#include "regexp/Matcher.h"
#include <fstream>
#include <iostream>

string Environment::go(Direction d){
	
//	return "something";	
}

string Environment::look(Direction d){
	
//	return "something";	
}


bool Environment::parseFile(char *file, string &message){
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
}