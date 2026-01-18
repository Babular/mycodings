class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int big = *max_element(candies.begin(), candies.end());
        for (int i : candies) {
            if (i + extraCandies >= big) {
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }
        return result;
    }
};