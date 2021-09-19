#include "FamilyTree.h"

FamilyTree::FamilyTree()
{
	capacity = INIT_CAP;
	family = new Person[capacity];
	size = 0;
}

FamilyTree::~FamilyTree()
{
	clear();
}

void FamilyTree::clear()
{
	delete[] family;
}

void FamilyTree::resize()
{
	int newCap = capacity * 2;
	Person* newFamily = new Person[newCap];
	for (int i = 0; i < size; i++)
		newFamily[i] = family[i];
	clear();
	family = newFamily;
	capacity = newCap;
}

void FamilyTree::add(const Person& member)
{
	if (size >= capacity)
	{
		resize();
	}
	family[size] = member;
	size++;
}

void FamilyTree::print() const
{
	for (int i = 0; i < size; i++)
		family[i].print();
}
