#include <bits/stdc++.h>
#include <set>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > nums[(i + 1) % nums.size()])
            {
                count++;
            }
            if (count > 1)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution sol;
    vector<int> vec = {3, 4, 5, 1};
    cout << sol.check(vec) << endl;
    return 0;
}