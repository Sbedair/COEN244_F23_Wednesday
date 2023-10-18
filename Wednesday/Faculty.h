#pragma once
#include "Person.h"

class Faculty: public Person
{
private:
	int Salary;
	int ID;
	int Hours;

public:
	Faculty(int S, int H,Date db, std::string name, std::string nat, Date DJ);
	virtual int Bonus() = 0;
	int getHours() { return Hours; }
};

