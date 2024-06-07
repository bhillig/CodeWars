// 69 - The Latest Clock (CodeWars Exercise)

/*
Write a function which receives 4 digits and returns the latest time of day that can be built with those digits.

The time should be in HH:MM format.

Examples:

digits: 1, 9, 8, 3 => result: "19:38"
digits: 9, 1, 2, 5 => result: "21:59" (19:25 is also a valid time, but 21:59 is later)
*/

#include <string>
#include <vector>
#include <iostream>

std::string getLatestHour(std::vector<int>& digits)
{
    int hourA = 0;
    for (int num : digits)
    {
        if (num == 2 || num == 1 || num == 0)
        {
            hourA = std::max(num, hourA);
        }
    }
  
    digits.erase(std::remove(digits.begin(), digits.end(), hourA), digits.end());
  
    const int maxSecondHour = hourA == 2 ? 3 : 9;
    int hourB = 0;
  
    for (int num : digits)
    {
        if (num <= maxSecondHour)
        {
            hourB = std::max(num, hourB);
        }
    }
  
    digits.erase(std::remove(digits.begin(), digits.end(), hourB), digits.end());
  
    return std::to_string(hourA) + std::to_string(hourB);
}

std::string getLatestMin(std::vector<int>& digits)
{
    const int maxFirstHand = 5;
  
    int minuteA = 0;
    for (int num : digits)
    {
        if (num <= maxFirstHand)
        {
            minuteA = std::max(num, minuteA);
        }
    }
    
    digits.erase(std::remove(digits.begin(), digits.end(), minuteA), digits.end());
  
    int minuteB = digits[0];
  
    
    return std::to_string(minuteA) + std::to_string(minuteB);
    
}
std::string latestClock(int a, int b, int c, int d) 
{
    std::string latestClock = "";
    
    std::vector<int> digits = {a, b, c, d};
    
    latestClock += getLatestHour(digits);
    latestClock += ":";
    latestClock += getLatestMin(digits);
  
    return latestClock;
}