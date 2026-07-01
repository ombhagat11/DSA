class Solution {
  public:
  
  void revserVVV(stack<int> & st, int num){
      if(st.empty()){
          st.push(num);
          return;
      } 
       int x = st.top();
       st.pop();
       
       revserVVV(st, num);
       st.push(x);
      
      
      
  }
    void reverseStack(stack<int> &st) {
        // code here
          if(st.empty()){
            return;
        }
        
        int num = st.top();
        st.pop();
        
       reverseStack(st);
        revserVVV(st,num);
    }
};