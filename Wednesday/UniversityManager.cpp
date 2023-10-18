#include "UniversityManager.h"

UniversityManager::UniversityManager() {
	for (int i = 0; i < 200; i++) {
		students[i] = nullptr;
	}
	for (int i = 0; i < 100; i++) {
		professors[i] = nullptr;
	}
	ProfCount = 0;
	StudentCount = 0;
}

bool UniversityManager::addStudent(Student *st) {
	if (StudentCount == 200) { return false; }
	for (int i = 0; i < 200; i++) {
		if (students[i] == nullptr) {
			students[i] = st;
			StudentCount++;
			return true;
		}
	}
	return false;
}

bool UniversityManager::addProf(Professor* p) {
	if (ProfCount == 100) { return false; }
	for (int i = 0; i < 100; i++) {
		if (professors[i] == nullptr) {
			professors[i] = p;
			ProfCount++;
			return true;
		}
	}
	return false;
}

bool UniversityManager::remProf(Professor* p) { 
	if (ProfCount == 0) { return false; }
	for (int i = 0; i < 100; i++) {
		if (professors[i] == p) {
			professors[i] = nullptr;
			ProfCount--;
			return true;
		}
	}
	return false;
}

bool UniversityManager::remStudent(Student* s) {
	if (StudentCount == 0) { return false; }
	for (int i = 0; i < 200; i++) {
		if (students[i] == s) {
			students[i] = nullptr;
			StudentCount--;
			return true;
		}
	}
	return false;
}