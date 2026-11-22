// 1 Two Sum
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hashMap;
        hashMap.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            auto it = hashMap.find(target - nums[i]);
            if (it != hashMap.end())
                return {it->second, i}; // it->second always smaller than i

            hashMap.insert({nums[i], i});
        }
    }
};

int main()
{

    return 0;
}