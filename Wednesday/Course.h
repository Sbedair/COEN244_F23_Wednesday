#pragma once
#include <string>

class Course
{
private: 
	std::string Name;
	std::string Code;
	int Start;
	int End;
	int Credits;

public:
	Course(std::string n, std::string c, int s, int e, int cr) {
		Name = n;
		Code = c;
		Start = s;
		End = e;
		Credits = cr;
	}

};

