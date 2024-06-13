// 70 - Prize Draw (CodeWars Exercise)

/*
To participate in a prize draw each one gives his/her firstname.

Each letter of a firstname has a value which is its rank in the English alphabet. 
A and a have rank 1, B and b rank 2 and so on.

The length of the firstname is added to the sum of these ranks hence a number som.

An array of random weights is linked to the firstnames and each som is multiplied by its 
corresponding weight to get what they call a winning number.
*/

#include <string>
#include <vector>

class Rank
{
public:
    static int getScore(const std::string& name)
    {
        int score = name.size();
      
        for (char c : name)
        {
            c = tolower(c);
            score += (c - 'a');
        }
            
      
        return score;
    }
  
    static std::string nthRank(const std::string &st, std::vector<int> &we, int n)
    {
        if (st.empty()) 
            return "No participants.";
      
        std::vector<std::pair<int, std::string>> scores;
        
        std::stringstream ss(st);
        std::string name;
        char delimiter = ',';
        
        size_t index = 0;
        while (getline(ss, name, delimiter))
        {
            scores.push_back(std::make_pair(getScore(name) * we[index], name));
            index++;
        }
      
        if (n > scores.size())
            return "Not enough participants.";
      
        std::sort(scores.begin(), scores.end());
      
        
        int rank = scores.size() - n;
        return scores[rank].second;
    }
};
