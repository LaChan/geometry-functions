#include "geometry.h"
#include <iostream>
#include <cmath>

using namespace std;

bool Equals(const TVector3& _vectorA, const TVector3& _vectorB) {

	cout << "\nThis function compares two vectors to determine if they are equal." << endl;
	cout << "\nFirst Vector Supplied: [" << _vectorA.x << ", " << _vectorA.y << ", " << _vectorA.z << "]" << endl;
	cout << "\nSecond Vector Supplied: [" << _vectorB.x << ", " << _vectorB.y << ", " << _vectorB.z << "]" << endl;

	if ((_vectorA.x == _vectorB.x) && (_vectorA.y == _vectorB.y) && ((_vectorA.z < FLT_EPSILON) == (_vectorB.z < FLT_EPSILON))) {
		cout << "\nVectors are equal." << endl;
		return true;
	}
	else {
		cout << "\nVectors are not equal." << endl;
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
		cout << "\nVector Resultants Match." << endl;
	}
	else {
		cout << "\nResultant vectors mismatch. Check inputs (or check this function)." << endl;
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
		cout << "\nVector Resultants Match." << endl;
	}
	else {
		cout << "\nResultant vectors mismatch. Check inputs (or check this function)." << endl;
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

	if (((projectionVec.x < FLT_EPSILON) == (_resultant.x < FLT_EPSILON)) && ((projectionVec.y < FLT_EPSILON) == (_resultant.y < FLT_EPSILON)) && ((projectionVec.z < FLT_EPSILON) == (_resultant.z < FLT_EPSILON))) {
		cout << "\nVector Resultants Match." << endl;
	}
	else {
		cout << "\nResultant vectors mismatch. Check inputs (or check this function)." << endl;
	}

	return projectionVec;
}

float ComputeAngleBetween(const TVector2& _vectorA, const TVector2& _vectorB) {

	cout << "\nThis function computes the angle between two 2D vectors passed to the function." << endl;

	float angleBetweenDotProduct = ((_vectorA.x * _vectorB.x) + (_vectorA.y * _vectorB.y));
	float angleBetweenMagnitudeA = sqrt(pow(_vectorA.x, 2) + pow(_vectorA.y, 2));
	float angleBetweenMagnitudeB = sqrt(pow(_vectorB.x, 2) + pow(_vectorB.y, 2));

	float angleBetween = (angleBetweenDotProduct / (angleBetweenMagnitudeA * angleBetweenMagnitudeB));
	cout << "\nThe calculated result was:" << angleBetween << endl;

	return angleBetween;
}

float ComputeAngleBetween(const TVector3& _vectorA, const TVector3& _vectorB) {

	cout << "\nThis function computes the angle between two 3D vectors passed to the function." << endl;

	float angleBetweenDotProduct = ((_vectorA.x * _vectorB.x) + (_vectorA.y * _vectorB.y)+ (_vectorA.z * _vectorB.z));
	float angleBetweenMagnitudeA = sqrt((pow(_vectorA.x, 2) + pow(_vectorA.y, 2) + pow(_vectorA.z, 2)));
	float angleBetweenMagnitudeB = sqrt((pow(_vectorB.x, 2) + pow(_vectorB.y, 2) + pow(_vectorB.z, 2)));

	float angleBetween = (angleBetweenDotProduct / (angleBetweenMagnitudeA * angleBetweenMagnitudeB));
	cout << "\nThe calculated result was:" << angleBetween << endl;

	return angleBetween;
}

float ComputeDistancePointToLine(const T3DLine& _line, const TVector3& _point) {

	cout << "\nThis function computes the distance between a point and a line." << endl;

	//calculate the cross product of a and b
	TVector3 crossProduct;
	crossProduct.x = ((_line.v3q.y * _point.z) - (_line.v3q.z * _point.y));
	crossProduct.y = ((_line.v3q.z * _point.x) - (_line.v3q.x * _point.z));
	crossProduct.z = ((_line.v3q.x * _point.y) - (_line.v3q.y * _point.x));

	//find magnitude of cross product
	float xProductMag = sqrt(pow(crossProduct.x, 2) + pow(crossProduct.y, 2) + pow(crossProduct.z, 2));

	//find magnitude of just a
	float pointMag = sqrt(pow(_line.v3q.x, 2) + pow(_line.v3q.y, 2) + pow(_line.v3q.z, 2));

	//calc distance
	float distance = xProductMag / pointMag;

	cout << "\nDistance calculated: " << distance << endl;

	return distance;
}

float ComputeDistancePointToPlane(const TPlane& _plane, const TVector3& _point) {

	cout << "\nThis function computes the shortest distance between a point and a plane." << endl;

	//find the difference between Point and Point on plane
	TVector3 vecBetweenPoints;
	
	vecBetweenPoints.x = (_point.x - _plane.point.x);
	vecBetweenPoints.y = (_point.y - _plane.point.y);
	vecBetweenPoints.z = (_point.z - _plane.point.z);

	//calculate magnitude of normal vector
	float normalMag	= sqrt(pow(_plane.normal.x, 2) + pow(_plane.normal.y, 2) + pow(_plane.normal.z, 2));

	//calculate dot product of vector between the points and plane's normal vector
	float dotProductNB = ((_plane.normal.x * vecBetweenPoints.x)
		+ (_plane.normal.y * vecBetweenPoints.y) 
		+ (_plane.normal.z * vecBetweenPoints.z));

	float distaneP2Plane = dotProductNB / normalMag;

	cout << "\nDistance calculated: " << distaneP2Plane << endl;

	return distaneP2Plane;

}

float ComputeDistanceCircleToCircle(const TCircle& _circle1, const TCircle& _circle2) {

	cout << "\nThis function computes the shortest distance between the edges of two circles." << endl;
	
	//calculate distance between centre of circles, then subctract the radius
	float distanceC2C = sqrt(pow((_circle2.center.x - _circle1.center.x), 2) + pow((_circle2.center.y - _circle1.center.y), 2)) - (_circle2.radius + _circle1.radius);

	cout << "\nDistance calculated: " << distanceC2C << endl;

	return distanceC2C;
}

float ComputeDistanceCircleToTriangle(const TCircle& _circle, const TTriangle2& _triangle) {

	cout << "\nThis function computes the distance between the centre of a given circle and a triangle." << endl;
	//define variables
	TVector2 centroid;
	centroid.x = 0.0;
	centroid.y = 0.0;

	// find centroid of triangle
	centroid.x = (_triangle.p1.x + _triangle.p2.x + _triangle.p3.x) / 3;
	centroid.y = (_triangle.p1.y + _triangle.p2.y + _triangle.p3.y) / 3;

	float distanceC2T = sqrt(pow((_circle.center.x - centroid.x), 2) + pow((_circle.center.y - centroid.y), 2));

	return distanceC2T;
}

TVector3& FindTriangleNormal(const TTriangle3& _triangle, TVector3& _normal) {
	
	cout << "\nThis function computes the normal vector of a given triangle." << endl;

	TVector3 U;
	TVector3 V;

	U.x = (_triangle.p2.x - _triangle.p1.x);
	U.y = (_triangle.p2.y - _triangle.p1.y);
	U.z = (_triangle.p2.z - _triangle.p1.z);
	V.x = (_triangle.p3.x - _triangle.p1.x);
	V.y = (_triangle.p3.y - _triangle.p1.y);
	V.z = (_triangle.p3.z - _triangle.p1.z);
	
	TVector3 triNormal;
	
	triNormal.x = (U.y * V.z) - (U.z * V.y);
	triNormal.y = (U.z * V.x) - (U.x * V.z);
	triNormal.z = (U.x * V.y) - (U.y * V.x);

	cout << "\nThe supplied result was: [" << _normal.x << ", " << _normal.y << ", " << _normal.z << "]" << endl;
	cout << "\nThe calculated result was: [" << triNormal.x << ", " << triNormal.y << ", " << triNormal.z << "]" << endl;
	
	return triNormal;
}