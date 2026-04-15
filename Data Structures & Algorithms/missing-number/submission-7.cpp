class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int diff = 0;
        int sum = 0;
        for(int i = 0; i < nums.size() ; i++){
            sum += nums[i];
            diff += i;
        }
        return (diff + nums.size()) - sum;
    }
};