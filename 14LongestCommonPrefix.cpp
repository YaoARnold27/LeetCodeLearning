// 14 Longest Common Prefix
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";
        if (strs.size() == 1)
            return strs[0];

        int counter = 0;
        int end = 0;
        string result = "";
        while (!end)
        {
            for (int i = 0; i < strs.size() - 1; i++)
            {
                if (strs[i].empty() || counter == strs[i].length() || counter == strs[i + 1].length() || strs[i][counter] != strs[i + 1][counter])
                    end = 1;
            }
            if (!end)
                result += strs[0][counter];
            else
            {
                break;
            }
            counter++;
        }
        return result;
    }
};

int main()
{
    Solution q;
    vector<string> w = {""};
    cout << q.longestCommonPrefix(w);

    return 0;
}