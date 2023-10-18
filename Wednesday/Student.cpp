#include "Student.h"
#include <iostream>

static int ID_share = 40000000;

Student::Student(Date db, string name, string nat, Date DJ, string prog): Person(db,name,nat,DJ) {
	program = prog;
	ID = ++ID_share;
	Balance = 0;

	for (int i = 0; i < 6; i++) {
		Courses[i] = nullptr;
	}

}

void Student::AddCourse(Course* C) {
	int temp = -1;
	int creditsTaken = 0;
	
	for (int i = 0; i < 7; i++) {
		if (Courses[i] != nullptr) {
			creditsTaken += Courses[i]->getCredits();
		}
	}

	for (int i=0; i < 7; i++) {
		if (Courses[i] == nullptr) {
			temp = i;
			break;
		}
	}

	if (temp != -1 && creditsTaken + C->getCredits() <= 19) {
		Courses[temp] = C;
		std::cout << "Course was added successfully";
	}
	else {
		std::cout << "Course was not added";
	}
}