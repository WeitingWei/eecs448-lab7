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
