class Solution {
  public:
    bool isEven(int n) {
        // code here
        for(int i=0;i<n;i++){
            if(n%2==1){
                 return false;
            } else{
                return true;
            }
            n = n/2;
            
        }
        return false;
    }
};