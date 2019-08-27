#include <iostream>
#include "geometry.h"
#include "test.h"

using namespace std;

void testSuite::runTestSuite()
{
	int testCount = 0;
	
	TVector3 testVector3a;
	TVector3 testVector3b;
	TVector3 testResultant3;

	testVector3a.x = 1.0;
	testVector3a.y = 2.0;
	testVector3a.z = 3.4;

	testVector3b.x = 4.0;
	testVector3b.y = 3.0;
	testVector3b.z = 3.2;

	testResultant3.x = 5.0;
	testResultant3.y = 5.0;
	testResultant3.z = 6.6;
	
	cout << "Welcome to the MAT101 Geometry Tester." << endl;
	cout << "Current Tests Run: " << testCount << endl;
	cout << "Running Vector Equals function" << endl;

	Equals(testVector3a, testVector3b);
	testCount += 1;

	cout << "Test Complete" << endl;
	cout << "Current Tests Run: " << testCount << endl;
	cout << "Running Vector Add function" << endl;

	Add(testVector3a, testVector3b, testResultant3);
	testCount += 1;

	cout << "Test Complete" << endl;
	cout << "Current Tests Run: " << testCount << endl;
}

testSuite::testSuite()
{

}
testSuite::~testSuite()
{

}