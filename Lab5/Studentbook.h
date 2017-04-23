#pragma once
#include "Student.h"
#include "Exam.h"

class Studentbook
{
public:
	Studentbook(Student studente);
	//Aggiungi Esame
	void addExam(Exam Esame);
	void report() const;
private:
	Exam _esami[20];
	//Indica il numero di esami aggiunti
	int _ecurr = 0;
};
