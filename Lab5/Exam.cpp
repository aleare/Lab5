#include "stdafx.h"
#include "Exam.h"

Exam::Exam()
{
	_course = "Nessun Esame";
	_grade = 0;
	_credits = 0;
	_merit = false;
}

Exam::Exam(const Exam& to_copy)
{
	_course = to_copy.course();
	_credits = to_copy.credits();
	_grade = to_copy.grade();
	_merit = to_copy.merit();
}

Exam::Exam(std::string exam, float credit, int grade)
{
	_course = exam;
	_credits = credit;
	_grade = grade;
	_merit = false;
}
Exam::Exam(std::string exam, float credit, int grade, bool merit)
{
	_course = exam;
	_credits = credit;
	_grade = grade;
	_merit = merit;
}

std::string Exam::course() const
{
	return _course;
}

float Exam::credits() const
{
	return _credits;
}

int Exam::grade() const
{
	return _grade;
}

bool Exam::merit() const
{
	return _merit;
}

void Exam::setGrade(int g, bool m)
{
	_grade = g;
	_merit = m;
}

void Exam::setCourse(const std::string& course)
{
	_course = course;
}

void Exam::setCredits(float c)
{
	_credits = c;
}

bool Exam::examDone() const
{
	if (_grade >= 18)
	{
		return true;
	}
	else { return false; }
}

std::string Exam::str() const
{
	std::string str = _course;
	std::ostringstream credit;
	credit << _credits;
	std::ostringstream grade;
	grade << _grade;
	str.append(" ");
	str.append(credit.str());
	str.append(" ");
	str.append(grade.str());
	return str;
}