// 58 - Equal Sides of an Array (CodeWars Exercise)

/*
You are going to be given an array of integers. Your job is to take that array and find an index N 
where the sum of the integers to the left of N is equal to the sum of the integers to the right of N.

If there is no index that would make this happen, return -1.
*/

#include <vector>

int find_even_index (const std::vector<int>& numbers) 
{
    int leftSum = 0;
    int rightSum = 0;
    for (int num : numbers)
        rightSum += num;
    
    rightSum -= numbers[0];
    if (leftSum == rightSum) return 0;

    for (unsigned int i = 1; i < numbers.size(); ++i)
    {
        leftSum += numbers[i-1];
        rightSum -= numbers[i];
      
        if (leftSum == rightSum) return i;
    }
  
    return -1;
}