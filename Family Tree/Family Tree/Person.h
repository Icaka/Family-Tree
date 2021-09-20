#pragma once

class Person
{
private:
	char* name;
	int age;
	Person* mother;
	Person* father;
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
	void printParents() const;
	
	void addMother(Person*);
	void addFather(Person*);
	Person* getMother() const;
	Person* getFather() const ;
};