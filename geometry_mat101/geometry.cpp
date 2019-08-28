#include "geometry.h"
#include <iostream>
#include <cmath>

using namespace std;

bool Equals(const TVector3& _vectorA, const TVector3& _vectorB) {

	cout << "This function compares two vectors to determine if they are equal." << endl;
	cout << "First Vector Supplied: [" << _vectorA.x << ", " << _vectorA.y << ", " << _vectorA.z << "]" << endl;
	cout << "First Vector Supplied: [" << _vectorB.x << ", " << _vectorB.y << ", " << _vectorB.z << "]" << endl;

	if ((_vectorA.x == _vectorB.x) && (_vectorA.y == _vectorB.y) && ((_vectorA.z < FLT_EPSILON) == (_vectorB.z < FLT_EPSILON))) {
		cout << "\nVectors are equal." << endl;
		return true;
	}
	else {
		cout << "Vectors are not equal." << endl;
		return false;
	}
}

TVector3& Add(const TVector3& _vectorA, const TVector3& _vectorB, TVector3& _resultant)
{
	TVector3 calcResult;
	calcResult.x = (_vectorA.x + _vectorB.x);
	calcResult.y = (_vectorA.y + _vectorB.y);
	calcResult.z = (_vectorA.z + _vectorB.z);
	
	cout << "\nThis function takes two vectors and a resultant vector as parameters." << endl;
	cout << "\nThe two vectors are added and the resultant vector is then compared to the one passed in to the function" << endl;
	cout << "\nThe calculated result was: [" << calcResult.x << ", " << calcResult.y << ", " << calcResult.z << "]" << endl;
	cout << "\nThe supplied result was: [" << _resultant.x << ", " << _resultant.y << ", " << _resultant.z << "]" << endl;

	if ((calcResult.x == _resultant.x) && (calcResult.y == _resultant.y) && ((calcResult.z < FLT_EPSILON) == (_resultant.z < FLT_EPSILON)) ){
		cout << "Vector Resultants Match." << endl;
	}
	else {
		cout << "Resultant vectors mismatch. Check inputs (or check this function)." << endl;
	}
	return calcResult;
}

TVector3& Subtract(const TVector3& _vectorA, const TVector3& _vectorB, TVector3& _resultant)
{
	TVector3 calcResult;
	calcResult.x = (_vectorA.x - _vectorB.x);
	calcResult.y = (_vectorA.y - _vectorB.y);
	calcResult.z = (_vectorA.z - _vectorB.z);

	cout << "\nThis function takes two vectors and a resultant vector as parameters." << endl;
	cout << "\nThe two vectors are subtracted and the resultant vector is then compared to the one passed in to the function" << endl;
	cout << "\nThe calculated result was: [" << calcResult.x << ", " << calcResult.y << ", " << calcResult.z << "]" << endl;
	cout << "\nThe supplied result was: [" << _resultant.x << ", " << _resultant.y << ", " << _resultant.z << "]" << endl;

	if ((calcResult.x == _resultant.x) && (calcResult.y == _resultant.y) && ((calcResult.z < FLT_EPSILON) == (_resultant.z < FLT_EPSILON))) {
		cout << "Vector Resultants Match." << endl;
	}
	else {
		cout << "Resultant vectors mismatch. Check inputs (or check this function)." << endl;
	}
	return calcResult;
}

TVector3& ScaleVector(const TVector3& _vectorA, const float _scalar, TVector3& _resultant)
{
	TVector3 calcResult;
	calcResult.x = (_vectorA.x * _scalar);
	calcResult.y = (_vectorA.y * _scalar);
	calcResult.z = (_vectorA.z * _scalar);

	cout << "\nThis function takes a vector and a scale factor, and a resultant." << endl;
	cout << "\nThe vector is scaled by the supplied factor." << endl;
	cout << "\nThe resultant vector is then compared to the one passed in to the function" << endl;
	cout << "\nThe calculated result was: [" << calcResult.x << ", " << calcResult.y << ", " << calcResult.z << "]" << endl;
	cout << "\nThe supplied result was: [" << _resultant.x << ", " << _resultant.y << ", " << _resultant.z << "]" << endl;

	if ((calcResult.x == _resultant.x) && (calcResult.y == _resultant.y) && ((calcResult.z < FLT_EPSILON) == (_resultant.z < FLT_EPSILON))) {
		cout << "\nVector Resultants Match." << endl;
	}
	else {
		cout << "\nResultant vectors mismatch. Check inputs (or check this function)." << endl;
	}
	return calcResult;
}


float Magnitude(const TVector3& _vectorA) {

	cout << "\nThis function computes the magnitude of the vector passed to the function." << endl;
	cout << "\nVector Supplied: [" << _vectorA.x << ", " << _vectorA.y << ", " << _vectorA.z << "]" << endl;
	
	float magnitude = 0.0;

	magnitude = sqrt(pow(_vectorA.x, 2)+ pow(_vectorA.y, 2)+ pow(_vectorA.z, 2));

	cout << "\nMagnitude of supplied vector is: " << magnitude << endl;
	
	return magnitude;
}

