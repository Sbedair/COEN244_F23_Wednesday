#pragma once
#include "Faculty.h"

class Admin: public Faculty
{
private:
	std::string section;

public:
	Admin(std::string sec, int S, int H, Date db, std::string name, std::string nat, Date DJ);
	virtual int Bonus();
};

