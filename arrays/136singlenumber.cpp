#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		unordered_map<int, int> hash;
		for (auto i : nums) {
			hash[i]++;
		}
		for (auto x : hash) {
			if (x.second == 1)
				return x.first;
		}
		return -1;
	}
};

int main() {
	Solution sol;
	vector<int> vec = { 4, 1, 2, 1, 2 };
	cout << sol.singleNumber(vec) << endl;
	return 0;
}