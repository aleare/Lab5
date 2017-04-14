// Lab5.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
#include "Date.h"
#include "Person.h"
#include "Student.h"
#include "StudentBook.h"

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
	StudentBook Luca(Person("Luca", "Rossi", oggi, 'M'));
	std::cout << Luca.str();
}