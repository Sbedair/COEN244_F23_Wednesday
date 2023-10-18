#pragma once
#include "Student.h"
#include "Professor.h"

class UniversityManager
{
private:
	Student* students[200];
	int StudentCount;
	Professor* professors[100];
	int ProfCount;
public:
	UniversityManager();
	bool addStudent(Student *st);
	bool addProf(Professor *p);
	bool remProf(Professor* p);
	bool remStudent(Student* s);
};

