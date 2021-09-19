#pragma once
#include "Person.h"

const int INIT_CAP = 8;
class FamilyTree
{
private:
	Person* family;
	int size;
	int capacity;
protected:
	void resize();
	void clear();
public:
	FamilyTree();
	~FamilyTree();

	void add(const Person&);
	void print() const;
};