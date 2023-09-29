#pragma once
#include <string>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int d, int m, int y);
	string getDate();
	void setDate(int d, int m, int y);
	int getYear();
};


