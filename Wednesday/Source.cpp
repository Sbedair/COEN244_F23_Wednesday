#include "Admin.h"
#include "Professor.h"
#include "Student.h"
#include "UniversityManager.h"
#include <iostream>

using namespace std;

int main() {
	Date* d1 = new Date(6,6,2006);
	Date* d2 = new Date(11,11,2011);
	Course* C1 = new Course("Programming", "COEN244", 8,9,3);

	Student* S1 = new Student(*d1, "Timothee", "MURIKAAA", *d2, "COEN");
	S1->AddCourse(C1);
	
	Professor* P1 = new Professor("ECE", 90, 20, *d1, "John", "MURIKA", *d2);

	UniversityManager* U = new UniversityManager();
	/*cout <<"Student Added: " << U->addStudent(S1);
	cout << "Student Added: " << U->addStudent(S1);
	cout << "Student removed: " << U->remStudent(S1);
	cout << "Student removed: " << U->remStudent(S1);*/

	/*cout << "Prof Added: " << U->addProf(P1);
	cout << "Prof removed: " << U->remProf(P1);*/


}