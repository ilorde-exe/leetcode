#include <iostream>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int d;
        while(x!=0){
            rev = rev*10 + x%10;
            x/=10;
            if(rev>INT_MAX||rev<INT_MIN) return 0;
        }
        return rev;
    }
};
int main(){
    Solution sol;
    cout << sol.reverse(1534236469) << endl;
    return 0;
}
