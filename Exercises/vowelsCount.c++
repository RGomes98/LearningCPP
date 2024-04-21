#include <iostream>
#include <set>

typedef std::set<char> vowels_t;

int VowelsCount(const std::string &inputStr)
{
    vowels_t vowels{'a', 'e', 'i', 'o', 'u'};
    int vowels_count = 0;

    for (int i = 0; i < inputStr.size(); i++)
    {
        vowels_count += vowels.count(inputStr[i]);
    }

    return vowels_count;
};

int main()
{

    std::cout << VowelsCount("abracadabra") << std::endl;
    return 0;
}