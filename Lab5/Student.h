#pragma once
#include "Person.h"
#include "Date.h"
class Student :
	public Person
{
public:
	Student();
	explicit Student(Person persona);
	Student(Person persona, string institute, int matricola, string course, Date data_iscrizione);
	Student(const Student & to_copy);
	//Get Matricola
	int matricola() const;
	//Get Data Iscrizione
	Date dataIscrizione() const;
	//Get Institute
	string institute() const;
	//Get Course
	string course() const;
	//Person persona(Student Studente);

private:
	string _institute;
	string _course;
	int _matricola = 000000;
	Date _data_iscrizione;
	bool _missing_data;
};
