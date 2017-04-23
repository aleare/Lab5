#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>

class Exam
{
public:
	Exam();
	Exam(const Exam & to_copy);
	Exam(std::string exam, float credit, int grade);
	Exam(std::string exam, float credit, int grade, bool merit);
	// get functions
	std::string course() const;
	float credits() const;
	int grade() const;
	bool merit() const;
	// set function
	void setGrade(int g, bool m = false); //set grade , and merit in case
	void setCourse(const std::string & course); // set the course info
	void setCredits(float c); //set the credit value
	bool examDone() const; //return true if the exam have been passed
	std::string str() const; // Return a string with the course infromation
private:
	std::string _course;
	float _credits;
	int _grade;
	bool _merit;
};
