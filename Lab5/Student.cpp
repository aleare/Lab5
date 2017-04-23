#include "stdafx.h"
#include "Student.h"

Student::Student(Person persona) : Person(persona.name(), persona.surname(), persona.birthDate(), persona.gender())
{
	_missing_data = true;
}

Student::Student(Person persona, string institute, int matricola, string course, Date data_iscrizione) : Person(persona.name(), persona.surname(), persona.birthDate(), persona.gender())
{
	_missing_data = false;
	_matricola = matricola;
	_data_iscrizione = data_iscrizione;
	_institute = institute;
	_course = course;
}

Student::Student(const Student& to_copy) : Person(to_copy)
{
	_missing_data = to_copy._missing_data;
	_matricola = to_copy._matricola;
	_data_iscrizione = to_copy.dataIscrizione();
	_course = to_copy.course();
	_institute = to_copy.institute();
}

int Student::matricola() const
{
	return _matricola;
}

Date Student::dataIscrizione() const
{
	return _data_iscrizione;
}

string Student::institute() const
{
	return _institute;
}

string Student::course() const
{
	return _course;
}