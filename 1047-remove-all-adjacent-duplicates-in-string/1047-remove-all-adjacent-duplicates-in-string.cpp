class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for (char ch : s) {
            if (!st.empty() && st.top() == ch) {
                st.pop();              // Remove duplicate
            } else {
                st.push(ch);           // Add character
            }
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};