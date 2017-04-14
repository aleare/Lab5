#pragma once
#include "Person.h"
#include "Date.h"
class Student :
	public Person
{
public:
	Student(Person persona);
	Student(Person persona, int matricola, Date data_iscrizione);
	Student(const Student & to_copy);
	//Get Matricola
	int matricola() const;
	//Get Data Iscrizione
	Date dataIscrizione() const;
	//Person persona(Student Studente);

private:
	string _istitute;
	int _matricola = 000000;
	Date _data_iscrizione;
	bool _missing_data;
};
