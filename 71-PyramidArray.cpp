// 71 - Pyramid Array (CodeWars Exercise)

/*
Write a function that when given a number >= 0, returns an Array of ascending length subarrays.

pyramid(0) => [ ]
pyramid(1) => [ [1] ]
pyramid(2) => [ [1], [1, 1] ]
pyramid(3) => [ [1], [1, 1], [1, 1, 1] ]
*/

#include <vector>
#include <cstdlib>

std::vector<std::vector<int>> pyramid(std::size_t n) 
{
    std::vector<std::vector<int>> pyramid;
  
    for (size_t i = 1; i <= n; ++i)
        pyramid.push_back(std::vector<int>(i, 1));
    
    return pyramid;
}