class Solution {
public:
    string preToPost(string s) {

        reverse(s.begin(), s.end());

        stack<string> st;

        for (int i = 0; i < s.length(); i++) {

            // Operand
            if ((s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= '0' && s[i] <= '9')) {

                st.push(string(1, s[i]));
            }

            // Operator
            else {

                string op1 = st.top();
                st.pop();

                string op2 = st.top();
                st.pop();

                string temp = op1 + op2 + s[i];

                st.push(temp);
            }
        }

        return st.top();
    }
};