// 3 Longest Substring without Repeating Characters
#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    const int SIZE = s.size();
    if (SIZE <= 1)
        return SIZE; // initial case
    int a = 0, result = 0;
    int lastFind[259]; // the last of each char occur
    for (int i = 0; i < 259; i++)
        lastFind[i] = -1;

    for (int i = 0; i < SIZE; i++)
    {
        if (a <= lastFind[(int)s[i]])
        {
            a = lastFind[(int)s[i]] + 1;
        }
        lastFind[(int)s[i]] = i;
        result = max(result, i - a + 1);
    }
    return result;
}

int main()
{
    cout << lengthOfLongestSubstring("yaoch@ROG-GA605:/mnt/c/Users/yaoch/Desktop/LeetCodeLearning$ ");
    return 0;
}