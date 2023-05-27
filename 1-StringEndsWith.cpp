#include <string>
#include <iostream>

bool solution(const std::string& str, const std::string& ending) 
{
    if(str.size() < ending.size()) return false;

    int i = str.size() - ending.size();
    int j = 0;

    // Compare str[i] to ending[j], if all match return true
    while(i < str.size() && j < ending.size())
    {
        if (str[i] != ending[j]) return false;

        ++i;
        ++j;
    }

    // Or use the std function
    // return std::equal(ending.begin(), ending.end(), str.end() - ending.size());
    return true;
}

int main(int argc, char** argv)
{
    if (argc < 3) return -1;

    if(solution(argv[1], argv[2]))
    {
        std::cout << "True!\n";
    }
    else
    {
        std::cout << "False!\n";
    }

    return 0;
}