#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
  public:
    int romanToInt(string s)
    {
        int result = 0;

        unordered_map<char, int> symbol_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        for (unsigned int i = 0; i < s.size(); i++)
        {
            if (i + 1 < s.size() && symbol_map[s[i + 1]] > symbol_map[s[i]])
                result -= symbol_map[s[i]];
            else
                result += symbol_map[s[i]];
        }

        return result;
    }
};
