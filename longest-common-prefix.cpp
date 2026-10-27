#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix = "";

        for (unsigned int i = 0; i < strs[0].size(); i++)
        {
            for (string &str : strs)
            {
                if (i == str.size() || str[i] != strs[0][i])
                    return prefix;
            }

            prefix += strs[0][i];
        }

        return prefix;
    }
};
