#include "stdafx.h"
#include "Date.h"

Date::Date()
{
	time_t t = time(0);
	struct tm * now = localtime(&t);
	_year = now->tm_year + 1900;
	_month = now->tm_mon + 1;
	_day = now->tm_mday;
}

Date::Date(int d, int m, int y)
{
	_year = y;
	_month = m;
	_day = d;
	if (_isValid() == false)
	{
		std::cout << "I dati inseriti non sono validi !";
		return;
	}
}

Date::Date(const Date& to_copy)
{
	_year = to_copy.year();
	_month = to_copy.month();
	_day = to_copy.day();
}

int Date::year() const
{
	return _year;
}
int Date::month() const
{
	return _month;
}
int Date::day() const
{
	return _day;
}

int Date::yearsFrom(Date& object)
{
	auto years_from = 2017 - object.year();
	return years_from;
}

void Date::stampaData() const
{
	cout << _day << "/" << _month << "/" << _year << " ";
}

std::string Date::stringaData() const
{
	string out;
	ostringstream _c_day;
	_c_day << _day;
	ostringstream _c_month;
	_c_month << _month;
	ostringstream _c_year;
	_c_year << _year;
	out.append(_c_day.str());
	out.append("/");
	out.append(_c_month.str());
	out.append("/");
	out.append(_c_year.str());
	return out;
}

bool Date::_isValid() const
{
	if (_year >= 1000 && _year <= 2099 && _month >= 1 && _month <= 12 && _day >= 1 && _day <= 31)
	{
		if (_month == 4, 6, 9, 11)
		{
			if (_day == 31) return false;
			else { return true; }
		}
		else if (_month == 2)
		{
			if (_day > 29) return false;
			else { return true; }
		}
		return true;
	}
	else { return false; }
}