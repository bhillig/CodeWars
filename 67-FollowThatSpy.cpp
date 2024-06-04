// 67 - Follow that spy (CodeWars Exercise)

/*
We are diligently pursuing our elusive operative, Matthew Knight, who also goes by the alias Roy Miller. 
He employs a nomadic lifestyle to evade detection, constantly moving from one location to another, with each 
of his journeys following a perplexing and non-standard sequence of itineraries. Our mission is to decipher the 
routes he will undertake during each of his voyages.

Task
You've been provided with an array of itinerary routes, decipher the precise destinations he will visit in the correct 
sequence according to his meticulously planned itineraries.

Example
Based on the provided routes:

[ [USA, BRA], [JPN, PHL], [BRA, UAE], [UAE, JPN] ]
The correct sequence of destinations is:

"USA, BRA, UAE, JPN, PHL"
*/

#include <vector>
#include <string>
#include <utility>
#include <unordered_map>
#include <unordered_set>

std::string calculateStartCity(const std::unordered_set<std::string>& cities, const std::unordered_map<std::string, std::string>& destinationFrom)
{
    std::unordered_set<std::string> flownTo;
  
    for (auto& [dep, dest] : destinationFrom)
        flownTo.insert(dest);
  
    for (const std::string& city : cities)
    {
        if (flownTo.find(city) == flownTo.end())
            return city;
    }
    
    return "";
}

std::string find_routes (const std::vector<std::pair<std::string, std::string>> &routes) 
{
    std::string res;
  
    std::unordered_set<std::string> cities;
  
    // Create a map from departures to destinations and create a set of cities
    std::unordered_map<std::string, std::string> destinationFrom;
    for (auto& route : routes)
    {
        destinationFrom[route.first] = route.second;
      
        cities.insert(route.first);
        cities.insert(route.second);
    }
        
    // Find the start city
    std::string city = calculateStartCity(cities, destinationFrom);
    
    res += city;

    while (destinationFrom.find(city) != destinationFrom.end())
    {
        city = destinationFrom[city];
        res += ", " + city;
    }
  
    return res;
}