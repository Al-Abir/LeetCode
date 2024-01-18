#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int numB = count(s.begin(), s.end(), 'B');

        if (numB == k) {
            cout << 0 << "\n"; // No changes needed
            continue; // Skip to the next test case
        }

        int a = 0, b = 0;
      
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                a++;
            } else {
                b++;
            }
                if (a == k - numB) {
                    cout << 1 << endl;
                    cout << i + 1 << " B\n";
                    
                    break;
                }
                if (b == numB - k) {
                    cout << 1 << endl;
                    cout << i + 1 << " A\n";
                    break;
                }
            }
        }

       
     return 0;
    }

   

