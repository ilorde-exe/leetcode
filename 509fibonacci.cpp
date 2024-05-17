#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int fib(int n) {
        int t=0,t1=1,next;
        next=t1+t;
        for(int i=3;i<=n;i++){
            t=t1;
            t1=next;
            next=t+t1;
            
        }
        if(n==0) return t;
        if(n==1) return t1;
        return next;
    }
};
int main(){
    Solution sol;
    cout << sol.fib(2) << endl;
    return 0;
}
