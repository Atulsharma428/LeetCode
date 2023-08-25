class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), a = 0, sum = nums[0];
        for(int i =1; i<n;i++){
           a = a+i;
           sum = sum + nums[i];
        }
        a=a+n;
        return a - sum;
    }
};