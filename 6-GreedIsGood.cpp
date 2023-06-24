// Greed is Good (CodeWars Exercise)

// Greed is a dice game played with five six-sided dice. Your mission, 
// should you choose to accept it, is to score a throw according to these 
// rules. You will always be given an array with five six-sided dice values.

// Three 1's => 1000 points
// Three 6's =>  600 points
// Three 5's =>  500 points
// Three 4's =>  400 points
// Three 3's =>  300 points
// Three 2's =>  200 points
// One   1   =>  100 points
// One   5   =>   50 point

#include <vector>
#include <set>
#include <unordered_map>

int score(const std::vector<int>& dice) 
{
    
    int score = 0;
  
    // Create a map to count occurences
    std::unordered_map<int, int> map;
    for(size_t i = 0; i < dice.size(); ++i)
    {
        if(map.find(dice[i]) != map.cend())
        {
        map[dice[i]] += 1;  
        }
        else
        {
        map.emplace(std::make_pair(dice[i], 1));
        }
    }
    
    // Since greed's rules only change with relation to threes and there
    // can only be one dice value with threes, we take care of this special 
    // case first and add the points to score
    
    // Find our three occurences if any
    int threeDiceValue = -1;
    for(auto m : map)
    {
        if(m.second >= 3)
        {
        threeDiceValue = m.first;
        }
    }
    
    // If we did roll a value three times, add the score
    if(threeDiceValue != -1)
    {
        if(threeDiceValue > 1)
        {
        score += threeDiceValue * 100;
        }
        else
        {
        score += threeDiceValue * 1000;
        }
        
        map[threeDiceValue] -= 3;
    }
    
    // Dice we only longer care about now
    std::set<int> validDice;
    validDice.emplace(1);
    validDice.emplace(5);
    
    // Iterate over the dice and count the points now
    for(size_t i = 0; i < dice.size(); ++i)
    {
        if(validDice.find(dice[i]) !=  validDice.cend() && map[dice[i]] > 0)
        {
        if(dice[i] == 1)
        {
            score += 100;
        }
        else
        {
            score += 50;
        }
        
        map[dice[i]] -= 1;
        }
    }
    return score;
}