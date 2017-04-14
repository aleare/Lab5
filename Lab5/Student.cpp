#include "stdafx.h"
#include "Student.h"

Student::Student(Person persona) : Person(persona.name(), persona.surname(), persona.birthDate(), persona.gender())
{
	_missing_data = true;
}

Student::Student(Person persona, int matricola, Date data_iscrizione) : Person(persona.name(), persona.surname(), persona.birthDate(), persona.gender())
{
	_missing_data = false;
	_matricola = matricola;
	_data_iscrizione = data_iscrizione;
}

//Student::Student(const Student& to_copy) : Person()
//{
//}

int Student::matricola() const
{
	return _matricola;
}

Date Student::dataIscrizione() const
{
	return _data_iscrizione;
}