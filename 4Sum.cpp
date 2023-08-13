// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>> op;
//         set<vector<int>> s;
//         sort(nums.begin(),nums.end());         // -2 -1 0 0 1 2
//         for(int i = 0; i<nums.size();i++){
//             int j = i +1;
//             int k = j+1;
//             int l = nums.size() -1;
//             while(k<l){ 
//               int sum= nums[i] + nums[j] + nums[k] + nums[l];
//               if(sum == target){
//                  s.insert({nums[i], nums[j], nums[k], nums[l]});
//                  j++;
//                  k++;
//                  l--;
//               }
//               else if(sum < target){
//                   j++;
//                   k++;
//               }
//               else{
//                   l--;
//               }
//             }
//         }
//         for(auto it : s){
//            op.push_back(it);
//         }
//         return op;
//     }
// };

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, high = n-1;
                while(low < high){
                    if(nums[low] + nums[high] < newTarget){
                        low++;
                    }
                    else if(nums[low] + nums[high] > newTarget){
                        high--;
                    }
                    else{
                        set.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++; high--;
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};