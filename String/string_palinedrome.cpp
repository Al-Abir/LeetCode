
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(std::string s) {
        int start = 0;
        int end = s.size() - 1;
        
        while (start <= end) {
            if (!isalnum(s[start])) {
                start++;
                continue;
            }
            
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
         

            if (tolower(s[start]) != tolower(s[end]))
                return false;
            else {
                start++;
                end--;
            }
        }
        return true;  
    }
};

int main() {
    Solution solution;

    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    
    cout << "\"" << test1 << "\" is " << (solution.isPalindrome(test1) ? "a palindrome." : "not a palindrome.") << std::endl;
    cout << "\"" << test2 << "\" is " << (solution.isPalindrome(test2) ? "a palindrome." : "not a palindrome.") << std::endl;

    return 0;

    return 0;
}
