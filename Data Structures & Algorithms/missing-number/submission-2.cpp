class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count = 0;
        int sum = 0;
        int diff = 0;

        for (int i = 0 ; i < nums.size() ; ++i) {
            count += 1;
            sum += nums[i];
            diff += i;
        }
        return (diff + count) - sum;
        
    }
};
