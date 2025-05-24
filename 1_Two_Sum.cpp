class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j, arr_size = nums.size();
        for(i=0; i<arr_size-1; i++){
            for(j=i+1; j<arr_size; j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {i, j};        
    }
};