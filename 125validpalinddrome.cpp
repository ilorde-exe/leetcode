#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string clean,copy;
        for(char c : s){
            if(isalnum(c))
                clean+=tolower(c);
        }
        copy= clean;
        reverse(clean.begin(),clean.end());
        if(clean.compare(copy)==0){
            return true;
        }
        else return false;
        
    }
};

int main(){
    Solution sol;
    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl;
    return 0;
}