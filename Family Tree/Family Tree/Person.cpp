#include "Person.h"
#include <iostream>

Person::Person()
{
	name = '\0';
	age = 0;
	mother = nullptr;
	father = nullptr;
}

Person::Person(const char* n, const int a)
{
	setName(n);
	setAge(a);
	mother = nullptr;
	father = nullptr;
}

Person& Person::operator=(const Person& other)
{
	if (this != &other)
	{
		clear();
		copy(other);
	}
	return *this;
}

Person::~Person()
{
	clear();
}

void Person::copy(const Person& other)
{
	name = new char[strlen(other.getName()) + 1];
	strcpy_s(name, strlen(other.getName()) + 1, other.getName());
	age = other.getAge();
	mother = other.getMother();
	father = other.getFather();
}

void Person::clear()
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

void Person::printParents() const
{
	std::cout << "Mother: ";
	if (mother != nullptr)
		std::cout << mother->getName();
	std::cout << "; Father: ";
	if (father != nullptr)
		std::cout << father->getName();
	std::cout << std::endl;

}

void Person::addMother(Person* mom)
{
	mother = mom;
}

void Person::addFather(Person* dad)
{
	father = dad;
}

Person* Person::getMother() const
{
	return mother;
}

Person* Person::getFather() const
{
	return father;
}