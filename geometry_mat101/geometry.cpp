#include "geometry.h"
#include <iostream>

using namespace std;

bool Equals(const TVector3& _vectorA, const TVector3& _vectorB) {

	if ((_vectorA.x == _vectorB.x) && (_vectorA.y == _vectorB.y) && ((_vectorA.z < FLT_EPSILON) == (_vectorB.z < FLT_EPSILON))) {
		cout << "Vectors match" << endl;
		return true;
	}
	else {
		cout << "Vectors mismatch" << endl;
		return false;
	}
}

TVector3& Add(const TVector3& _vectorA, const TVector3& _vectorB, TVector3& _resultant)
{
	TVector3 calcResult;
	calcResult.x = (_vectorA.x + _vectorB.x);
	calcResult.y = (_vectorA.y + _vectorB.y);
	calcResult.z = (_vectorA.z + _vectorB.z);
	
	cout << "This function takes two vectors and a resultant vector as parameters." << endl;
	cout << "The two vectors are added and the resultant vector is then compared to the one passed in to the function" << endl;
	cout << "The calculated result was: [" << calcResult.x << ", " << calcResult.y << ", " << calcResult.z << "]" << endl;
	cout << "The supplied result was: [" << _resultant.x << ", " << _resultant.y << ", " << _resultant.z << "]" << endl;

	if ((calcResult.x == _resultant.x) && (calcResult.y == _resultant.y) && ((calcResult.z < FLT_EPSILON) == (_resultant.z < FLT_EPSILON)) ){
		cout << "Vector Resultants Match." << endl;
	}
	else {
		cout << "Resultant vectors mismatch. Check inputs (or check this function)." << endl;
	}
	return calcResult;
}




