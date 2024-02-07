// 13 - Collinearity (CodeWars Exercise)

// Given two vectors, return whether or not they are collinear

#include <cstdlib>

bool collinearity(int x1, int y1, int x2, int y2)
{
	return x1 * y2 == y1 * x2;
}
