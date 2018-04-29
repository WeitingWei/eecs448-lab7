#ifndef TEST_H
#define TEST_H
#include <iostream>
#include "LinkedListOfInts.h"
#include <string>
using namespace std;

class Test
{
public:
	Test();
	~Test();
	void runTests();
	void isEmptyTest();
	void testSearch();
	void addBackTest();
	void addFrontTest();
	void removeBackTest();
	void removeFrontTest();
	void runTests();
};
#endif

