#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int n = nums.size(), arrTotal = 0;
		for (int i = 0; i < n; i++) {
			arrTotal += nums[i];
		}
		int total = (n * (n + 1)) / 2;
		return total - arrTotal;
	}
};

int main() {
	Solution sol;
	vector<int> vec = { 1, 2, 3, 4, 5, 0, 7 };
	cout << sol.missingNumber(vec) << endl;
	return 0;
}