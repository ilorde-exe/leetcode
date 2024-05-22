#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int Max = 0, j = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 1) {
				j++;
			}
			else {
				j = 0;
			}
			Max = max(j, Max);
		}
		return Max;
	}
};

int main() {
	Solution sol;
	vector<int> vec = { 0, 0, 1, 1, 1, 1 };
	cout << sol.findMaxConsecutiveOnes(vec) << endl;
	return 0;
}