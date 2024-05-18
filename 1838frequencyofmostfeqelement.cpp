#include <iostream>   // Input/output stream objects
#include <vector>     // Dynamic array
#include <map>        // Map container
#include <queue>      // Queue container
#include <stack>      // Stack container
#include <algorithm>  // Algorithms on sequences (e.g., sort, find)
#include <cassert>    // Assert function for debugging
#include <exception>  // Standard exceptions
#include <functional> // Function objects
#include <iterator>   // Iterator classes
#include <limits>     // Numeric limits
#include <numeric>    // Numeric operations (e.g., accumulate)
#include <random>     // Random number generators
#include <utility>    // Utility components (e.g., std::pair
using namespace std;

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int l = 0, r = 0, total = 0, freq = 0;
        while (r != nums.size())
        {
            total += nums[r];
            while (nums[r] * static_cast<long>(r - l + 1) > total + k)
            {
                total -= nums[l];
                l += 1;
            }

            freq = max(freq, static_cast<long>(r - l + 1));
            r += 1;
        }
        return freq;
    }
};
int main()
{
    Solution sol;
    vector<int> vec = {1, 2, 4};
    cout << sol.maxFrequency(vec, 5) << endl;
    return 0;
}