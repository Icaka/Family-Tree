#include "Person.h"
#include <iostream>

Person::Person()
{
	name = '\0';
	age = 0;
}

Person::Person(const char* n, const int a)
{
	setName(n);
	setAge(a);
}

Person::~Person()
{
	delete[] name;
}

char* Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}

void Person::setName(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Person::setAge(const int a)
{
	age = a;
}

void Person::print() const
{
	std::cout << name << ": " << age << std::endl;
}