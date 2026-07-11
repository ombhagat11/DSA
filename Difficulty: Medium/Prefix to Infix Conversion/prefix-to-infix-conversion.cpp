class Solution {
public:
    bool isOperator(char ch) {
        return ch == '+' || ch == '-' ||
               ch == '*' || ch == '/' ||
               ch == '^';
    }

    string preToInfix(string s) {

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

                string ans = "(" + op1 + s[i] + op2 + ")";

                st.push(ans);
            }
        }

        return st.top();
    }
};