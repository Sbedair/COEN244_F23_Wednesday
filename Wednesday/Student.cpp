#include "Student.h"

static int ID_share = 40000000;

Student::Student(Date db, string name, string nat, Date DJ, string prog): Person(db,name,nat,DJ) {
	program = prog;
	ID = ++ID_share;
	Balance = 0;

	for (int i = 0; i < 6; i++) {
		Courses[i] = new Course("NA","NA",-1, -1, -1);
	}

}