#include <iostream>
#include "geometry.h"
#include "test.h"
#include <cmath>

using namespace std;

void testSuite::runTestSuite()
{
	int testCount = 0;
	
	TVector2 testVector2a;
	TVector2 testVector2b;
	TVector3 testVector3a;
	TVector3 testVector3b;
	TVector3 testResultant3;
	TVector3 testResultant3sub;
	TVector3 testResultant3scalar;
	TVector3 testResultant3cp;
	TVector3 testResultant3n;
	TVector3 testResultant3p;
	T3DLine testLineA;
	TPlane testPlaneA;
	TCircle testCircleA;
	TCircle testCircleB;

	testVector2a.x = 3.0;
	testVector2a.y = 4.0;

	testVector2b.x = 4.5;
	testVector2b.y = 3.6;

	testVector3a.x = 1.0;
	testVector3a.y = 2.0;
	testVector3a.z = 3.4;

	testVector3b.x = 4.0;
	testVector3b.y = 3.0;
	testVector3b.z = 3.2;

	testResultant3.x = 5.0;
	testResultant3.y = 5.0;
	testResultant3.z = 6.6;

	testResultant3sub.x = -3.0;
	testResultant3sub.y = -1.0;
	testResultant3sub.z = 0.2;

	float scalar = 3.0;
	testResultant3scalar.x = 3.0;
	testResultant3scalar.y = 6.0;
	testResultant3scalar.z = 10.2;

	testResultant3cp.x = -3.8;
	testResultant3cp.y = 10.4;
	testResultant3cp.z = -5;

	testResultant3n.x = 0.2457;
	testResultant3n.y = 0.4914;
	testResultant3n.z = 0.8355;

	testResultant3p.x = 1.26086;
	testResultant3p.y = 2.52173;
	testResultant3p.z = 4.28695;

	testLineA.v3q.x = 3.0;
	testLineA.v3q.y = 4.0;
	testLineA.v3q.z = 5.5;

	testLineA.v3v.x = 6.0;
	testLineA.v3v.y = 9.0;
	testLineA.v3v.z = 7.3;

	testPlaneA.normal.x = 4.0;
	testPlaneA.normal.y = 2.0;
	testPlaneA.normal.z = 5.0;

	testPlaneA.point.x = 7.0;
	testPlaneA.point.y = 8.0;
	testPlaneA.point.z = 9.0;

	testCircleA.center.x = 5.0;
	testCircleA.center.y = 4.0;
	testCircleA.radius = 4.0;

	testCircleB.center.x = 3.0;
	testCircleB.center.y = 7.0;
	testCircleB.radius = 8.0;

	cout << "Welcome to the MAT101 Geometry Tester." << endl;
	cout << "Current Tests Run: " << testCount << endl;

	Equals(testVector3a, testVector3b);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;
	
	Add(testVector3a, testVector3b, testResultant3);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	Subtract(testVector3a, testVector3b, testResultant3sub);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	ScaleVector(testVector3a, scalar, testResultant3scalar);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	Magnitude(testVector3a);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	DotProduct(testVector3a, testVector3b);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	CrossProduct(testVector3a, testVector3b, testResultant3cp);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	Normalise(testVector3a, testResultant3n);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	Projection(testVector3a, testVector3b, testResultant3p);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	ComputeAngleBetween(testVector2a, testVector2b);
	testCount += 1;

	cout << "\nTest Complete" << endl;
	cout << "\nCurrent Tests Run: " << testCount << endl;

	ComputeAngleBetween(testVector3a, testVector3b);
	testCount += 1;

	cout << "Test Complete" << endl;
	cout << "Current Tests Run: " << testCount << endl;

	ComputeDistancePointToLine(testLineA, testVector3a);
	testCount += 1;

	cout << "Test Complete" << endl;
	cout << "Current Tests Run: " << testCount << endl;

	ComputeDistancePointToPlane(testPlaneA, testVector3a);
	testCount += 1;

	cout << "Test Complete" << endl;
	cout << "Current Tests Run: " << testCount << endl;

	ComputeDistanceCircleToCircle(testCircleA, testCircleB);
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