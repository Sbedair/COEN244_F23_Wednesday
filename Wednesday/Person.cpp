#include "Person.h"


Person::Person(Date &db, string name, string nat, Date &DJ) {
	dob = db;
	Name = name;
	Nationality = nat;
	DateJoined = DJ;
	IA = true;
}

int Person::getAge() {
	return 2023 - dob.getYear();
}

int Person::getServiceYear() {
	return 2023 - DateJoined.getYear();
}

void Person::LoA(){
	IA = false;
}

void Person::EndLoA() {
	IA = true;
}