float DotProduct(const TVector3& _vectorA, const TVector3& _vectorB) {
	
	cout << "\nThis function computes the Dot Product of two vectors passed to the function." << endl;
	float dotProduct = ((_vectorA.x * _vectorB.x) + (_vectorA.y * _vectorB.y) + (_vectorA.z * _vectorB.z));
	
	cout << "\nDot Product of supplied vector is: " << dotProduct << endl;

	return dotProduct;
}

TVector3& CrossProduct(const TVector3& _vectorA, const TVector3& _vectorB, TVector3& _resultant) {

	cout << "\nThis function computes the Cross Product of two vectors passed to the function." << endl;

	TVector3 crossProduct;
	crossProduct.x = ((_vectorA.y * _vectorB.z) - (_vectorA.z * _vectorB.y));
	crossProduct.y = ((_vectorA.z * _vectorB.x) - (_vectorA.x * _vectorB.z));
	crossProduct.z = ((_vectorA.x * _vectorB.y) - (_vectorA.y * _vectorB.x));

	cout << "\nThe calculated result was: [" << crossProduct.x << ", " << crossProduct.y << ", " << crossProduct.z << "]" << endl;
	cout << "\nThe supplied result was: [" << _resultant.x << ", " << _resultant.y << ", " << _resultant.z << "]" << endl;

	if (((crossProduct.x < FLT_EPSILON) == (_resultant.x < FLT_EPSILON)) && ((crossProduct.y < FLT_EPSILON) == (_resultant.y < FLT_EPSILON)) && ((crossProduct.z < FLT_EPSILON) == (_resultant.z < FLT_EPSILON))) {
		cout << "\nVector Resultants Match." << endl;
	}
	else {
		cout << "\nResultant vectors mismatch. Check inputs (or check this function)." << endl;
	}

	return crossProduct;
}

TVector3& Normalise(const TVector3& _vectorA, TVector3& _resultant) {

	cout << "\nThis function computes the Normalisation (Unit vector) of the vector passed to the function." << endl;

	TVector3 normalisedVec;
	float vecMagnitude = sqrt(pow(_vectorA.x, 2) + pow(_vectorA.y, 2) + pow(_vectorA.z, 2));
	normalisedVec.x = _vectorA.x * (1 / vecMagnitude);
	normalisedVec.y = _vectorA.y * (1 / vecMagnitude);
	normalisedVec.z = _vectorA.z * (1 / vecMagnitude);

	cout << "\nThe calculated result was: [" << normalisedVec.x << ", " << normalisedVec.y << ", " << normalisedVec.z << "]" << endl;
	cout << "\nThe supplied result was: [" << _resultant.x << ", " << _resultant.y << ", " << _resultant.z << "]" << endl;


	if (((normalisedVec.x < FLT_EPSILON) == (normalisedVec.x < FLT_EPSILON)) && ((normalisedVec.y < FLT_EPSILON) == (_resultant.y < FLT_EPSILON)) && ((normalisedVec.z < FLT_EPSILON) == (_resultant.z < FLT_EPSILON))) {
		cout << "\nVector Resultants Match." << endl;
	}
	else {
		cout << "\nResultant vectors mismatch. Check inputs (or check this function)." << endl;
	}

	return normalisedVec;
}

TVector3& Projection(const TVector3& _vectorA, const TVector3& _vectorB, TVector3& _resultant) {

	TVector3 projectionVec;
	float vecAMagnitude = sqrt(pow(_vectorA.x, 2) + pow(_vectorA.y, 2) + pow(_vectorA.z, 2));
	float vecDotProduct = ((_vectorA.x * _vectorB.x) + (_vectorA.y * _vectorB.y) + (_vectorA.z * _vectorB.z));

	cout << "\nThis function computes the Projection of the first vector onto the second passed to the function." << endl;
	cout << "And then compares the resultant to that supplied." << endl;

	projectionVec.x = (vecDotProduct / pow(vecAMagnitude, 2)) * _vectorA.x;
	projectionVec.y = (vecDotProduct / pow(vecAMagnitude, 2)) * _vectorA.y;
	projectionVec.z = (vecDotProduct / pow(vecAMagnitude, 2)) * _vectorA.z;

	cout << "\nThe calculated result was: [" << projectionVec.x << ", " << projectionVec.y << ", " << projectionVec.z << "]" << endl;
	cout << "\nThe supplied result was: [" << _resultant.x << ", " << _resultant.y << ", " << _resultant.z << "]" << endl;

	if (((projectionVec.x) == (_resultant.x < FLT_EPSILON)) && ((projectionVec.y) == (_resultant.y < FLT_EPSILON)) && ((projectionVec.z) == (_resultant.z < FLT_EPSILON))) {
		cout << "\nVector Resultants Match." << endl;
	}
	else {
		cout << "\nResultant vectors mismatch. Check inputs (or check this function)." << endl;
	}

	return projectionVec;
}
