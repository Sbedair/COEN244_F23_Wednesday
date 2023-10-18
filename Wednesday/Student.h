#pragma once
#include "Person.h"
#include "Course.h"

class Student: public Person
{
private:
	int ID;
	int Balance;
	string program;
	Course* Courses[6];

public:
	Student(Date db, string name, string nat, Date DJ, string prog);
	void AddCourse(Course* C);

};

