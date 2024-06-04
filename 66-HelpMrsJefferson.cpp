// 66 - Help Mrs Jefferson (CodeWars Exercise)

/*
Mrs Jefferson is a great teacher. One of her strategies that helped her to reach astonishing results in the learning process is 
to have some fun with her students. At school, she wants to make an arrangement of her class to play a certain game with her pupils. 
For that, she needs to create the arrangement with the minimum amount of groups that have consecutive sizes.

Let's see. She has 14 students. After trying a bit she could do the needed arrangement: [5, 4, 3, 2]

one group of 5 students
another group of 4 students
then, another one of 3
and finally, the smallest group of 2 students.

As the game was a success, she was asked to help to the other classes to teach and show the game. That's why she desperately needs 
some help to make this required arrangements that make her spend a lot of time.
*/

#include <vector>
#include <cmath>

// Takes in a starting int (start) and returns whether or not a consecutively decreasing list
// will end up with the goal being met exactly
// Ex: n = 4, goal = 10 would return true and set res as {4, 3, 2, 1}
bool canBeFilledConsecutively(int start, int goal, std::vector<int>& res)
{
    std::vector<int> nums;
    int filled = 0;
    while (start > 0 && filled < goal)
    {
        nums.push_back(start);
        filled += start;
        if (filled == goal)
        {
            res = nums;
            return true;
        }
        start--;
    }
  
    return false;
}

std::vector<int> shortestArrang(const int& n) 
{
    std::vector<int> res;
    const int start = (int)ceil((float)n / 2);
  
    for (int i = start; i > 0; --i)
    {
        // If a consecutive list can be made, return it
        if (canBeFilledConsecutively(i, n, res)) return res;
    }
  
    return std::vector<int>{-1};
}