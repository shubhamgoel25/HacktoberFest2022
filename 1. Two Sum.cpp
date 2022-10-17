class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            auto it = find(nums.begin(),nums.end(),target-nums[i]);
            if( it != nums.end() ){
                int a=it-nums.begin();
                if(a!=i){
                    ans={a,i};
                    break;
                }
            }
        }
        return ans;
    }
};