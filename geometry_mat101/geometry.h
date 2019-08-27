#pragma once
///Do not change this file///

enum EIntersections
{
	INTERSECTION_NONE,
	INTERSECTION_ONE,
	INTERSECTION_TWO
};
struct TVector2
{
	float x;
	float y;
};

struct TTriangle2
{
	TVector2 p1;
	TVector2 p2;
	TVector2 p3;
};

struct TRectangle
{
	TVector2 p1;
	TVector2 p2;
};

struct TVector3
{
	float x;
	float y;
	float z;
};

struct TTriangle3
{
	TVector3 p1;
	TVector3 p2;
	TVector3 p3;
};

struct T3DLine
{
	TVector3 v3q;
	//point on the line     
	TVector3 v3v;
	//direction vector along the line 
};

struct TCircle
{
	TVector2 center;
	float radius;
};

struct TPlane
{
	TVector3 normal;
	TVector3 point;
};

struct TSphere
{
	TVector3 center;
	float radius;
};

bool Equals(const TVector3& _vectorA, const TVector3& _vectorB);

TVector3& Add(const TVector3& _vectorA,
	const TVector3& _vectorB,
	TVector3& _resultant);

TVector3& Subtract(const TVector3& _vectorA,
	const TVector3& _vectorB,
	TVector3& _resultant);

TVector3& ScaleVector(const TVector3& _vectorA,
	const float _scalar,
	TVector3& _resultant);

float Magnitude(const TVector3& _vectorA);
 
float DotProduct(const TVector3& _vectorA, const TVector3& _vectorB);

TVector3& CrossProduct(const TVector3& _vectorA, const TVector3& _vectorB, TVector3& _resultant);

TVector3& Normalise(const TVector3& _vectorA, TVector3& _resultant);

TVector3& Projection(const TVector3& _vectorA, const TVector3& _vectorB, TVector3& _resultant);

float ComputeAngleBetween(const TVector2& _vectorA,
	const TVector2& _vectorB);

float ComputeAngleBetween(const TVector3& _vectorA,
	const TVector3& _vectorB);

float ComputeDistancePointToLine(const T3DLine& _line,
	const TVector3& _point);

float ComputeDistancePointToPlane(const TPlane& _plane, const TVector3& _point);

float ComputeDistanceCircleToCircle(const TCircle& _circle1, const TCircle& _circle2);

float ComputeDistanceCircleToTriangle(const TCircle& _circle, const TTriangle2& _triangle);

TVector3& ComputeIntersectionBetweenLines(const T3DLine& _line1,
	const T3DLine& _line2,
	TVector3& _intersectionPoint);

TVector3& FindTriangleNormal(const TTriangle3& _triangle, TVector3& _normal);

