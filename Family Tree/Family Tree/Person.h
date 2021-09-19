#pragma once

class Person
{
private:
	char* name;
	int age;
public:
	Person();
	Person(const char*, const int);
	~Person();

	char* getName() const;
	int getAge() const;
	void setName(const char*);
	void setAge(const int);
	void print() const;
};