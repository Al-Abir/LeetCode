#include <iostream>
#include <vector>
#include <algorithm>

class LongestCommonPrefix {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string result = "";

        // Sort the vector
        std::sort(strs.begin(), strs.end());

        // Get the first and last strings
        std::string first = strs[0];
        std::string last = strs[strs.size() - 1];

        // Start comparing
        for (int i = 0; i < first.length(); i++) {
            if (first[i] != last[i])
                break;
            result += first[i];
        }

        return result;
    }
};

int main() {
    // Example usage
    LongestCommonPrefix lcp;
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    std::string result = lcp.longestCommonPrefix(strs);

    std::cout << "Longest Common Prefix: " << result << std::endl;

    return 0;
}
