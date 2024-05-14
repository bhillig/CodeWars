// 50 - You're a square (CodeWars Exercise)

#include <cmath>

bool is_square(int n)
{
    return sqrt(n) == std::ceil(sqrt(n));
}
