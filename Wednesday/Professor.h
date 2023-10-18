#pragma once
#include "Faculty.h"

class Professor: public Faculty
{
private:
	std::string department;

public:
	Professor(std::string dept, int S, int H, Date db, std::string name, std::string nat, Date DJ);
	virtual int Bonus();
};

