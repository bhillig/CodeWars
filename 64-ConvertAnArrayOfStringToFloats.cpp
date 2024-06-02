// 64 - Convert an array of strings to array of numbers (CodeWars Exercise)

#include <vector>
#include <string>

std::vector<float> to_float_array(const std::vector<std::string>& arr) 
{
    std::vector<float> res;
    for (const std::string& str : arr)
    {
        res.push_back(std::atof(str.c_str()));
    }
    return res;
}