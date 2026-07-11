class Solution {
  public:
    string postToPre(string s) {
        // code here
        stack<string> st;
        for(int i=0;i<s.length();i++){
               if ((s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= '0' && s[i] <= '9')) {

                st.push(string(1, s[i]));
            }
            else{
                string op2 = st.top();
                st.pop();
                string op1 = st.top();
                st.pop();
                
                string temp = s[i] + op1 + op2;
                st.push(temp);
            }
        }
         return st.top();
    }
};