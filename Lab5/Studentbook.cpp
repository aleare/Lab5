#include "stdafx.h"
#include "Studentbook.h"

Studentbook::Studentbook(Student studente)
{
}

void Studentbook::addExam(Exam Esame)
{
	_esami[_ecurr].setCourse(Esame.course());
	_esami[_ecurr].setCredits(Esame.credits());
	_esami[_ecurr].setGrade(Esame.grade(), Esame.merit());
	_ecurr++;
}

void Studentbook::report() const
{
	for (int i = 0; i < _ecurr; ++i)
	{
		std::cout << _esami[i].str();
		std::cout << endl;
	}
}