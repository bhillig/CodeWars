// 57 - Number of people in the bus (CodeWars Exercise)

/*
There is a bus moving in the city which takes and drops some people at each bus stop.

You are provided with a list (or array) of integer pairs. Elements of each pair represent the number of 
people that get on the bus (the first item) and the number of people that get off the bus (the second item)
at a bus stop.

Your task is to return the number of people who are still on the bus after the last bus stop
*/

#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops)
{
    int peopleCount = 0;
    
    for (auto& stop : busStops)
    {
        const int arrivals = stop.first;
        const int departures = stop.second; 
        peopleCount += arrivals - departures;
    }

    return peopleCount;
}