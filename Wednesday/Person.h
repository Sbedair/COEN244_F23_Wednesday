#pragma once
#include "Date.h"

class Person
{
private:
	Date dob;
	string Name;
	string Nationality;
	Date DateJoined;
	bool IA;

public:
	Person(Date &db, string name, string nat, Date &DJ);
	int getAge();
	int getServiceYear();
	void LoA();
	void EndLoA();
};

