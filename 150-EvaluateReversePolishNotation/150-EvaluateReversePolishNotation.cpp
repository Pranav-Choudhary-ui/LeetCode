// Last updated: 21/07/2026, 09:07:24
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string i : tokens) {
            if (i == "+" || i == "-" || i == "*" || i == "/") {
                int f = st.top(); st.pop();
                int s = st.top(); st.pop();
                int ans;

                if (i == "+") ans = s + f;
                else if (i == "-") ans = s - f;
                else if (i == "*") ans = s * f;
                else if (i == "/") ans = s / f;

                st.push(ans);
            } else {
                st.push(stoi(i));
            }
        }

        return st.top();
    }
};
