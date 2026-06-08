class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n);
        int PosIdx =0;
        int NegIdx=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[PosIdx] = nums[i];
                PosIdx+=2;
            }else{
                ans[NegIdx] = nums[i];
                NegIdx +=2;
            }
        }
        return ans;
    }
};