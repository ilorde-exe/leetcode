#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int l = 0;
        for (int r = 0; r < nums.size(); r++)
        {
            if (nums[r] != 0)
            {
                swap(nums[r], nums[l]);
                l++;
            }
        }
    }
};

int main()
{
    Solution sol;
    vector<int> vec = {0, 0, 1, 0, 2, 2, 3, 3, 4};
    sol.moveZeroes(vec);
    return 0;
}