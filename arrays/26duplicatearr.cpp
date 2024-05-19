#include <bits/stdc++.h>
#include <set>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != nums[count])
            {
                nums[count + 1] = nums[i];
                count++;
            }
        }
        return count + 1;
    }
};
int main()
{
    Solution sol;
    vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << sol.removeDuplicates(vec) << endl;
    return 0;
}