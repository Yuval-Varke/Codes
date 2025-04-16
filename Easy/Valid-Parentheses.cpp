#include <iostream>
#include <stack>
#include <string> // Include this for std::string

using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                    st.push(s[i]);
                } else {
                    if (st.empty() || 
                        (s[i] == ')' && st.top() != '(') || 
                        (s[i] == '}' && st.top() != '{') || 
                        (s[i] == ']' && st.top() != '[')) {
                        return false;
                    }
                    st.pop();
                }
            }
            return st.empty();
        }
};

int main() {
    Solution solution;
    string test = "()[{}";
    cout << (solution.isValid(test) ? "Valid" : "Invalid") << endl; // Output: Valid
    return 0;
}