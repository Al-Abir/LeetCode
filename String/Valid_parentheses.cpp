#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st; // create an empty stack to store opening brackets

        for (char c : s) { // loop through each character in the string
            if (c == '(' || c == '{' || c == '[') {
                st.push(c); // push it onto the stack
            } else { // if the character is a closing bracket
                if (st.empty() || // if the stack is empty or
                    (c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false; // mismatched closing bracket
                }
                st.pop(); // otherwise, pop the opening bracket from the stack
            }
        }

        return st.empty(); // return true if the stack is empty (all brackets matched)
    }
};

int main() {
    Solution solution;

    // Test cases
    std::cout << std::boolalpha; // To print 'true' or 'false' instead of '1' or '0'
    std::cout << solution.isValid("()") << std::endl;       // true
    std::cout << solution.isValid("()[]{}") << std::endl;   // true
    std::cout << solution.isValid("(]") << std::endl;        // false
    std::cout << solution.isValid("([)]") << std::endl;      // false
    std::cout << solution.isValid("{[]}") << std::endl;      // true

    return 0;
}
