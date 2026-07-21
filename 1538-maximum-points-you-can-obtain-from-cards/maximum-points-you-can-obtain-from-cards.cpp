class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0;
        int n = cardPoints.size();

        // Sum of first k cards
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }

        int maxsum = lsum;
        int rindex = n - 1;

        // Shift one card from left to right
        for (int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];
            rsum += cardPoints[rindex];
            rindex--;

            maxsum = max(maxsum, lsum + rsum);
        }

        return maxsum;
    }
};