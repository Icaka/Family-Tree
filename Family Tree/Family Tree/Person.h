#pragma once

class Person
{
private:
	char* name;
	int age;
protected:
	void copy(const Person&);
	void clear();
public:
	Person();
	Person(const char*, const int);
	Person& operator=(const Person&);
	~Person();

	char* getName() const;
	int getAge() const;
	void setName(const char*);
	void setAge(const int);
	void print() const;
};