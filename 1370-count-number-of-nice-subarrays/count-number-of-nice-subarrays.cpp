class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0;

        int left = 0;
        int oddCount = 0;
        int count = 0;

        for (int right = 0; right < nums.size(); right++) {
            oddCount += nums[right] % 2;

            while (oddCount > goal) {
                oddCount -= nums[left] % 2;
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};