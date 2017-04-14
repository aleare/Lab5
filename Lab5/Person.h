#pragma once
#include <string>
#include "Date.h"

class Person
{
public:
	// constructors
	Person(const Person & to_copy);
	Person(std::string name, std::string surname, Date date, char gender);
	// getters
	Date birthDate() const;
	std::string name() const;
	std::string surname() const;
	char gender() const; //’M’ = male , ’F’ = female
	int age() const; // you can use a method of date here
	std::string str() const; //return a string with the person information

private:
	std::string _name;
	std::string _surname;
	Date _birth_year;
	char _gender;
};
