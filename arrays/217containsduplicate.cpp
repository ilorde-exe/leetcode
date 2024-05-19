#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> hash;
        for (auto i : nums)
        {
            hash[i]++;
        }
        for (auto it = hash.begin(); it != hash.end(); it++)
        {
            if (it->second > 1)
                return true;
        }
        return false;
    }
};
int main()
{
    Solution sol;
    vector<int> vec = {1, 2, 3, 1};
    cout << sol.containsDuplicate(vec) << endl;
    return 0;
}