#include "stdafx.h"
#include "Person.h"

Person::Person(const Person& to_copy) : _gender(0)
{
}

Person::Person(std::string name, std::string surname, Date date, char gender) : _gender(0)
{
	_name = name;
	_surname = surname;
	_birth_year = date;
	_gender = gender;
}

Date Person::birthDate() const
{
	return _birth_year;
}

std::string Person::name() const
{
	return _name;
}

std::string Person::surname() const
{
	return _surname;
}

char Person::gender() const
{
	return _gender;
}

int Person::age() const
{
	Date age(_birth_year);
	return age.yearsFrom(age);
}

std::string Person::str() const
{
	string str = _name;
	ostringstream year;
	year << _birth_year.year();
	ostringstream gender;
	gender << _gender;
	str.append(" ");
	str.append(year.str());
	str.append(" ");
	str.append(gender.str());
	return str;
}