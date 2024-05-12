// 49 - Is this a triangle? (CodeWars Exercise)

#include <math.h>  

namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
	// Ensure no sides are negative
    if (a < 0 || b < 0 || c < 0) return false;
    
	// Using Heron's formula to calc area with 3 side lengths (a,b,c)
	// If an area is > 0 then the triangle is possible
    const float s = (a + b + c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area > 0.f;
  }
};