#include "Test.h"
using namespace std;

Test::Test()
void Test::runTest()
{
    isEmptyTest();
	testSearch();
	addBackTest();
	addFrontTest();
	removeBackTest();
	removeFrontTest();
	runTests();
}
void Test::isEmptyTest()
{
  cout << "Begin isEmptyTest" <<endl;
}
if (testList -> isEmpty() == true)
{
    cout << "success" <<endl;
}
else{
    cout << "not success"<<endl;
}
void Test::addBackTest()
{
    cout << "Begin addBack function test"<<endl;

    LinkedListOfInts* testList = new LinkedListOfInts();

    try
    {
        cout << "Adding";
        for(auto it = intList.begin(); it != intList.end(); it++)
        {
            testList->addBack(*it);
        }
    
        if(testList->size() == 100)
        {
            cout << "pass." <<endl;
        }
        else
        {
            cout << "fail, " << testList->size() << "elememt(s) in the list." <<endl;
        }
