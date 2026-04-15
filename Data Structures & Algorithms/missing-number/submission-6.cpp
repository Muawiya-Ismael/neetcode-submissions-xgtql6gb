class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int diff = 0;
        int sum = 0;
        for(int i = 0; i < n ; i++){
            sum += nums[i];
            diff += i;
        }
        return (diff + n) - sum;
    }
};