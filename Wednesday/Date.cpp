#include "Date.h"

Date::Date() {
	day = 1;
	month = 1;
	year = 2000;
}

Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

string Date::getDate() {
	return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

int Date::getYear() {
	return year;
}