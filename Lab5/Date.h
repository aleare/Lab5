#pragma once
#include <string>
#include <ctime>
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

class Date
{
public:
	// Dafault Constructor , set the date to the actual date
	Date();
	// Constructor , pass the date in the form of dd,mm,yyyy
	// Note that the program crashes if the date is not valid...
	Date(int d, int m, int y);
	// Copy Constructor
	Date(const Date & to_copy);
	// Getter
	int year() const;
	// Getter
	int month() const;
	// Getter
	int day() const;
	// return the year from the date d, if d it not passed , it returns the year from now.
	// Usefull to compute the age of a persone , where this is the person’s birth date
	static int yearsFrom(Date& object);
	// return the date as a string in the form dd/mm/yyyy
	// Useful to print on the screen
	string stringaData() const;
	// Useful to print on the screen
	void stampaData() const;
private:
	bool _isValid() const;
	int _year;
	int _month;
	int _day;
};
