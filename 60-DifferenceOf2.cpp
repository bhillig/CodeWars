// 60 - Difference of 2 (CodeWars Exercise)

/*
The objective is to return all pairs of integers from a given array of integers that have a difference of 2.

The result array should be sorted in ascending order of values.

Assume there are no duplicate integers in the array. The order of the integers in the input array should not matter.
*/


#include <utility>
#include <vector>
#include <set>

std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) 
{
    std::set<std::vector<int>> seenPairs;

    for (size_t i = 0; i < vec.size(); ++i)
    {
        for (size_t j = i + 1; j < vec.size(); ++j)
        {
            // If the differnece is not 2, continue
            const int diff = std::abs(vec[i] - vec[j]);
            if (diff != 2) continue;
            
            std::vector<int> pair;
          
            // Add the new pair in ascending order
            if (vec[i] < vec[j])
            {
                pair.push_back(vec[i]);
                pair.push_back(vec[j]);
            }
            else
            {
                pair.push_back(vec[j]);
                pair.push_back(vec[i]);
            }
          
            if (seenPairs.find(pair) != seenPairs.end()) continue;
          
            seenPairs.emplace(pair);
        }
    }
  
    // Convert the vectors in our set into pairs in a vector
    std::vector<std::pair<int, int>> res;
    for (auto& pair : seenPairs)
    {
        res.push_back(std::make_pair(pair[0], pair[1]));
    }
    return res;
}