#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> temp;
        k = k % nums.size();
        for (int i = nums.size() - k; i < nums.size(); i++)
        {
            temp.push_back(nums[i]);
            nums[i] = 0;
        }
        for (int i = nums.size() - k - 1; i >= 0; i--)
        {
            nums[i + k] = nums[i];
        }
        for (int i = 0; i < k; i++)
        {
            nums[i] = temp[i];
        }
    }
};

int main()
{
    Solution sol;
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    sol.rotate(vec, 10);
    return 0;
}