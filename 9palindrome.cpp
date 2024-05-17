#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int n=x;
        while(x!=0){
            rev = rev*10 + x%10;
            x/=10;
        }
        if(n<0)return false;
        return rev==n;
    }
};

int main(){
    Solution sol;
    cout << sol.isPalindrome(121) << endl;
    return 0;
}