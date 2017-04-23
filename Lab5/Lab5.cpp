// Lab5.cpp : definisce il punto di ingresso dell'applicazione console.
//
//seconda modifica
#include "stdafx.h"
#include <iostream>
#include "Date.h"
#include "Person.h"
#include "Student.h"
#include "Studentbook.h"
//#include "StudentBook.h"

int main()
{
	Date oggi;
	Date data(18, 2, 1995);
	data.stampaData();
	cout << data.year();
	cout << endl << data.yearsFrom(data) << endl;
	cout << data.stringaData() << endl;
	Person Mario("Mario", "Costa", data, 'M');
	std::cout << Mario.str();
	std::cout << endl;
	Studentbook Luca(Student(Person("Luca", "Rossi", oggi, 'M'), "POLITO", 390989, "Ing Elettronica", Date(2, 7, 1999)));
	Luca.addExam(Exam("Circuiti", 10, 26));
	Luca.addExam(Exam("Analisi", 8, 22));
	Luca.addExam(Exam("Metodi", 10, 28));
	Luca.report();
}