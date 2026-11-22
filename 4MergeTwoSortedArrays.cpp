// 4 Merge Two Sorted Arrays
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) // ez way, use sort() combine two array
    {

        if (nums1.size() + nums2.size() == 0)
            return 0;
        nums1.reserve(nums1.size() + nums2.size());
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        sort(nums1.begin(), nums1.end());
        int last = nums1.size() - 1;
        return nums1[last / 2] * 0.5 + nums1[(last + 1) / 2] * 0.5;
    }

};

int main()
{
    Solution q;

    vector<int> a = {1, 3, 8, 9, 15};
    vector<int> b = {7, 11, 18, 19, 21, 25};
    cout << q.findMedianSortedArrays(a, b);
}